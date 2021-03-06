#ifndef __MAC80211_EXP_H
#define __MAC80211_EXP_H
// generate with this command line:
//	sed 's/^EXPORT_SYMBOL\(_GPL\)\?(\([^)]*\)).*/#define \2 __ar10k_\2/;t;d' ../mac80211/*
#define ieee80211_aes_cmac_calculate_k1_k2 __ar10k_ieee80211_aes_cmac_calculate_k1_k2
#define ieee80211_stop_rx_ba_session __ar10k_ieee80211_stop_rx_ba_session
#define ieee80211_send_bar __ar10k_ieee80211_send_bar
#define ieee80211_start_tx_ba_session __ar10k_ieee80211_start_tx_ba_session
#define ieee80211_start_tx_ba_cb_irqsafe __ar10k_ieee80211_start_tx_ba_cb_irqsafe
#define ieee80211_stop_tx_ba_session __ar10k_ieee80211_stop_tx_ba_session
#define ieee80211_stop_tx_ba_cb_irqsafe __ar10k_ieee80211_stop_tx_ba_cb_irqsafe
#define ieee80211_iter_chan_contexts_atomic __ar10k_ieee80211_iter_chan_contexts_atomic
#define ieee80211_request_smps __ar10k_ieee80211_request_smps
#define ieee80211_iter_keys __ar10k_ieee80211_iter_keys
#define ieee80211_gtk_rekey_notify __ar10k_ieee80211_gtk_rekey_notify
#define ieee80211_get_key_tx_seq __ar10k_ieee80211_get_key_tx_seq
#define ieee80211_get_key_rx_seq __ar10k_ieee80211_get_key_rx_seq
#define __ieee80211_get_radio_led_name __ar10k___ieee80211_get_radio_led_name
#define __ieee80211_get_assoc_led_name __ar10k___ieee80211_get_assoc_led_name
#define __ieee80211_get_tx_led_name __ar10k___ieee80211_get_tx_led_name
#define __ieee80211_get_rx_led_name __ar10k___ieee80211_get_rx_led_name
#define __ieee80211_create_tpt_led_trigger __ar10k___ieee80211_create_tpt_led_trigger
#define ieee80211_restart_hw __ar10k_ieee80211_restart_hw
#define ieee80211_alloc_hw __ar10k_ieee80211_alloc_hw
#define ieee80211_register_hw __ar10k_ieee80211_register_hw
#define ieee80211_unregister_hw __ar10k_ieee80211_unregister_hw
#define ieee80211_free_hw __ar10k_ieee80211_free_hw
#define ieee80211_restart_hw __ar10k_ieee80211_restart_hw
#define ieee80211_alloc_hw __ar10k_ieee80211_alloc_hw
#define ieee80211_register_hw __ar10k_ieee80211_register_hw
#define ieee80211_unregister_hw __ar10k_ieee80211_unregister_hw
#define ieee80211_free_hw __ar10k_ieee80211_free_hw
#define ieee80211_chswitch_done __ar10k_ieee80211_chswitch_done
#define ieee80211_ap_probereq_get __ar10k_ieee80211_ap_probereq_get
#define ieee80211_beacon_loss __ar10k_ieee80211_beacon_loss
#define ieee80211_connection_loss __ar10k_ieee80211_connection_loss
#define ieee80211_cqm_rssi_notify __ar10k_ieee80211_cqm_rssi_notify
#define ieee80211_chswitch_done __ar10k_ieee80211_chswitch_done
#define ieee80211_ap_probereq_get __ar10k_ieee80211_ap_probereq_get
#define ieee80211_beacon_loss __ar10k_ieee80211_beacon_loss
#define ieee80211_connection_loss __ar10k_ieee80211_connection_loss
#define ieee80211_cqm_rssi_notify __ar10k_ieee80211_cqm_rssi_notify
#define ieee80211_ready_on_channel __ar10k_ieee80211_ready_on_channel
#define ieee80211_remain_on_channel_expired __ar10k_ieee80211_remain_on_channel_expired
#define ieee80211_report_wowlan_wakeup __ar10k_ieee80211_report_wowlan_wakeup
#define ieee80211_rate_control_register __ar10k_ieee80211_rate_control_register
#define ieee80211_rate_control_unregister __ar10k_ieee80211_rate_control_unregister
#define rate_control_send_low __ar10k_rate_control_send_low
#define ieee80211_get_tx_rates __ar10k_ieee80211_get_tx_rates
#define rate_control_set_rates __ar10k_rate_control_set_rates
#define ieee80211_sta_ps_transition __ar10k_ieee80211_sta_ps_transition
#define ieee80211_rx __ar10k_ieee80211_rx
#define ieee80211_rx_irqsafe __ar10k_ieee80211_rx_irqsafe
#define ieee80211_scan_completed __ar10k_ieee80211_scan_completed
#define ieee80211_sched_scan_results __ar10k_ieee80211_sched_scan_results
#define ieee80211_sched_scan_stopped __ar10k_ieee80211_sched_scan_stopped
#define ieee80211_find_sta_by_ifaddr __ar10k_ieee80211_find_sta_by_ifaddr
#define ieee80211_find_sta __ar10k_ieee80211_find_sta
#define ieee80211_sta_block_awake __ar10k_ieee80211_sta_block_awake
#define ieee80211_sta_eosp __ar10k_ieee80211_sta_eosp
#define ieee80211_sta_set_buffered __ar10k_ieee80211_sta_set_buffered
#define ieee80211_tx_status_irqsafe __ar10k_ieee80211_tx_status_irqsafe
#define ieee80211_tx_status __ar10k_ieee80211_tx_status
#define ieee80211_report_low_ack __ar10k_ieee80211_report_low_ack
#define ieee80211_free_txskb __ar10k_ieee80211_free_txskb
#define ieee80211_get_tkip_p1k_iv __ar10k_ieee80211_get_tkip_p1k_iv
#define ieee80211_get_tkip_rx_p1k __ar10k_ieee80211_get_tkip_rx_p1k
#define ieee80211_get_tkip_p2k __ar10k_ieee80211_get_tkip_p2k
#define ieee80211_beacon_get_tim __ar10k_ieee80211_beacon_get_tim
#define ieee80211_proberesp_get __ar10k_ieee80211_proberesp_get
#define ieee80211_pspoll_get __ar10k_ieee80211_pspoll_get
#define ieee80211_nullfunc_get __ar10k_ieee80211_nullfunc_get
#define ieee80211_probereq_get __ar10k_ieee80211_probereq_get
#define ieee80211_rts_get __ar10k_ieee80211_rts_get
#define ieee80211_ctstoself_get __ar10k_ieee80211_ctstoself_get
#define ieee80211_get_buffered_bc __ar10k_ieee80211_get_buffered_bc
#define wiphy_to_ieee80211_hw __ar10k_wiphy_to_ieee80211_hw
#define ieee80211_generic_frame_duration __ar10k_ieee80211_generic_frame_duration
#define ieee80211_rts_duration __ar10k_ieee80211_rts_duration
#define ieee80211_ctstoself_duration __ar10k_ieee80211_ctstoself_duration
#define ieee80211_wake_queue __ar10k_ieee80211_wake_queue
#define ieee80211_stop_queue __ar10k_ieee80211_stop_queue
#define ieee80211_stop_queues __ar10k_ieee80211_stop_queues
#define ieee80211_queue_stopped __ar10k_ieee80211_queue_stopped
#define ieee80211_wake_queues __ar10k_ieee80211_wake_queues
#define ieee80211_iterate_active_interfaces __ar10k_ieee80211_iterate_active_interfaces
#define ieee80211_iterate_active_interfaces_atomic __ar10k_ieee80211_iterate_active_interfaces_atomic
#define ieee80211_queue_work __ar10k_ieee80211_queue_work
#define ieee80211_queue_delayed_work __ar10k_ieee80211_queue_delayed_work
#define ieee80211_resume_disconnect __ar10k_ieee80211_resume_disconnect
#define ieee80211_enable_rssi_reports __ar10k_ieee80211_enable_rssi_reports
#define ieee80211_disable_rssi_reports __ar10k_ieee80211_disable_rssi_reports
#define ieee80211_ave_rssi __ar10k_ieee80211_ave_rssi
#define ieee80211_radar_detected __ar10k_ieee80211_radar_detected
#define wiphy_to_ieee80211_hw __ar10k_wiphy_to_ieee80211_hw
#define ieee80211_generic_frame_duration __ar10k_ieee80211_generic_frame_duration
#define ieee80211_rts_duration __ar10k_ieee80211_rts_duration
#define ieee80211_ctstoself_duration __ar10k_ieee80211_ctstoself_duration
#define ieee80211_wake_queue __ar10k_ieee80211_wake_queue
#define ieee80211_stop_queue __ar10k_ieee80211_stop_queue
#define ieee80211_stop_queues __ar10k_ieee80211_stop_queues
#define ieee80211_queue_stopped __ar10k_ieee80211_queue_stopped
#define ieee80211_wake_queues __ar10k_ieee80211_wake_queues
#define ieee80211_iterate_active_interfaces __ar10k_ieee80211_iterate_active_interfaces
#define ieee80211_iterate_active_interfaces_atomic __ar10k_ieee80211_iterate_active_interfaces_atomic
#define ieee80211_queue_work __ar10k_ieee80211_queue_work
#define ieee80211_queue_delayed_work __ar10k_ieee80211_queue_delayed_work
#define ieee80211_resume_disconnect __ar10k_ieee80211_resume_disconnect
#define ieee80211_enable_rssi_reports __ar10k_ieee80211_enable_rssi_reports
#define ieee80211_disable_rssi_reports __ar10k_ieee80211_disable_rssi_reports
#define ieee80211_ave_rssi __ar10k_ieee80211_ave_rssi
#define ieee80211_radar_detected __ar10k_ieee80211_radar_detected
#define ieee80211_gtk_rekey_add __ar10k_ieee80211_gtk_rekey_add
#define ieee80211_csa_finish __ar10k_ieee80211_csa_finish
#define ieee80211_parse_p2p_noa __ar10k_ieee80211_parse_p2p_noa
#define ieee80211_remove_key __ar10k_ieee80211_remove_key
#define ieee80211_iterate_active_interfaces_rtnl __ar10k_ieee80211_iterate_active_interfaces_rtnl
#define ieee80211_csa_is_complete __ar10k_ieee80211_csa_is_complete
#define ieee80211_tx_prepare_skb __ar10k_ieee80211_tx_prepare_skb
#define ieee80211_set_key_rx_seq __ar10k_ieee80211_set_key_rx_seq
#define wdev_to_ieee80211_vif __ar10k_wdev_to_ieee80211_vif
#define ieee80211_set_key_tx_seq __ar10k_ieee80211_set_key_tx_seq
#define ieee80211_update_p2p_noa __ar10k_ieee80211_update_p2p_noa

