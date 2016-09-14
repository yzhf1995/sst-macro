#include <sprockit/keyword_registration.h>

namespace sstmac {
  static const char* main_sstmac_valid_keywords[] = {
  "id",
  "injection_credits",
  "concentration",
  "negligible_size",
  "name",
  "model",
  "geometry",
  "cpu_affinity",
  "fileroot",
  "hop_latency",
  "mtu",
  "nsockets",
  "allgather",
  "allreduce",
  "nworkers",
  "concentration",
  "seed",
  "eject_buffer_size",
  "output_buffer_size",
  "input_buffer_size",
  "crossbar_bandwidth",
  "crossbar_latency",
  "bandwidth_link",
  "actual_name",
  "stdev",
  "maxz",
  "pipeline_speedup",
  "redundant",
  "implementation",
  "type",
  "epoch",
  "bin_size",
  "payload_fraction",
  "freq",
  "latency_cycles",
  "bytes_per_cycle",
  "link_freq",
  "min_num_bytes",
  "max_num_messages",
  "link_arbitrator",
  "post_header_delay",
  "post_rdma_delay",
  "launch_node_id_file",
  "launch_node_id_mapper_file",
  "link_bytes_per_cycle",
  "mean",
  "group_connections",
  "link_bandwidth",
  "link_latency",
  "frequency",
  "latency",
  "bandwidth",
  "arbitrator",
  "total_bandwidth",
  "max_single_bandwidth",
  "ncores",
  "mpi_max_num_requests",  
  "debug_startup",  
  "debug",  
  "congestion_model",  
  "event_manager",  
  "launch_dumpi_metaname",  
  "event_calendar_max_time",  
  "event_calendar_epoch_length",  
  "event_calendar_search_window",  
  "timestamp_resolution",  
  "launch_allocation",  
  "launch_indexing",  
  "network_name",  
  "param_name",  
  "network_name",  
  "topology_name",  
  "sst_nthread",  
  "serialization_buffer_size",  
  "serialization_num_bufs_allocation",  
  "partition",  
  "topology_name",  
  "network_name",  
  "interconnect",
  "node_cores",  
  "runtime",
  "stop_time",
  "location_trace_file",  
  "location_trace",  
  "network_hop_latency",  
  "injection_latency",  
  "network_bandwidth",  
  "injection_latency",  
  "injection_bandwidth",
  "injection_redundant",
  "amm_model",  
  "max_memory_bandwidth",    
  "network_bandwidth",  
  "network_switch_bandwidth",  
  "network_hop_latency",  
  "injection_latency",  
  "network_bandwidth",  
  "injection_bandwidth",  
  "actual_topology_name",  
  "sst_nproc",  
  "sst_nthread",  
  "memory_stats_file",  
  "memory_stats",  
  "node_mem_latency",  
  "node_mem_bandwidth",  
  "interconnect_power_file",  
  "interconnect_energy_file",  
  "network_negligible_size",  
  "negligible_size",
  "interconnect_power_stats",  
  "interconnect_energy_stats",  
  "topology_name",  
  "node_name",  
  "node_memory_model",
  "node_model",
  "nic_name",
  "network_switch_type",  
  "packet_length",  
  "packet_size",
  "mtu",
  "network_concentration",
  "topology_geometry",   
  "topology_group_connections",  
  "topology_true_random_intermediate",   
  "topology_geometry",  
  "optical_link_bandwidth",  
  "network_link_bandwidth",
  "topology_geometry",   
  "topology_redundant",  
  "topology_seed",  
  "topology_output_graph",  
  "router_seed",  
  "router",
  "radix",
  "num_levels",
  "sanity_check_hop_count_delta",  
  "sanity_check_hop_count_reporting",  
  "ugal_threshold",  
  "network_spyplot_file",  
  "nic_size_histogram_file",  
  "nic_negligible_size",  
  "network_spyplot_normalization",  
  "nic_size_histogram_num_bins",  
  "nic_survives_node_failure",  
  "survives_node_failure",  
  "nic_immediate_nack",  
  "network_spyplot",  
  "nic_size_histogram",  
  "nic_size_histogram_log",  
  "nic_size_histogram_bin_size",   
  "compute_scheduler",
  "processor",  
  "noise_model_seed",  
  "noise_model_mean",  
  "noise_model_stdev",  
  "noise_model_maxz",   
  "packet_switch_MTU",  
  "packet_switch_bandwidth_n2r",  
  "packet_switch_latency_r2r",  
  "packet_switch_bandwidth_n2r",   
  "memory_noise_model_seed",  
  "memory_noise_num_intervals",  
  "packet_flow_mtu",
  "packet_flow_memory_mtu",
  "packet_flow_max_num_messages",  
  "packet_flow_negligible_size",  
  "memory_noise_model_maxz",  
  "packet_flow_memory_latency",  
  "memory_interval_mean",  
  "memory_noise_interval_stdev",  
  "packet_flow_memory_bandwidth",  
  "packet_flow_memory_single_bandwidth",  
  "memory_noise_model_stdev",  
  "packet_flow_memory_arbitrator",  
  "packet_flow_memory_arbitrator",  
  "memory_noise_model",  
  "nic_congestion_histogram_file",  
  "nic_congestion_spyplot_file",  
  "nic_congestion_histogram_num_bins",  
  "nic_congestion_normalization",  
  "nic_congestion_histogram",  
  "nic_congestion_histogram_log",  
  "nic_congestion_spyplot",  
  "nic_congestion_histogram_bin_size",  
  "packet_flow_injection_latency",  
  "packet_flow_injection_bandwidth",  
  "packet_flow_eject_buffer_size",  
  "packet_flow_arbitrator",  
  "packet_flow_arbitrator",  
  "amm_model",  
  "accuracy_parameter",
  "network_nodes_per_switch",
  "network_bandwidth",  
  "network_switch_bandwidth",
  "network_accuracy_parameter",
  "network_hop_latency",
  "network_switch_congestion_stats_file",
  "network_switch_congestion_normalization",
  "network_switch_congestion_stats",
  "injection_bandwidth",
  "injection_latency",  
  "max_memory_bandwidth",  
  "memory_accuracy_parameter",
  "memory_latency",  
  "memory_bandwidth",    
  "packet_flow_max_num_messages",  
  "packet_flow_negligible_size",  
  "sanity_check_queue_depth_delta",  
  "sanity_check_queue_depth_reporting",  
  "packet_flow_network_hop_latency",
  "packet_flow_network_link_bandwidth",  
  "packet_flow_switch_crossbar_bandwidth",  
  "packet_flow_switch_output_buffer_size",  
  "packet_flow_switch_input_buffer_size",  
  "packet_flow_arbitrator",  
  "node_cores",  
  "node_sockets",  
  "node_preemption",  
  "node_noise_model_seed",  
  "node_noise_model_maxz",  
  "node_pipeline_speedup",  
  "parallelism",
  "negligible_compute_time",  
  "node_noise_model_stdev",  
  "node_noise_model_mean",  
  "node_noise_model",  
  "processor_stats_file",  
  "processor_stats",  
  "node_frequency",  
  "node_memop_frequency",  
  "dgemm",  
  "dgemv",  
  "daxpy",  
  "ddot",  
  "daxpy_loop_unroll",  
  "daxpy_pipeline_efficiency",  
  "ddot_loop_unroll",  
  "ddot_pipeline_efficiency",  
  "dgemm_loop_unroll",  
  "dgemm_pipeline_efficiency",  
  "dgemm_cache_size",  
  "dgemv_loop_unroll",  
  "dgemv_pipeline_efficiency",  
  "node_memop_frequency",   
  "mpi_delay",  
  "mpi_implementation",  
  "envelope",
  "smp_single_copy_size",  
  "max_eager_msg_size",  
  "max_vshort_msg_size",  
  "mpi_spyplot",  
  "mpi_queue_post_rdma_delay",  
  "mpi_queue_post_header_delay",  
  "mpi_queue_poll_delay",  
  "ping_timeout",  
  "activity_monitor",  
  "sumi_eager_cutoff",
  "nic_survives_node_failure",  
  "survives_node_failure",
  "immediate_nack",
  "activity_monitor",  
  "topomap_app_graph_file",   
  "timestamp_resolution",  
  "stat_time_interval",  
  "env",  
  "hello_world_what",  
  "mpicongestion_iterations",  
  "mpicongestion_window",  
  "mpicongestion_count",   
  "message_size",  
  "sleep_time",  
  "mpipingpong_iterations",  
  "mpipingpong_count",  
  "mpi_test_print_all",  
  "testmpi_stop_at_errors",  
  "mpi_test_print_all",  
  "sleep_time",  
  "compute_time",  
  "num_sleeps",  
  "num_iter",  
  "message_count",  
  "num_messages",  
  "sleep_time",  
  "testMPI_stop_at_errors",  
  "use_libtopomap",  
  "test_mpi_barrier_iterations",  
  "test_onesided_iterations",  
  "test_onesided_size",  
  "test_onesided_mode",  
  "test_os_nthread",  
  "vote_redundancy",  
  "traffic_pattern",  
  "inject_time",  
  "packet_flow_injection_bandwidth",  
  "network_injector_capacity_bw",  
  "packet_switch_bandwidth_n2r",  
  "traffic_pattern",  
  "message_length",  
  "num_messages",  
  "message_length",  
  "parsedumpi_use_libtopomap",  
  "parsedumpi_timescale",  
  "parsedumpi_terminate_percent",
  "parsedumpi_print_progress",
  "launch_dumpi_metaname",  
  "host_compute_modeling",  
  "lib_compute_loop_overhead",  
  "lib_compute_loops_enable",  
  "lib_compute_loops_mem_ratio",  
  "lib_compute_loops_flop_ratio",  
  "lib_compute_access_width",  
  "stack_size",  
  "stack_chunk_size",  
  "ftq",
  "ftq_trace",  
  "ftq_epoch",  
  "call_graph",  
  "event_trace",  
  "stack_protect",  
  "event_trace_start",  
  "event_trace_stop",  
  "cart_launch_sizes",  
  "cart_launch_offsets",  
  "launch_coordinate_file",  
  "launch_dumpi_metaname",  
  "launch_hostname_map",  
  "random_allocation_seed",  
  "launch_coordinate_file",  
  "launch_dumpi_metaname",  
  "launch_hostname_list",  
  "random_indexer_seed",  
  "sstmac_cxx_heap_size_mb",  
  "sstmac_cxx_page_size_mb",
  "sstmac_byte_alignment",  
  "lazy_watch",
  "heartbeat",
  "tiles_per_row",
  "tiles_per_col",
  "tiles_per_inj",
  "injection_ports",
  "algorithm",
  "switch_geometry",
  "row_buffer_size",
  "nrows",
  "ncols",
  "ninject",
  "neject",
  "netlink_radix",
  "intragroup_connection_file",
  "intergroup_connection_file",
  "intensity",
  "mixing",
  "niterations",
  "scatter",
  "accumulate_congestion_delay",
  };
  static int main_sstmac_num_valid_keywords = sizeof(main_sstmac_valid_keywords) / sizeof(const char*);
sprockit::StaticKeywordRegister _main_static_keyword_init_(main_sstmac_num_valid_keywords, main_sstmac_valid_keywords);
}
