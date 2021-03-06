/**
 @file ctc_sai_acl.h

 @author  Copyright (C) 2018 Centec Networks Inc.  All rights reserved.

 @date 2018-01-23

 @version v1.0

\b
     This module defines SAI ACL.
\b
\p
     The ACL Module APIs supported by centec devices:
\p
\b
\t  |   API                                                      |       SUPPORT CHIPS LIST       |
\t  |  create_acl_table                                          |    CTC8096,CTC7148,CTC7132     |
\t  |  remove_acl_table                                          |    CTC8096,CTC7148,CTC7132     |
\t  |  set_acl_table_attribute                                   |    CTC8096,CTC7148,CTC7132     |
\t  |  get_acl_table_attribute                                   |    CTC8096,CTC7148,CTC7132     |
\t  |  create_acl_entry                                          |    CTC8096,CTC7148,CTC7132     |
\t  |  remove_acl_entry                                          |    CTC8096,CTC7148,CTC7132     |
\t  |  set_acl_entry_attribute                                   |    CTC8096,CTC7148,CTC7132     |
\t  |  get_acl_entry_attribute                                   |    CTC8096,CTC7148,CTC7132     |
\t  |  create_acl_counter                                        |    CTC8096,CTC7148,CTC7132     |
\t  |  remove_acl_counter                                        |    CTC8096,CTC7148,CTC7132     |
\t  |  set_acl_counter_attribute                                 |    CTC8096,CTC7148,CTC7132     |
\t  |  get_acl_counter_attribute                                 |    CTC8096,CTC7148,CTC7132     |
\t  |  create_acl_range                                          |    CTC8096,CTC7148,CTC7132     |
\t  |  remove_acl_range                                          |    CTC8096,CTC7148,CTC7132     |
\t  |  set_acl_range_attribute                                   |    CTC8096,CTC7148,CTC7132     |
\t  |  get_acl_range_attribute                                   |    CTC8096,CTC7148,CTC7132     |
\t  |  create_acl_table_group                                    |    CTC8096,CTC7148,CTC7132     |
\t  |  remove_acl_table_group                                    |    CTC8096,CTC7148,CTC7132     |
\t  |  set_acl_table_group_attribute                             |    CTC8096,CTC7148,CTC7132     |
\t  |  get_acl_table_group_attribute                             |    CTC8096,CTC7148,CTC7132     |
\t  |  create_acl_table_group_member                             |    CTC8096,CTC7148,CTC7132     |
\t  |  remove_acl_table_group_member                             |    CTC8096,CTC7148,CTC7132     |
\t  |  set_acl_table_group_member_attribute                      |    CTC8096,CTC7148,CTC7132     |
\t  |  get_acl_table_group_member_attribute                      |    CTC8096,CTC7148,CTC7132     |
\b

\b
 The ACL IP Type attributes supported by centec devices:
\p
\b
\t  |   ATTRIBUTE                                                |       SUPPORT CHIPS LIST       |
\t  |  SAI_ACL_IP_TYPE_ANY                                       |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_IP_TYPE_IP                                        |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_IP_TYPE_NON_IP                                    |              -                 |
\t  |  SAI_ACL_IP_TYPE_IPV4ANY                                   |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_IP_TYPE_NON_IPV4                                  |              -                 |
\t  |  SAI_ACL_IP_TYPE_IPV6ANY                                   |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_IP_TYPE_NON_IPV6                                  |              -                 |
\t  |  SAI_ACL_IP_TYPE_ARP                                       |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_IP_TYPE_ARP_REQUEST                               |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_IP_TYPE_ARP_REPLY                                 |    CTC8096,CTC7148,CTC7132     |
\b

\p
 The ACL IP Frag attributes supported by centec devices:
\p
\b
\t  |   ATTRIBUTE                                                |       SUPPORT CHIPS LIST       |
\t  |  SAI_ACL_IP_FRAG_ANY                                       |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_IP_FRAG_NON_FRAG                                  |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_IP_FRAG_NON_FRAG_OR_HEAD                          |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_IP_FRAG_HEAD                                      |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_IP_FRAG_NON_HEAD                                  |    CTC8096,CTC7148,CTC7132     |
\b

\p
 The ACL Action Type attributes supported by centec devices:
\p
\b
\t  |   ATTRIBUTE                                                |   SUPPORT CHIPS LIST   |
\t  |  SAI_ACL_ACTION_TYPE_REDIRECT                              |           -            |
\t  |  SAI_ACL_ACTION_TYPE_REDIRECT_LIST                         |           -            |
\t  |  SAI_ACL_ACTION_TYPE_PACKET_ACTION                         |           -            |
\t  |  SAI_ACL_ACTION_TYPE_FLOOD                                 |           -            |
\t  |  SAI_ACL_ACTION_TYPE_COUNTER                               |           -            |
\t  |  SAI_ACL_ACTION_TYPE_MIRROR_INGRESS                        |           -            |
\t  |  SAI_ACL_ACTION_TYPE_MIRROR_EGRESS                         |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_POLICER                           |           -            |
\t  |  SAI_ACL_ACTION_TYPE_DECREMENT_TTL                         |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_TC                                |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_PACKET_COLOR                      |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_INNER_VLAN_ID                     |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_INNER_VLAN_PRI                    |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_OUTER_VLAN_ID                     |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_OUTER_VLAN_PRI                    |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_SRC_MAC                           |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_DST_MAC                           |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_SRC_IP                            |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_DST_IP                            |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_SRC_IPV6                          |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_DST_IPV6                          |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_DSCP                              |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_ECN                               |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_L4_SRC_PORT                       |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_L4_DST_PORT                       |           -            |
\t  |  SAI_ACL_ACTION_TYPE_INGRESS_SAMPLEPACKET_ENABLE           |           -            |
\t  |  SAI_ACL_ACTION_TYPE_EGRESS_SAMPLEPACKET_ENABLE            |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_ACL_META_DATA                     |           -            |
\t  |  SAI_ACL_ACTION_TYPE_EGRESS_BLOCK_PORT_LIST                |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_USER_TRAP_ID                      |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_DO_NOT_LEARN                      |           -            |
\t  |  SAI_ACL_ACTION_TYPE_DTEL_TAIL_DROP_REPORT_ENABLE          |           -            |
\t  |  SAI_ACL_ACTION_TYPE_SET_ISOLATION_GROUP                   |           -            |
\b

\p
\b
 The ACL Table Group Type attributes supported by centec devices:
\p
\t  |   ATTRIBUTE                                                |       SUPPORT CHIPS LIST       |
\t  |  SAI_ACL_TABLE_GROUP_TYPE_SEQUENTIAL                       |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_TABLE_GROUP_TYPE_PARALLEL                         |    CTC8096,CTC7148,CTC7132     |
\b

\p
 The ACL Table Group attributes supported by centec devices:
\p
\b
\t  |   ATTRIBUTE                                                |       SUPPORT CHIPS LIST       |
\t  |  SAI_ACL_TABLE_GROUP_ATTR_ACL_STAGE                        |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_TABLE_GROUP_ATTR_ACL_BIND_POINT_TYPE_LIST         |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_TABLE_GROUP_ATTR_TYPE                             |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_TABLE_GROUP_ATTR_MEMBER_LIST                      |    CTC8096,CTC7148,CTC7132     |
\b

\p
 The ACL Table Group Member attributes supported by centec devices:
\p
\b
\t  |   ATTRIBUTE                                                |       SUPPORT CHIPS LIST       |
\t  |  SAI_ACL_TABLE_GROUP_MEMBER_ATTR_ACL_TABLE_GROUP_ID        |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_TABLE_GROUP_MEMBER_ATTR_ACL_TABLE_ID              |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_TABLE_GROUP_MEMBER_ATTR_PRIORITY                  |    CTC8096,CTC7148,CTC7132     |
\b

\p
 The ACL Table attributes supported by centec devices:
\p
\b
\t  |   ATTRIBUTE                                                |       SUPPORT CHIPS LIST       |
\t  |  SAI_ACL_TABLE_ATTR_ACL_STAGE                              |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_TABLE_ATTR_ACL_BIND_POINT_TYPE_LIST               |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_TABLE_ATTR_SIZE                                   |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_TABLE_ATTR_ACL_ACTION_TYPE_LIST                   |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_SRC_IPV6                         |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_DST_IPV6                         |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_INNER_SRC_IPV6                   |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_INNER_DST_IPV6                   |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_SRC_MAC                          |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_DST_MAC                          |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_SRC_IP                           |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_DST_IP                           |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_INNER_SRC_IP                     |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_INNER_DST_IP                     |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_IN_PORTS                         |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_OUT_PORTS                        |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_IN_PORT                          |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_OUT_PORT                         |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_SRC_PORT                         |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_OUTER_VLAN_ID                    |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_OUTER_VLAN_PRI                   |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_OUTER_VLAN_CFI                   |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_INNER_VLAN_ID                    |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_INNER_VLAN_PRI                   |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_INNER_VLAN_CFI                   |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_L4_SRC_PORT                      |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_L4_DST_PORT                      |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_INNER_L4_SRC_PORT                |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_INNER_L4_DST_PORT                |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_ETHER_TYPE                       |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_INNER_ETHER_TYPE                 |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_IP_PROTOCOL                      |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_INNER_IP_PROTOCOL                |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_IP_IDENTIFICATION                |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_DSCP                             |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_ECN                              |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_TTL                              |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_TOS                              |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_IP_FLAGS                         |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_TCP_FLAGS                        |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_ACL_IP_TYPE                      |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_ACL_IP_FRAG                      |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_IPV6_FLOW_LABEL                  |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_TC                               |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_ICMP_TYPE                        |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_ICMP_CODE                        |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_ICMPV6_TYPE                      |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_ICMPV6_CODE                      |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_PACKET_VLAN                      |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_TUNNEL_VNI                       |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_FDB_DST_USER_META                |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_ROUTE_DST_USER_META              |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_NEIGHBOR_DST_USER_META           |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_PORT_USER_META                   |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_VLAN_USER_META                   |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_ACL_USER_META                    |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_FDB_NPU_META_DST_HIT             |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_NEIGHBOR_NPU_META_DST_HIT        |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_ROUTE_NPU_META_DST_HIT           |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_BTH_OPCODE                       |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_AETH_SYNDROME                    |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_USER_DEFINED_FIELD_GROUP_MIN           |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_USER_DEFINED_FIELD_GROUP_MAX           |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_ACL_RANGE_TYPE                   |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_FIELD_IPV6_NEXT_HEADER                 |              -                 |
\t  |  SAI_ACL_TABLE_ATTR_ENTRY_LIST                             |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_TABLE_ATTR_AVAILABLE_ACL_ENTRY                    |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_TABLE_ATTR_AVAILABLE_ACL_COUNTER                  |              -                 |
\b

\p
 The ACL Entry attributes supported by centec devices:
\p
\b
\t  |   ATTRIBUTE                                                |       SUPPORT CHIPS LIST       |
\t  |  SAI_ACL_ENTRY_ATTR_TABLE_ID                               |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_PRIORITY                               |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ADMIN_STATE                            |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_SRC_IPV6                         |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_DST_IPV6                         |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_INNER_SRC_IPV6                   |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_INNER_DST_IPV6                   |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_SRC_MAC                          |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_DST_MAC                          |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_SRC_IP                           |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_DST_IP                           |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_INNER_SRC_IP                     |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_INNER_DST_IP                     |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_IN_PORTS                         |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_OUT_PORTS                        |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_IN_PORT                          |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_OUT_PORT                         |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_SRC_PORT                         |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_OUTER_VLAN_ID                    |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_OUTER_VLAN_PRI                   |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_OUTER_VLAN_CFI                   |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_INNER_VLAN_ID                    |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_INNER_VLAN_PRI                   |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_INNER_VLAN_CFI                   |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_L4_SRC_PORT                      |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_L4_DST_PORT                      |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_INNER_L4_SRC_PORT                |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_INNER_L4_DST_PORT                |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_ETHER_TYPE                       |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_INNER_ETHER_TYPE                 |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_IP_PROTOCOL                      |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_INNER_IP_PROTOCOL                |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_IP_IDENTIFICATION                |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_DSCP                             |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_ECN                              |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_TTL                              |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_TOS                              |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_IP_FLAGS                         |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_TCP_FLAGS                        |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_ACL_IP_TYPE                      |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_ACL_IP_FRAG                      |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_IPV6_FLOW_LABEL                  |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_TC                               |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_ICMP_TYPE                        |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_ICMP_CODE                        |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_ICMPV6_TYPE                      |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_ICMPV6_CODE                      |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_PACKET_VLAN                      |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_TUNNEL_VNI                       |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_FDB_DST_USER_META                |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_ROUTE_DST_USER_META              |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_NEIGHBOR_DST_USER_META           |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_PORT_USER_META                   |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_VLAN_USER_META                   |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_ACL_USER_META                    |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_FDB_NPU_META_DST_HIT             |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_NEIGHBOR_NPU_META_DST_HIT        |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_ROUTE_NPU_META_DST_HIT           |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_BTH_OPCODE                       |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_AETH_SYNDROME                    |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_USER_DEFINED_FIELD_GROUP_MIN           |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_USER_DEFINED_FIELD_GROUP_MAX           |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_ACL_RANGE_TYPE                   |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_FIELD_IPV6_NEXT_HEADER                 |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_REDIRECT                        |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_ENDPOINT_IP                     |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_REDIRECT_LIST                   |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_PACKET_ACTION                   |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_FLOOD                           |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_COUNTER                         |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_MIRROR_INGRESS                  |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_MIRROR_EGRESS                   |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_POLICER                     |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_DECREMENT_TTL                   |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_TC                          |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_PACKET_COLOR                |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_INNER_VLAN_ID               |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_INNER_VLAN_PRI              |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_OUTER_VLAN_ID               |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_OUTER_VLAN_PRI              |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_SRC_MAC                     |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_DST_MAC                     |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_SRC_IP                      |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_DST_IP                      |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_SRC_IPV6                    |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_DST_IPV6                    |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_DSCP                        |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_ECN                         |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_L4_SRC_PORT                 |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_L4_DST_PORT                 |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_INGRESS_SAMPLEPACKET_ENABLE     |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_EGRESS_SAMPLEPACKET_ENABLE      |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_ACL_META_DATA               |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_EGRESS_BLOCK_PORT_LIST          |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_USER_TRAP_ID                |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_DO_NOT_LEARN                |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_ACL_DTEL_FLOW_OP                |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_DTEL_INT_SESSION                |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_DTEL_DROP_REPORT_ENABLE         |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_DTEL_FLOW_SAMPLE_PERCENT        |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_DTEL_REPORT_ALL_PACKETS         |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_SET_ISOLATION_GROUP             |              -                 |
\t  |  SAI_ACL_ENTRY_ATTR_ACTION_DTEL_TAIL_DROP_REPORT_ENABLE    |              -                 |
\b

\p
 The ACL Counter attributes supported by centec devices:
\p
\b
\t  |   ATTRIBUTE                                                |       SUPPORT CHIPS LIST       |
\t  |  SAI_ACL_COUNTER_ATTR_TABLE_ID                             |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_COUNTER_ATTR_ENABLE_PACKET_COUNT                  |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_COUNTER_ATTR_ENABLE_BYTE_COUNT                    |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_COUNTER_ATTR_PACKETS                              |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_COUNTER_ATTR_BYTES                                |    CTC8096,CTC7148,CTC7132     |
\b

\p
 The ACL Range Type attributes supported by centec devices:
\p
\b
\t  |   ATTRIBUTE                                                |       SUPPORT CHIPS LIST       |
\t  |  SAI_ACL_RANGE_TYPE_L4_SRC_PORT_RANGE                      |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_RANGE_TYPE_L4_DST_PORT_RANGE                      |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_RANGE_TYPE_OUTER_VLAN                             |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_RANGE_TYPE_INNER_VLAN                             |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_RANGE_TYPE_PACKET_LENGTH                          |    CTC8096,CTC7148,CTC7132     |
\b

\p
 The ACL Range attributes supported by centec devices:
\p
\b
\t  |   ATTRIBUTE                                                |       SUPPORT CHIPS LIST       |
\t  |  SAI_ACL_RANGE_ATTR_TYPE                                   |    CTC8096,CTC7148,CTC7132     |
\t  |  SAI_ACL_RANGE_ATTR_LIMIT                                  |    CTC8096,CTC7148,CTC7132     |
\b

*/