#define ieee80211_rx_napi __ar10k_ieee80211_rx_napi
#define ieee80211_tx_status_noskb __ar10k_ieee80211_tx_status_noskb
#define ieee80211_beacon_get_template __ar10k_ieee80211_beacon_get_template
#define ieee80211_unreserve_tid __ar10k_ieee80211_unreserve_tid
#define ieee80211_stop_rx_ba_session_offl __ar10k_ieee80211_stop_rx_ba_session_offl
#define ieee80211_iterate_stations_atomic __ar10k_ieee80211_iterate_stations_atomic
#define ieee80211_csa_update_counter __ar10k_ieee80211_csa_update_counter
#define ieee80211_vif_to_wdev __ar10k_ieee80211_vif_to_wdev
#define ieee80211_tx_dequeue __ar10k_ieee80211_tx_dequeue
#define ieee80211_start_rx_ba_session_offl __ar10k_ieee80211_start_rx_ba_session_offl
#define ieee80211_cqm_beacon_loss_notify __ar10k_ieee80211_cqm_beacon_loss_notify
#define ieee80211_alloc_hw_nm __ar10k_ieee80211_alloc_hw_nm
#define ieee80211_tdls_oper_request __ar10k_ieee80211_tdls_oper_request
#define ieee80211_iterate_interfaces __ar10k_ieee80211_iterate_interfaces
#define ieee80211_reserve_tid __ar10k_ieee80211_reserve_tid
#endif
