/* SPDX-License-Identifier: GPL-2.0 */
#undef TRACE_SYSTEM
#define TRACE_SYSTEM power

#if !defined(_TRACE_POWER_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_POWER_H

#include <linux/cpufreq.h>
#include <linux/ktime.h>
#include <linux/pm_qos.h>
#include <linux/tracepoint.h>
#include <linux/trace_events.h>

#define TPS(x)  tracepoint_string(x)

DECLARE_EVENT_CLASS(cpu,

	TP_PROTO(unsigned int state, unsigned int cpu_id),

	TP_ARGS(state, cpu_id),

	TP_STRUCT__entry(
		__field(	u32,		state		)
		__field(	u32,		cpu_id		)
	),

	TP_fast_assign(
		__entry->state = state;
		__entry->cpu_id = cpu_id;
	),

	TP_printk("state=%lu cpu_id=%lu", (unsigned long)__entry->state,
		  (unsigned long)__entry->cpu_id)
);

DEFINE_EVENT(cpu, cpu_idle,

	TP_PROTO(unsigned int state, unsigned int cpu_id),

	TP_ARGS(state, cpu_id)
);

TRACE_EVENT(exynos_slack_func,

	TP_PROTO(int cpu),

	TP_ARGS(cpu),

	TP_STRUCT__entry(
		__field(int, cpu)
	),

	TP_fast_assign(
		__entry->cpu = cpu;
	),

	TP_printk("cpu=%d SLACK EXPIRED", __entry->cpu)
);

TRACE_EVENT(exynos_slack,

	TP_PROTO(int cpu, unsigned long util,
		unsigned long min, unsigned long action, int ret),

	TP_ARGS(cpu, util, min, action, ret),

	TP_STRUCT__entry(
		__field(int, cpu)
		__field(unsigned long, util)
		__field(unsigned long, min)
		__field(unsigned long, action)
		__field(int, ret)
	),

	TP_fast_assign(
		__entry->cpu = cpu;
		__entry->util = util;
		__entry->min = min;
		__entry->action = action;
		__entry->ret = ret;
	),

	TP_printk("cpu=%d util=%ld min=%ld action=%ld ret=%d", __entry->cpu,
			__entry->util, __entry->min, __entry->action, __entry->ret)
);

TRACE_EVENT(powernv_throttle,

	TP_PROTO(int chip_id, const char *reason, int pmax),

	TP_ARGS(chip_id, reason, pmax),

	TP_STRUCT__entry(
		__field(int, chip_id)
		__string(reason, reason)
		__field(int, pmax)
	),

	TP_fast_assign(
		__entry->chip_id = chip_id;
		__assign_str(reason, reason);
		__entry->pmax = pmax;
	),

	TP_printk("Chip %d Pmax %d %s", __entry->chip_id,
		  __entry->pmax, __get_str(reason))
);

TRACE_EVENT(pstate_sample,

	TP_PROTO(u32 core_busy,
		u32 scaled_busy,
		u32 from,
		u32 to,
		u64 mperf,
		u64 aperf,
		u64 tsc,
		u32 freq,
		u32 io_boost
		),

	TP_ARGS(core_busy,
		scaled_busy,
		from,
		to,
		mperf,
		aperf,
		tsc,
		freq,
		io_boost
		),

	TP_STRUCT__entry(
		__field(u32, core_busy)
		__field(u32, scaled_busy)
		__field(u32, from)
		__field(u32, to)
		__field(u64, mperf)
		__field(u64, aperf)
		__field(u64, tsc)
		__field(u32, freq)
		__field(u32, io_boost)
		),

	TP_fast_assign(
		__entry->core_busy = core_busy;
		__entry->scaled_busy = scaled_busy;
		__entry->from = from;
		__entry->to = to;
		__entry->mperf = mperf;
		__entry->aperf = aperf;
		__entry->tsc = tsc;
		__entry->freq = freq;
		__entry->io_boost = io_boost;
		),

	TP_printk("core_busy=%lu scaled=%lu from=%lu to=%lu mperf=%llu aperf=%llu tsc=%llu freq=%lu io_boost=%lu",
		(unsigned long)__entry->core_busy,
		(unsigned long)__entry->scaled_busy,
		(unsigned long)__entry->from,
		(unsigned long)__entry->to,
		(unsigned long long)__entry->mperf,
		(unsigned long long)__entry->aperf,
		(unsigned long long)__entry->tsc,
		(unsigned long)__entry->freq,
		(unsigned long)__entry->io_boost
		)

);

