/*
 * Copyright (c) 2016 Dell Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * THIS CODE IS PROVIDED ON AN *AS IS* BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT
 * LIMITATION ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS
 * FOR A PARTICULAR PURPOSE, MERCHANTABLITY OR NON-INFRINGEMENT.
 *
 * See the Apache Version 2.0 License for specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file sai_l3_mem.h
 *
 * @brief This file contains the prototype declarations for memory alloc
 *        and free util functions
 */

#ifndef __SAI_L3_MEM_H__
#define __SAI_L3_MEM_H__

#include "sai_l3_common.h"

sai_fib_vrf_t *sai_fib_vrf_node_alloc (void);

void sai_fib_vrf_node_free (sai_fib_vrf_t *p_vrf_node);

sai_fib_router_interface_t *sai_fib_rif_node_alloc (void);

void sai_fib_rif_node_free (sai_fib_router_interface_t *p_rif_node);

sai_fib_nh_t *sai_fib_nh_node_alloc (void);

void sai_fib_nh_node_free (sai_fib_nh_t *p_nh_node);

sai_fib_nh_group_t *sai_fib_nh_group_node_alloc (void);

void sai_fib_nh_group_node_free (sai_fib_nh_group_t *p_nh_group_node);

sai_fib_route_t *sai_fib_route_node_alloc (void);

void sai_fib_route_node_free (sai_fib_route_t *p_route_node);

sai_fib_link_node_t *sai_fib_link_node_alloc (void);

void sai_fib_link_node_free (sai_fib_link_node_t *p_link_node);

sai_fib_wt_link_node_t *sai_fib_weighted_link_node_alloc (void);

void sai_fib_weighted_link_node_free (sai_fib_wt_link_node_t *p_wt_link_node);

sai_fib_neighbor_mac_entry_t *sai_fib_neighbor_mac_entry_node_alloc (void);

void sai_fib_neighbor_mac_entry_node_free (
                                      sai_fib_neighbor_mac_entry_t *p_mac_entry);

#endif  /* __SAI_L3_MEM_H__ */