#ifndef _CTC_SAI_ACL_H
#define _CTC_SAI_ACL_H


#include "ctc_sai.h"
#include "sal.h"
/*don't need include other header files*/


#define ACL_DEFAULT_TABLE_SIZE     128
#define ACL_MIN_ENTRY_PRIORITY     1
#define ACL_MAX_ENTRY_PRIORITY     65535
#define ACL_DEFAULT_ENTRY_PRIORITY 1
#define ACL_MAX_FLEX_KEY_COUNT     (SAI_ACL_ENTRY_ATTR_FIELD_END - SAI_ACL_ENTRY_ATTR_FIELD_START + 1)
#define ACL_MAX_FLEX_ACTION_COUNT  (SAI_ACL_ENTRY_ATTR_ACTION_END - SAI_ACL_ENTRY_ATTR_ACTION_START + 1)
/* the maximum tcam id used for acl 0-1 */
#define ACL_MAX_TCAM_ID            1

/* Common part */
/* group or table bind point info */
struct ctc_sai_acl_bind_point_info_s
{
    ctc_slistnode_t head;
    uint8 bind_type;
    sai_object_id_t bind_index;
};
typedef struct ctc_sai_acl_bind_point_info_s ctc_sai_acl_bind_point_info_t;

/* Group */
struct ctc_sai_acl_group_member_s
{
    ctc_slistnode_t head;
    sai_object_id_t table_id;
    uint16 members_prio;
};
typedef struct ctc_sai_acl_group_member_s ctc_sai_acl_group_member_t;