/* This file can get included multiple times, TRACE_HEADER_MULTI_READ at top */
#ifndef _PWR_EVENT_AVOID_DOUBLE_DEFINING
#define _PWR_EVENT_AVOID_DOUBLE_DEFINING

#define PWR_EVENT_EXIT -1
#endif

#define pm_verb_symbolic(event) \
	__print_symbolic(event, \
		{ PM_EVENT_SUSPEND, "suspend" }, \
		{ PM_EVENT_RESUME, "resume" }, \
		{ PM_EVENT_FREEZE, "freeze" }, \
		{ PM_EVENT_QUIESCE, "quiesce" }, \
		{ PM_EVENT_HIBERNATE, "hibernate" }, \
		{ PM_EVENT_THAW, "thaw" }, \
		{ PM_EVENT_RESTORE, "restore" }, \
		{ PM_EVENT_RECOVER, "recover" })

DEFINE_EVENT(cpu, cpu_frequency,

	TP_PROTO(unsigned int frequency, unsigned int cpu_id),

	TP_ARGS(frequency, cpu_id)
);

TRACE_EVENT(cpu_frequency_limits,

	TP_PROTO(struct cpufreq_policy *policy),

	TP_ARGS(policy),

	TP_STRUCT__entry(
		__field(u32, min_freq)
		__field(u32, max_freq)
		__field(u32, cpu_id)
	),

	TP_fast_assign(
		__entry->min_freq = policy->min;
		__entry->max_freq = policy->max;
		__entry->cpu_id = policy->cpu;
	),

	TP_printk("min=%lu max=%lu cpu_id=%lu",
		  (unsigned long)__entry->min_freq,
		  (unsigned long)__entry->max_freq,
		  (unsigned long)__entry->cpu_id)
);

TRACE_EVENT(device_pm_callback_start,

	TP_PROTO(struct device *dev, const char *pm_ops, int event),

	TP_ARGS(dev, pm_ops, event),

	TP_STRUCT__entry(
		__string(device, dev_name(dev))
		__string(driver, dev_driver_string(dev))
		__string(parent, dev->parent ? dev_name(dev->parent) : "none")
		__string(pm_ops, pm_ops ? pm_ops : "none ")
		__field(int, event)
	),

	TP_fast_assign(
		__assign_str(device, dev_name(dev));
		__assign_str(driver, dev_driver_string(dev));
		__assign_str(parent,
			dev->parent ? dev_name(dev->parent) : "none");
		__assign_str(pm_ops, pm_ops ? pm_ops : "none ");
		__entry->event = event;
	),

	TP_printk("%s %s, parent: %s, %s[%s]", __get_str(driver),
		__get_str(device), __get_str(parent), __get_str(pm_ops),
		pm_verb_symbolic(__entry->event))
);

TRACE_EVENT(device_pm_callback_end,

	TP_PROTO(struct device *dev, int error),

	TP_ARGS(dev, error),

	TP_STRUCT__entry(
		__string(device, dev_name(dev))
		__string(driver, dev_driver_string(dev))
		__field(int, error)
	),

	TP_fast_assign(
		__assign_str(device, dev_name(dev));
		__assign_str(driver, dev_driver_string(dev));
		__entry->error = error;
	),

	TP_printk("%s %s, err=%d",
		__get_str(driver), __get_str(device), __entry->error)
);

TRACE_EVENT(suspend_resume,

	TP_PROTO(const char *action, int val, bool start),

	TP_ARGS(action, val, start),

	TP_STRUCT__entry(
		__field(const char *, action)
		__field(int, val)
		__field(bool, start)
	),

	TP_fast_assign(
		__entry->action = action;
		__entry->val = val;
		__entry->start = start;
	),

	TP_printk("%s[%u] %s", __entry->action, (unsigned int)__entry->val,
		(__entry->start)?"begin":"end")
);

DECLARE_EVENT_CLASS(wakeup_source,

	TP_PROTO(const char *name, unsigned int state),

	TP_ARGS(name, state),

	TP_STRUCT__entry(
		__string(       name,           name            )
		__field(        u64,            state           )
	),

	TP_fast_assign(
		__assign_str(name, name);
		__entry->state = state;
	),

	TP_printk("%s state=0x%lx", __get_str(name),
		(unsigned long)__entry->state)
);

DEFINE_EVENT(wakeup_source, wakeup_source_activate,

	TP_PROTO(const char *name, unsigned int state),

	TP_ARGS(name, state)
);

DEFINE_EVENT(wakeup_source, wakeup_source_deactivate,

	TP_PROTO(const char *name, unsigned int state),

	TP_ARGS(name, state)
);

/*
 * The clock events are used for clock enable/disable and for
 *  clock rate change
 */
DECLARE_EVENT_CLASS(clock,

	TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),

	TP_ARGS(name, state, cpu_id),

	TP_STRUCT__entry(
		__string(       name,           name            )
		__field(        u64,            state           )
		__field(        u64,            cpu_id          )
	),

	TP_fast_assign(
		__assign_str(name, name);
		__entry->state = state;
		__entry->cpu_id = cpu_id;
	),

	TP_printk("%s state=%lu cpu_id=%lu", __get_str(name),
		(unsigned long)__entry->state, (unsigned long)__entry->cpu_id)
);

DEFINE_EVENT(clock, clock_enable,

	TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),

	TP_ARGS(name, state, cpu_id)
);

DEFINE_EVENT(clock, clock_disable,

	TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),

	TP_ARGS(name, state, cpu_id)
);

DEFINE_EVENT(clock, clock_set_rate,

	TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),

	TP_ARGS(name, state, cpu_id)
);

/*
 * The power domain events are used for power domains transitions
 */
DECLARE_EVENT_CLASS(power_domain,

	TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),

	TP_ARGS(name, state, cpu_id),

	TP_STRUCT__entry(
		__string(       name,           name            )
		__field(        u64,            state           )
		__field(        u64,            cpu_id          )
	),

	TP_fast_assign(
		__assign_str(name, name);
		__entry->state = state;
		__entry->cpu_id = cpu_id;
),

	TP_printk("%s state=%lu cpu_id=%lu", __get_str(name),
		(unsigned long)__entry->state, (unsigned long)__entry->cpu_id)
);

DEFINE_EVENT(power_domain, power_domain_target,

	TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),

	TP_ARGS(name, state, cpu_id)
);

/*
 * The pm qos events are used for pm qos update
 */