struct ctc_sai_acl_group_s
{
    uint8 group_stage;
    uint8 group_type;
    uint8 bind_point_list;
    ctc_slist_t *member_list;       /* all the members(table) in the group */
    ctc_slist_t *bind_points;       /* the group (as bind unit) is bound to these bind points */
};
typedef struct ctc_sai_acl_group_s ctc_sai_acl_group_t;

/* Table */
struct ctc_sai_acl_table_member_s
{
    ctc_slistnode_t head;
    sai_object_id_t entry_id;
    uint16 priority;
};
typedef struct ctc_sai_acl_table_member_s ctc_sai_acl_table_member_t;

struct ctc_sai_acl_table_group_list_s
{
    ctc_slistnode_t head;
    sai_object_id_t group_id;
};
typedef struct ctc_sai_acl_table_group_list_s ctc_sai_acl_table_group_list_t;

struct ctc_sai_acl_table_s
{
    uint8 table_stage;
    uint8 bind_point_list;
    uint32 table_size;
    uint32 created_entry_count;
    uint32 table_key_bmp[(ACL_MAX_FLEX_KEY_COUNT - 1) / 32 + 1];    /* bit 0 <--> SAI_ACL_TABLE_ATTR_FIELD_SRC_IPV6; bit 1 <--> SAI_ACL_TABLE_ATTR_FIELD_DST_IPV6 */
    ctc_slist_t *entry_list;                                        /* all entries added to this table */
    ctc_slist_t *group_list;                                        /* the table is a member of these groups */
    ctc_slist_t *bind_points;                                       /* the table (as bind unit) is bound to these bind points */
};
typedef struct ctc_sai_acl_table_s ctc_sai_acl_table_t;