DECLARE_EVENT_CLASS(pm_qos_request,

	TP_PROTO(int pm_qos_class, s32 value),

	TP_ARGS(pm_qos_class, value),

	TP_STRUCT__entry(
		__field( int,                    pm_qos_class   )
		__field( s32,                    value          )
	),

	TP_fast_assign(
		__entry->pm_qos_class = pm_qos_class;
		__entry->value = value;
	),

	TP_printk("pm_qos_class=%s value=%d",
		  __print_symbolic(__entry->pm_qos_class,
			{ PM_QOS_CPU_DMA_LATENCY,	"CPU_DMA_LATENCY" },
			{ PM_QOS_NETWORK_LATENCY,	"NETWORK_LATENCY" },
			{ PM_QOS_CLUSTER0_FREQ_MIN,	"CLUSTER0_FREQ_MIN" },
			{ PM_QOS_CLUSTER0_FREQ_MAX,	"CLUSTER0_FREQ_MAX" },
			{ PM_QOS_CLUSTER1_FREQ_MIN,	"CLUSTER1_FREQ_MIN" },
			{ PM_QOS_CLUSTER1_FREQ_MAX,	"CLUSTER1_FREQ_MAX" },
			{ PM_QOS_CLUSTER2_FREQ_MIN,	"CLUSTER2_FREQ_MIN" },
			{ PM_QOS_CLUSTER2_FREQ_MAX,	"CLUSTER2_FREQ_MAX" },
			{ PM_QOS_CPU_ONLINE_MIN,	"CPU_ONLINE_MIN" },
			{ PM_QOS_CPU_ONLINE_MAX,	"CPU_ONLINE_MAX" },
			{ PM_QOS_DEVICE_THROUGHPUT,     "DEVICE_THROUGHPUT" },
			{ PM_QOS_INTCAM_THROUGHPUT,     "INTCAM_THROUGHPUT" },
			{ PM_QOS_DEVICE_THROUGHPUT_MAX,	"DEVICE_THROUGHPUT_MAX" },
			{ PM_QOS_INTCAM_THROUGHPUT_MAX,	"INTCAM_THROUGHPUT_MAX" },
			{ PM_QOS_BUS_THROUGHPUT,	"BUS_THROUGHPUT" },
			{ PM_QOS_BUS_THROUGHPUT_MAX,	"BUS_THROUGHPUT_MAX" },
			{ PM_QOS_NETWORK_THROUGHPUT,	"NETWORK_THROUGHPUT" },
			{ PM_QOS_MEMORY_BANDWIDTH,	"MEMORY_BANDWIDTH" },
			{ PM_QOS_DISPLAY_THROUGHPUT,	"DISPLAY_THROUGHPUT" },
			{ PM_QOS_DISPLAY_THROUGHPUT_MAX,"DISPLAY_THROUGHPUT_MAX" },
			{ PM_QOS_CAM_THROUGHPUT,	"CAM_THROUGHPUT" },
			{ PM_QOS_AUD_THROUGHPUT,	"AUD_THROUGHPUT" },
			{ PM_QOS_DSP_THROUGHPUT,	"DSP_THROUGHPUT" },
			{ PM_QOS_DNC_THROUGHPUT,	"DNC_THROUGHPUT" },
			{ PM_QOS_FSYS0_THROUGHPUT,	"FSYS0_THROUGHPUT" },
			{ PM_QOS_CAM_THROUGHPUT_MAX,	"CAM_THROUGHPUT_MAX" },
			{ PM_QOS_AUD_THROUGHPUT_MAX,	"AUD_THROUGHPUT_MAX" },
			{ PM_QOS_DSP_THROUGHPUT_MAX,	"DSP_THROUGHPUT_MAX" },
			{ PM_QOS_DNC_THROUGHPUT_MAX,	"DNC_THROUGHPUT_MAX" },
			{ PM_QOS_FSYS0_THROUGHPUT_MAX,	"FSYS0_THROUGHPUT_MAX" },
			{ PM_QOS_MFC_THROUGHPUT,	"MFC_THROUGHPUT" },
			{ PM_QOS_NPU_THROUGHPUT,	"NPU_THROUGHPUT" },
			{ PM_QOS_MFC_THROUGHPUT_MAX,	"MFC_THROUGHPUT_MAX" },
			{ PM_QOS_NPU_THROUGHPUT_MAX,	"NPU_THROUGHPUT_MAX" },
			{ PM_QOS_TNR_THROUGHPUT,	"TNR_THROUGHPUT" },
			{ PM_QOS_TNR_THROUGHPUT_MAX,	"TNR_THROUGHPUT_MAX" },
			{ PM_QOS_GPU_THROUGHPUT_MIN,	"GPU_THROUGHPUT_MIN" },
			{ PM_QOS_GPU_THROUGHPUT_MAX,	"GPU_THROUGHPUT_MAX" }),
		  __entry->value)
);

DEFINE_EVENT(pm_qos_request, pm_qos_add_request,

	TP_PROTO(int pm_qos_class, s32 value),

	TP_ARGS(pm_qos_class, value)
);

DEFINE_EVENT(pm_qos_request, pm_qos_update_request,

	TP_PROTO(int pm_qos_class, s32 value),

	TP_ARGS(pm_qos_class, value)
);

DEFINE_EVENT(pm_qos_request, pm_qos_remove_request,

	TP_PROTO(int pm_qos_class, s32 value),

	TP_ARGS(pm_qos_class, value)
);

TRACE_EVENT(pm_qos_update_request_timeout,

	TP_PROTO(int pm_qos_class, s32 value, unsigned long timeout_us),

	TP_ARGS(pm_qos_class, value, timeout_us),

	TP_STRUCT__entry(
		__field( int,                    pm_qos_class   )
		__field( s32,                    value          )
		__field( unsigned long,          timeout_us     )
	),

	TP_fast_assign(
		__entry->pm_qos_class = pm_qos_class;
		__entry->value = value;
		__entry->timeout_us = timeout_us;
	),

	TP_printk("pm_qos_class=%s value=%d, timeout_us=%ld",
		  __print_symbolic(__entry->pm_qos_class,
			{ PM_QOS_CPU_DMA_LATENCY,	"CPU_DMA_LATENCY" },
			{ PM_QOS_NETWORK_LATENCY,	"NETWORK_LATENCY" },
			{ PM_QOS_CLUSTER0_FREQ_MIN,	"CLUSTER0_FREQ_MIN" },
			{ PM_QOS_CLUSTER0_FREQ_MAX,	"CLUSTER0_FREQ_MAX" },
			{ PM_QOS_CLUSTER1_FREQ_MIN,	"CLUSTER1_FREQ_MIN" },
			{ PM_QOS_CLUSTER1_FREQ_MAX,	"CLUSTER1_FREQ_MAX" },
			{ PM_QOS_CLUSTER2_FREQ_MIN,	"CLUSTER2_FREQ_MIN" },
			{ PM_QOS_CLUSTER2_FREQ_MAX,	"CLUSTER2_FREQ_MAX" },
			{ PM_QOS_CPU_ONLINE_MIN,	"CPU_ONLINE_MIN" },
			{ PM_QOS_CPU_ONLINE_MAX,	"CPU_ONLINE_MAX" },
			{ PM_QOS_DEVICE_THROUGHPUT,     "DEVICE_THROUGHPUT" },
			{ PM_QOS_INTCAM_THROUGHPUT,     "INTCAM_THROUGHPUT" },
			{ PM_QOS_DEVICE_THROUGHPUT_MAX,	"DEVICE_THROUGHPUT_MAX" },
			{ PM_QOS_INTCAM_THROUGHPUT_MAX,	"INTCAM_THROUGHPUT_MAX" },
			{ PM_QOS_BUS_THROUGHPUT,	"BUS_THROUGHPUT" },
			{ PM_QOS_BUS_THROUGHPUT_MAX,	"BUS_THROUGHPUT_MAX" },
			{ PM_QOS_NETWORK_THROUGHPUT,	"NETWORK_THROUGHPUT" },
			{ PM_QOS_MEMORY_BANDWIDTH,	"MEMORY_BANDWIDTH" },
			{ PM_QOS_DISPLAY_THROUGHPUT,	"DISPLAY_THROUGHPUT" },
			{ PM_QOS_DISPLAY_THROUGHPUT_MAX,"DISPLAY_THROUGHPUT_MAX" },
			{ PM_QOS_CAM_THROUGHPUT,	"CAM_THROUGHPUT" },
			{ PM_QOS_AUD_THROUGHPUT,	"AUD_THROUGHPUT" },
			{ PM_QOS_DSP_THROUGHPUT,	"DSP_THROUGHPUT" },
			{ PM_QOS_DNC_THROUGHPUT,	"DNC_THROUGHPUT" },
			{ PM_QOS_FSYS0_THROUGHPUT,	"FSYS0_THROUGHPUT" },
			{ PM_QOS_CAM_THROUGHPUT_MAX,	"CAM_THROUGHPUT_MAX" },
			{ PM_QOS_AUD_THROUGHPUT_MAX,	"AUD_THROUGHPUT_MAX" },
			{ PM_QOS_DSP_THROUGHPUT_MAX,	"DSP_THROUGHPUT_MAX" },
			{ PM_QOS_DNC_THROUGHPUT_MAX,	"DNC_THROUGHPUT_MAX" },
			{ PM_QOS_FSYS0_THROUGHPUT_MAX,	"FSYS0_THROUGHPUT_MAX" },
			{ PM_QOS_MFC_THROUGHPUT,	"MFC_THROUGHPUT" },
			{ PM_QOS_NPU_THROUGHPUT,	"NPU_THROUGHPUT" },
			{ PM_QOS_MFC_THROUGHPUT_MAX,	"MFC_THROUGHPUT_MAX" },
			{ PM_QOS_NPU_THROUGHPUT_MAX,	"NPU_THROUGHPUT_MAX" },
			{ PM_QOS_TNR_THROUGHPUT,	"TNR_THROUGHPUT" },
			{ PM_QOS_TNR_THROUGHPUT_MAX,	"TNR_THROUGHPUT_MAX" },
			{ PM_QOS_GPU_THROUGHPUT_MIN,	"GPU_THROUGHPUT_MIN" },
			{ PM_QOS_GPU_THROUGHPUT_MAX,	"GPU_THROUGHPUT_MAX" }),
		  __entry->value, __entry->timeout_us)
);