/* Entry */
struct ctc_sai_acl_entry_s
{
    sai_object_id_t table_id;
    uint16 priority;
    uint8 entry_valid;     /* admin stats or not */
    uint8 is_ipv6;
    uint8 ctc_mirror_id;

    /* key and action attribute list */
    sai_attribute_t *key_attr_list;
    sai_attribute_t *action_attr_list;
};
typedef struct ctc_sai_acl_entry_s ctc_sai_acl_entry_t;

/* member */
struct ctc_sai_acl_table_group_member_s
{
    sai_object_id_t group_id;
    sai_object_id_t table_id;
    uint32 member_priority;
};
typedef struct ctc_sai_acl_table_group_member_s ctc_sai_acl_table_group_member_t;

/* Range */
struct ctc_sai_acl_range_s
{
    uint8 range_type;
    uint32 range_min;
    uint32 range_max;
    uint32 ref_cnt; /* to record how many sai entry(s) use this acl range object id */
};
typedef struct ctc_sai_acl_range_s ctc_sai_acl_range_t;

/* Counter */
struct ctc_sai_acl_counter_s
{
    sai_object_id_t table_id;
    bool enable_pkt_cnt;
    bool enable_byte_cnt;
    uint32 acl_stats_id; /*ctc sdk stats id*/
    uint32 scl_stats_id; /*ctc sdk stats id*/
    uint32 ref_cnt;     /* to record how many sai entry(s) use this acl counter object id */
};
typedef struct ctc_sai_acl_counter_s ctc_sai_acl_counter_t;

extern sai_status_t
ctc_sai_acl_api_init();

extern sai_status_t
ctc_sai_acl_db_init(uint8 lchip);

extern sai_status_t
ctc_sai_acl_db_deinit(uint8 lchip);

extern sai_status_t
ctc_sai_acl_bind_point_set(sai_object_key_t *key, const sai_attribute_t *attr);

extern void
ctc_sai_acl_dump(uint8 lchip, sal_file_t p_file, ctc_sai_dump_grep_param_t *dump_grep_param);

extern sai_status_t
ctc_sai_acl_set_mirror_sample_rate(uint8 lchip,sai_object_id_t mirror_oid);

#endif /*_CTC_SAI_ACL_H*/