DECLARE_EVENT_CLASS(pm_qos_update,

	TP_PROTO(enum pm_qos_req_action action, int prev_value, int curr_value),

	TP_ARGS(action, prev_value, curr_value),

	TP_STRUCT__entry(
		__field( enum pm_qos_req_action, action         )
		__field( int,                    prev_value     )
		__field( int,                    curr_value     )
	),

	TP_fast_assign(
		__entry->action = action;
		__entry->prev_value = prev_value;
		__entry->curr_value = curr_value;
	),

	TP_printk("action=%s prev_value=%d curr_value=%d",
		  __print_symbolic(__entry->action,
			{ PM_QOS_ADD_REQ,	"ADD_REQ" },
			{ PM_QOS_UPDATE_REQ,	"UPDATE_REQ" },
			{ PM_QOS_REMOVE_REQ,	"REMOVE_REQ" }),
		  __entry->prev_value, __entry->curr_value)
);

TRACE_EVENT(pm_qos_update_target,

	TP_PROTO(int pm_qos_class, enum pm_qos_req_action action, int prev_value, int curr_value),

	TP_ARGS(pm_qos_class, action, prev_value, curr_value),

	TP_STRUCT__entry(
		__field( int,                    pm_qos_class	)
		__field( enum pm_qos_req_action, action         )
		__field( int,                    prev_value     )
		__field( int,                    curr_value     )
	),

	TP_fast_assign(
		__entry->pm_qos_class = pm_qos_class;
		__entry->action = action;
		__entry->prev_value = prev_value;
		__entry->curr_value = curr_value;
	),

	TP_printk("pm_qos_class=%s action=%s prev_value=%d curr_value=%d",
		  __print_symbolic(__entry->pm_qos_class,
			{ PM_QOS_CPU_DMA_LATENCY,	"CPU_DMA_LATENCY" },
			{ PM_QOS_NETWORK_LATENCY,	"NETWORK_LATENCY" },
			{ PM_QOS_CLUSTER0_FREQ_MIN,	"CLUSTER0_FREQ_MIN" },
			{ PM_QOS_CLUSTER0_FREQ_MAX,	"CLUSTER0_FREQ_MAX" },
			{ PM_QOS_CLUSTER1_FREQ_MIN,	"CLUSTER1_FREQ_MIN" },
			{ PM_QOS_CLUSTER1_FREQ_MAX,	"CLUSTER1_FREQ_MAX" },
			{ PM_QOS_CLUSTER2_FREQ_MIN,	"CLUSTER2_FREQ_MIN" },
			{ PM_QOS_CLUSTER2_FREQ_MAX,	"CLUSTER2_FREQ_MAX" },
			{ PM_QOS_CPU_ONLINE_MIN,	"CPU_ONLINE_MIN" },
			{ PM_QOS_CPU_ONLINE_MAX,	"CPU_ONLINE_MAX" },
			{ PM_QOS_DEVICE_THROUGHPUT,     "DEVICE_THROUGHPUT" },
			{ PM_QOS_INTCAM_THROUGHPUT,     "INTCAM_THROUGHPUT" },
			{ PM_QOS_DEVICE_THROUGHPUT_MAX,	"DEVICE_THROUGHPUT_MAX" },
			{ PM_QOS_INTCAM_THROUGHPUT_MAX,	"INTCAM_THROUGHPUT_MAX" },
			{ PM_QOS_BUS_THROUGHPUT,	"BUS_THROUGHPUT" },
			{ PM_QOS_BUS_THROUGHPUT_MAX,	"BUS_THROUGHPUT_MAX" },
			{ PM_QOS_NETWORK_THROUGHPUT,	"NETWORK_THROUGHPUT" },
			{ PM_QOS_MEMORY_BANDWIDTH,	"MEMORY_BANDWIDTH" },
			{ PM_QOS_DISPLAY_THROUGHPUT,	"DISPLAY_THROUGHPUT" },
			{ PM_QOS_DISPLAY_THROUGHPUT_MAX,"DISPLAY_THROUGHPUT_MAX" },
			{ PM_QOS_CAM_THROUGHPUT,	"CAM_THROUGHPUT" },
			{ PM_QOS_AUD_THROUGHPUT,	"AUD_THROUGHPUT" },
			{ PM_QOS_DSP_THROUGHPUT,	"DSP_THROUGHPUT" },
			{ PM_QOS_DNC_THROUGHPUT,	"DNC_THROUGHPUT" },
			{ PM_QOS_FSYS0_THROUGHPUT,	"FSYS0_THROUGHPUT" },
			{ PM_QOS_CAM_THROUGHPUT_MAX,	"CAM_THROUGHPUT_MAX" },
			{ PM_QOS_AUD_THROUGHPUT_MAX,	"AUD_THROUGHPUT_MAX" },
			{ PM_QOS_DSP_THROUGHPUT_MAX,	"DSP_THROUGHPUT_MAX" },
			{ PM_QOS_DNC_THROUGHPUT_MAX,	"DNC_THROUGHPUT_MAX" },
			{ PM_QOS_FSYS0_THROUGHPUT_MAX,	"FSYS0_THROUGHPUT_MAX" },
			{ PM_QOS_MFC_THROUGHPUT,	"MFC_THROUGHPUT" },
			{ PM_QOS_NPU_THROUGHPUT,	"NPU_THROUGHPUT" },
			{ PM_QOS_MFC_THROUGHPUT_MAX,	"MFC_THROUGHPUT_MAX" },
			{ PM_QOS_NPU_THROUGHPUT_MAX,	"NPU_THROUGHPUT_MAX" },
			{ PM_QOS_TNR_THROUGHPUT,	"TNR_THROUGHPUT" },
			{ PM_QOS_TNR_THROUGHPUT_MAX,	"TNR_THROUGHPUT_MAX" },
			{ PM_QOS_GPU_THROUGHPUT_MIN,	"GPU_THROUGHPUT_MIN" },
			{ PM_QOS_GPU_THROUGHPUT_MAX,	"GPU_THROUGHPUT_MAX" }),
		  __print_symbolic(__entry->action,
			{ PM_QOS_ADD_REQ,	"ADD_REQ" },
			{ PM_QOS_UPDATE_REQ,	"UPDATE_REQ" },
			{ PM_QOS_REMOVE_REQ,	"REMOVE_REQ" }),
		  __entry->prev_value, __entry->curr_value)
);

DEFINE_EVENT_PRINT(pm_qos_update, pm_qos_update_flags,

	TP_PROTO(enum pm_qos_req_action action, int prev_value, int curr_value),

	TP_ARGS(action, prev_value, curr_value),

	TP_printk("action=%s prev_value=0x%x curr_value=0x%x",
		  __print_symbolic(__entry->action,
			{ PM_QOS_ADD_REQ,	"ADD_REQ" },
			{ PM_QOS_UPDATE_REQ,	"UPDATE_REQ" },
			{ PM_QOS_REMOVE_REQ,	"REMOVE_REQ" }),
		  __entry->prev_value, __entry->curr_value)
);

DECLARE_EVENT_CLASS(dev_pm_qos_request,

	TP_PROTO(const char *name, enum dev_pm_qos_req_type type,
		 s32 new_value),

	TP_ARGS(name, type, new_value),

	TP_STRUCT__entry(
		__string( name,                    name         )
		__field( enum dev_pm_qos_req_type, type         )
		__field( s32,                      new_value    )
	),

	TP_fast_assign(
		__assign_str(name, name);
		__entry->type = type;
		__entry->new_value = new_value;
	),

	TP_printk("device=%s type=%s new_value=%d",
		  __get_str(name),
		  __print_symbolic(__entry->type,
			{ DEV_PM_QOS_RESUME_LATENCY, "DEV_PM_QOS_RESUME_LATENCY" },
			{ DEV_PM_QOS_FLAGS, "DEV_PM_QOS_FLAGS" }),
		  __entry->new_value)
);

DEFINE_EVENT(dev_pm_qos_request, dev_pm_qos_add_request,

	TP_PROTO(const char *name, enum dev_pm_qos_req_type type,
		 s32 new_value),

	TP_ARGS(name, type, new_value)
);

DEFINE_EVENT(dev_pm_qos_request, dev_pm_qos_update_request,

	TP_PROTO(const char *name, enum dev_pm_qos_req_type type,
		 s32 new_value),

	TP_ARGS(name, type, new_value)
);

DEFINE_EVENT(dev_pm_qos_request, dev_pm_qos_remove_request,

	TP_PROTO(const char *name, enum dev_pm_qos_req_type type,
		 s32 new_value),

	TP_ARGS(name, type, new_value)
);

TRACE_EVENT(ocp_max_limit,

	TP_PROTO(unsigned int clipped_freq, bool start),

	TP_ARGS(clipped_freq, start),

	TP_STRUCT__entry(
		__field(        u32,            clipped_freq    )
		__field(        bool,           start   )
	),

	TP_fast_assign(
		__entry->clipped_freq = clipped_freq;
		__entry->start = start;
	),

	TP_printk("clipped_freq=%lu %s",
			(unsigned long)__entry->clipped_freq,
			(__entry->start)?"begin":"end")
);

#endif /* _TRACE_POWER_H */

/* This part must be outside protection */
#include <trace/define_trace.h>