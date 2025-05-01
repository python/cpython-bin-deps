
#ifdef GET_DIAG_ARRAYS
static const int16_t DiagArrays[] = {
  /* Empty */ -1,
  /* DiagArray1 */ diag::warn_pragma_message, -1,
  /* DiagArray2 */ diag::pp_hash_warning, -1,
  /* DiagArray3 */ diag::warn_cfstring_truncated, -1,
  /* DiagArray5 */ diag::warn_independentclass_attribute, diag::warn_ptr_independentclass_attribute, -1,
  /* DiagArray6 */ diag::warn_nsobject_attribute, -1,
  /* DiagArray7 */ diag::warn_function_always_inline_attribute_mismatch, diag::warn_sme_locally_streaming_has_vl_args_returns, diag::warn_sme_streaming_pass_return_vl_to_non_streaming, -1,
  /* DiagArray9 */ diag::warn_abs_too_small, diag::warn_pointer_abs, diag::warn_unsigned_abs, diag::warn_wrong_absolute_value_type, -1,
  /* DiagArray10 */ diag::warn_abstract_final_class, -1,
  /* DiagArray11 */ diag::warn_abstract_vbase_init_ignored, -1,
  /* DiagArray13 */ diag::warn_taking_address_of_packed_member, -1,
  /* DiagArray14 */ diag::ext_typecheck_addrof_temporary, -1,
  /* DiagArray16 */ diag::warn_not_xl_compatible, diag::warn_pragma_align_not_xl_compatible, -1,
  /* DiagArray17 */ diag::ext_alias_template_in_declarative_nns, -1,
  /* DiagArray18 */ diag::warn_param_mismatched_alignment, -1,
  /* DiagArray20 */ diag::warn_alloca, -1,
  /* DiagArray21 */ diag::warn_alloca_align_alignof, -1,
  /* DiagArray22 */ diag::warn_always_inline_coroutine, -1,
  /* DiagArray23 */ diag::warn_ambiguous_suitable_delete_function_found, -1,
  /* DiagArray24 */ diag::warn_misplaced_ellipsis_vararg, -1,
  /* DiagArray25 */ diag::warn_pp_ambiguous_macro, -1,
  /* DiagArray26 */ diag::ext_nested_name_member_ref_lookup_ambiguous, -1,
  /* DiagArray27 */ diag::ext_ovl_ambiguous_oper_binary_reversed, -1,
  /* DiagArray28 */ diag::warn_incompatible_analyzer_plugin_api, -1,
  /* DiagArray29 */ diag::warn_android_unversioned_fallback, -1,
  /* DiagArray30 */ diag::warn_arith_conv_mixed_anon_enum_types, -1,
  /* DiagArray31 */ diag::ext_abstract_pack_declarator_parens, -1,
  /* DiagArray32 */ diag::warn_apinotes_message, -1,
  /* DiagArray34 */ diag::warn_arc_bridge_cast_nonarc, -1,
  /* DiagArray35 */ diag::warn_arc_possible_repeated_use_of_weak, -1,
  /* DiagArray36 */ diag::warn_arc_object_memaccess, -1,
  /* DiagArray37 */ diag::warn_arc_perform_selector_leaks, -1,
  /* DiagArray38 */ diag::warn_arc_repeated_use_of_weak, -1,
  /* DiagArray39 */ diag::warn_arc_retain_cycle, -1,
  /* DiagArray40 */ diag::warn_arc_literal_assign, diag::warn_arc_retained_assign, diag::warn_arc_retained_property_assign, -1,
  /* DiagArray41 */ diag::warn_argument_invalid_range, -1,
  /* DiagArray42 */ diag::warn_argument_undefined_behaviour, -1,
  /* DiagArray43 */ diag::warn_arm_interrupt_vfp_clobber, -1,
  /* DiagArray44 */ diag::warn_array_index_exceeds_bounds, diag::warn_array_index_exceeds_max_addressable_bounds, diag::warn_array_index_precedes_bounds, diag::warn_ptr_arith_exceeds_max_addressable_bounds, diag::warn_static_array_too_small, -1,
  /* DiagArray45 */ diag::warn_ptr_arith_exceeds_bounds, diag::warn_ptr_arith_precedes_bounds, -1,
  /* DiagArray46 */ diag::warn_inconsistent_array_form, -1,
  /* DiagArray48 */ diag::warn_asm_mismatched_size_modifier, -1,
  /* DiagArray49 */ diag::warn_not_in_enum_assignment, -1,
  /* DiagArray50 */ diag::warn_assume_side_effects, -1,
  /* DiagArray52 */ diag::warn_atimport_in_framework_header, -1,
  /* DiagArray53 */ diag::warn_atomic_member_access, -1,
  /* DiagArray54 */ diag::warn_atomic_op_misaligned, diag::warn_atomic_op_oversized, -1,
  /* DiagArray55 */ diag::warn_atomic_implicit_seq_cst, -1,
  /* DiagArray56 */ diag::warn_atomic_op_has_invalid_memory_order, -1,
  /* DiagArray58 */ diag::warn_atomic_property_rule, -1,
  /* DiagArray59 */ diag::warn_attribute_packed_for_bitfield, -1,
  /* DiagArray60 */ diag::warn_fe_backend_warning_attr, diag::warn_toc_unsupported_type, -1,
  /* DiagArray62 */ diag::ext_c23_auto_non_plain_identifier, -1,
  /* DiagArray63 */ diag::warn_drv_disabling_vptr_no_rtti_default, -1,
  /* DiagArray65 */ diag::ext_auto_storage_class, -1,
  /* DiagArray66 */ diag::warn_auto_var_is_id, -1,
  /* DiagArray67 */ diag::warn_availability_and_unavailable, diag::warn_availability_fuchsia_unavailable_minor, diag::warn_availability_on_static_initializer, diag::warn_availability_swift_unavailable_deprecated_only, diag::warn_availability_unknown_environment, diag::warn_availability_unknown_platform, diag::warn_availability_version_ordering, diag::warn_expected_consistent_version_separator, diag::warn_mismatched_availability, diag::warn_mismatched_availability_override, diag::warn_mismatched_availability_override_unavail, -1,
  /* DiagArray68 */ diag::warn_drv_avr_family_linking_stdlibs_not_implemented, diag::warn_drv_avr_libc_not_found, diag::warn_drv_avr_linker_section_addresses_not_implemented, diag::warn_drv_avr_mcu_not_specified, diag::warn_drv_avr_stdlib_not_linked, -1,
  /* DiagArray69 */ diag::warn_fe_backend_plugin, diag::warn_fe_backend_resource_limit, -1,
  /* DiagArray70 */ diag::backslash_newline_space, -1,
  /* DiagArray71 */ diag::warn_bad_function_cast, -1,
  /* DiagArray73 */ diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, -1,
  /* DiagArray74 */ diag::ext_decomp_decl_cond, -1,
  /* DiagArray75 */ diag::ext_bit_int, diag::ext_cxx_bitint_suffix, -1,
  /* DiagArray76 */ diag::warn_impcast_bitfield_precision_constant, -1,
  /* DiagArray77 */ diag::warn_bitfield_too_small_for_enum, diag::warn_signed_bitfield_enum_conversion, diag::warn_unsigned_bitfield_assigned_signed_enum, -1,
  /* DiagArray78 */ diag::warn_bitfield_width_exceeds_type_width, -1,
  /* DiagArray79 */ diag::warn_precedence_bitwise_conditional, -1,
  /* DiagArray80 */ diag::warn_bitwise_instead_of_logical, -1,
  /* DiagArray81 */ diag::warn_bitwise_op_in_bitwise_op, -1,
  /* DiagArray82 */ diag::warn_block_capture_autoreleasing, -1,
  /* DiagArray83 */ diag::warn_impcast_bool_to_null_pointer, -1,
  /* DiagArray85 */ diag::warn_bitwise_negation_bool, -1,
  /* DiagArray86 */ diag::warn_counted_by_attr_elt_type_unknown_size, -1,
  /* DiagArray87 */ diag::warn_braces_around_init, -1,
  /* DiagArray88 */ diag::warn_incompatible_branch_protection_option, diag::warn_target_unsupported_branch_protection_attribute, diag::warn_unsupported_branch_protection, diag::warn_unsupported_branch_protection_spec, -1,
  /* DiagArray89 */ diag::warn_objc_invalid_bridge, diag::warn_objc_invalid_bridge_to_cf, -1,
  /* DiagArray90 */ diag::warn_assume_aligned_too_great, -1,
  /* DiagArray91 */ diag::ext_pp_redef_builtin_macro, diag::ext_pp_undef_builtin_macro, -1,
  /* DiagArray92 */ diag::warn_builtin_chk_overflow, -1,
  /* DiagArray93 */ diag::warn_implicit_decl_requires_sysheader, -1,
  /* DiagArray94 */ diag::warn_zero_size_struct_union_compat, -1,
  /* DiagArray98 */ diag::ext_old_implicitly_unsigned_long_cxx, diag::warn_auto_storage_class, diag::warn_cxx11_compat_user_defined_literal, diag::warn_cxx11_keyword, diag::warn_cxx11_right_shift_in_template_arg, diag::warn_explicit_instantiation_inline_0x, diag::warn_explicit_instantiation_must_be_global_0x, diag::warn_explicit_instantiation_out_of_scope_0x, diag::warn_explicit_instantiation_unqualified_wrong_namespace_0x, diag::warn_old_implicitly_unsigned_long_cxx, -1,
  /* DiagArray99 */ diag::warn_deprecated_string_literal_conversion, -1,
  /* DiagArray101 */ diag::warn_cxx11_compat_reserved_user_defined_literal, -1,
  /* DiagArray102 */ diag::ext_alias_declaration, diag::ext_array_size_conversion, diag::ext_auto_type_specifier, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_defaulted_deleted_function, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_conversion_functions, diag::ext_extern_template, diag::ext_for_range, diag::ext_generalized_initializer_lists, diag::ext_lambda, diag::ext_nested_name_spec_is_enum, diag::ext_nonclass_type_friend, diag::ext_nonstatic_member_init, diag::ext_override_control_keyword, diag::ext_ref_qualifier, diag::ext_rvalue_reference, diag::ext_scoped_enum, diag::ext_static_data_member_in_union, diag::ext_template_arg_object_internal, diag::ext_template_outside_of_template, diag::ext_template_parameter_default_in_function_template, diag::ext_typename_outside_of_template, diag::ext_unelaborated_friend_type, diag::ext_variadic_templates, diag::warn_ext_cxx11_attributes, -1,
  /* DiagArray103 */ diag::ext_extra_semi_cxx11, -1,
  /* DiagArray104 */ diag::ext_inline_namespace, -1,
  /* DiagArray105 */ diag::ext_cxx11_longlong, -1,
  /* DiagArray106 */ diag::ext_cce_narrowing, diag::ext_init_list_constant_narrowing, diag::ext_init_list_type_narrowing, diag::ext_init_list_variable_narrowing, diag::warn_init_list_constant_narrowing, diag::warn_init_list_type_narrowing, diag::warn_init_list_variable_narrowing, -1,
  /* DiagArray107 */ diag::ext_init_list_constant_narrowing_const_reference, diag::ext_init_list_type_narrowing_const_reference, diag::ext_init_list_variable_narrowing_const_reference, -1,
  /* DiagArray108 */ diag::ext_cxx14_attr, -1,
  /* DiagArray109 */ diag::ext_binary_literal_cxx14, -1,
  /* DiagArray112 */ diag::ext_constexpr_body_invalid_stmt, diag::ext_constexpr_body_multiple_return, diag::ext_constexpr_local_var, diag::ext_constexpr_type_definition, diag::ext_decltype_auto_type_specifier, diag::ext_init_capture, diag::ext_variable_template, -1,
  /* DiagArray113 */ diag::ext_cxx17_attr, -1,
  /* DiagArray115 */ diag::warn_cxx17_compat_exception_spec_in_signature, -1,
  /* DiagArray117 */ diag::ext_auto_new_list_init, diag::ext_constexpr_if, diag::ext_constexpr_on_lambda_cxx17, diag::ext_cxx_static_assert_no_message, diag::ext_decomp_decl, diag::ext_fold_expression, diag::ext_for_range_begin_end_types_differ, diag::ext_hex_literal_invalid, diag::ext_init_statement, diag::ext_inline_variable, diag::ext_multi_using_declaration, diag::ext_nested_namespace_definition, diag::ext_ns_enum_attribute, diag::ext_star_this_lambda_capture_cxx17, diag::ext_template_template_param_typename, diag::ext_using_attribute_ns, diag::ext_using_declaration_pack, -1,
  /* DiagArray122 */ diag::ext_cxx20_attr, -1,
  /* DiagArray123 */ diag::warn_cxx17_compat_implicit_typename, diag::warn_cxx20_compat_aggregate_init_with_ctors, diag::warn_cxx20_compat_consteval, diag::warn_cxx20_compat_constinit, diag::warn_cxx20_compat_explicit_bool, diag::warn_cxx20_compat_spaceship, diag::warn_cxx20_compat_use_of_unaddressable_function, diag::warn_cxx20_compat_utf8_string, diag::warn_cxx20_keyword, -1,
  /* DiagArray125 */ diag::ext_cxx_designated_init, -1,
  /* DiagArray126 */ diag::ext_adl_only_template_id, diag::ext_bitfield_member_init, diag::ext_capture_binding, diag::ext_constexpr_body_invalid_stmt_cxx20, diag::ext_constexpr_ctor_missing_init, diag::ext_constexpr_function_try_block_cxx20, diag::ext_constexpr_local_var_no_init, diag::ext_constexpr_union_ctor_no_init, diag::ext_cxx_missing_varargs_arg, diag::ext_decomp_decl_spec, diag::ext_defaulted_comparison, diag::ext_equals_this_lambda_capture_cxx20, diag::ext_explicit_bool, diag::ext_for_range_init_stmt, diag::ext_implicit_typename, diag::ext_init_capture_pack, diag::ext_inline_nested_namespace_definition, diag::ext_lambda_template_parameter_list, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_using_decl_scoped_enumerator, diag::ext_using_enum_declaration, diag::warn_cxx17_compat_aggregate_init_paren_list, -1,
  /* DiagArray127 */ diag::ext_cxx23_attr, -1,
  /* DiagArray129 */ diag::err_static_lambda, diag::ext_alias_in_init_statement, diag::ext_consteval_if, diag::ext_constexpr_body_invalid_stmt_cxx23, diag::ext_constexpr_static_var, diag::ext_cxx23_pp_directive, diag::ext_cxx23_size_t_suffix, diag::ext_cxx_label_end_of_compound_statement, diag::ext_lambda_missing_parens, diag::ext_operator_overload_static, -1,
  /* DiagArray130 */ diag::ext_decl_attrs_on_lambda, -1,
  /* DiagArray131 */ diag::ext_cxx26_raw_string_literal_character_set, diag::ext_decl_attrs_on_binding, diag::ext_delete_with_message, diag::ext_pack_indexing, diag::ext_placeholder_var_definition, -1,
  /* DiagArray143 */ diag::warn_cxx11_compat_binary_literal, -1,
  /* DiagArray145 */ diag::warn_cxx98_compat_alias_declaration, diag::warn_cxx98_compat_alignas, diag::warn_cxx98_compat_alignof, diag::warn_cxx98_compat_attribute, diag::warn_cxx98_compat_auto_type_specifier, diag::warn_cxx98_compat_constexpr, diag::warn_cxx98_compat_ctor_list_init, diag::warn_cxx98_compat_decltype, diag::warn_cxx98_compat_defaulted_deleted_function, diag::warn_cxx98_compat_delegating_ctor, diag::warn_cxx98_compat_empty_scalar_initializer, diag::warn_cxx98_compat_empty_sizeless_initializer, diag::warn_cxx98_compat_enum_fixed_underlying_type, diag::warn_cxx98_compat_enum_nested_name_spec, diag::warn_cxx98_compat_explicit_conversion_functions, diag::warn_cxx98_compat_for_range, diag::warn_cxx98_compat_friend_is_member, diag::warn_cxx98_compat_generalized_initializer_lists, diag::warn_cxx98_compat_goto_into_protected_scope, diag::warn_cxx98_compat_indirect_goto_in_protected_scope, diag::warn_cxx98_compat_initializer_list_init, diag::warn_cxx98_compat_inline_namespace, diag::warn_cxx98_compat_lambda, diag::warn_cxx98_compat_less_colon_colon, diag::warn_cxx98_compat_literal_operator, diag::warn_cxx98_compat_literal_ucn_control_character, diag::warn_cxx98_compat_literal_ucn_escape_basic_scs, diag::warn_cxx98_compat_noexcept_decl, diag::warn_cxx98_compat_noexcept_expr, diag::warn_cxx98_compat_non_static_member_use, diag::warn_cxx98_compat_nonclass_type_friend, diag::warn_cxx98_compat_nonstatic_member_init, diag::warn_cxx98_compat_nontrivial_union_or_anon_struct_member, diag::warn_cxx98_compat_nullptr, diag::warn_cxx98_compat_override_control_keyword, diag::warn_cxx98_compat_pass_non_pod_arg_to_vararg, diag::warn_cxx98_compat_raw_string_literal, diag::warn_cxx98_compat_ref_qualifier, diag::warn_cxx98_compat_reference_list_init, diag::warn_cxx98_compat_rvalue_reference, diag::warn_cxx98_compat_scoped_enum, diag::warn_cxx98_compat_sfinae_access_control, diag::warn_cxx98_compat_static_assert, diag::warn_cxx98_compat_static_data_member_in_union, diag::warn_cxx98_compat_switch_into_protected_scope, diag::warn_cxx98_compat_template_arg_extra_parens, diag::warn_cxx98_compat_template_arg_null, diag::warn_cxx98_compat_template_arg_object_internal, diag::warn_cxx98_compat_template_outside_of_template, diag::warn_cxx98_compat_template_parameter_default_in_function_template, diag::warn_cxx98_compat_trailing_return_type, diag::warn_cxx98_compat_two_right_angle_brackets, diag::warn_cxx98_compat_typename_outside_of_template, diag::warn_cxx98_compat_unelaborated_friend_type, diag::warn_cxx98_compat_unicode_literal, diag::warn_cxx98_compat_unicode_type, diag::warn_cxx98_compat_using_decl_constructor, diag::warn_cxx98_compat_variadic_templates, -1,
  /* DiagArray146 */ diag::warn_cxx98_compat_temp_copy, -1,
  /* DiagArray147 */ diag::warn_cxx98_compat_top_level_semi, -1,
  /* DiagArray148 */ diag::warn_cxx98_compat_template_arg_local_type, -1,
  /* DiagArray149 */ diag::warn_cxx98_compat_array_size_conversion, diag::warn_cxx98_compat_cast_fn_obj, diag::warn_cxx98_compat_empty_fnmacro_arg, diag::warn_cxx98_compat_enumerator_list_comma, diag::warn_cxx98_compat_extern_template, diag::warn_cxx98_compat_longlong, diag::warn_cxx98_compat_no_newline_eof, diag::warn_cxx98_compat_pp_line_too_big, diag::warn_cxx98_compat_variadic_macro, -1,
  /* DiagArray150 */ diag::warn_cxx98_compat_template_arg_unnamed_type, -1,
  /* DiagArray151 */ diag::ext_anonymous_union, diag::ext_c11_anonymous_struct, diag::ext_c11_feature, diag::ext_typecheck_compare_complete_incomplete_pointers, -1,
  /* DiagArray152 */ diag::warn_c23_compat_utf8_string, diag::warn_c23_keyword, -1,
  /* DiagArray153 */ diag::ext_binary_literal, diag::ext_c23_bitint_suffix, diag::ext_c23_pp_directive, diag::ext_c_empty_initializer, diag::ext_c_label_end_of_compound_statement, diag::ext_c_label_followed_by_declaration, diag::ext_c_missing_varargs_arg, diag::ext_c_nullptr, diag::ext_c_static_assert_no_message, diag::ext_parameter_name_omitted_c23, diag::ext_pp_embed_directive, diag::ext_type_defined_in_offsetof, diag::warn_ext_c23_attributes, -1,
  /* DiagArray156 */ diag::ext_c2y_alignof_incomplete_array, diag::ext_c2y_generic_with_type_arg, diag::ext_c2y_increment_complex, -1,
  /* DiagArray157 */ diag::warn_c99_compat_unicode_id, diag::warn_c99_compat_unicode_literal, diag::warn_c99_keyword, diag::warn_old_implicitly_unsigned_long, -1,
  /* DiagArray158 */ diag::ext_designated_init, diag::ext_designated_init_array, diag::ext_designated_init_brace_elision, diag::ext_designated_init_mixed, diag::ext_designated_init_nested, -1,
  /* DiagArray159 */ diag::ext_aggregate_init_not_constant, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_c99_whitespace_required_after_macro_name, diag::ext_empty_fnmacro_arg, diag::ext_enumerator_list_comma_c, diag::ext_hex_constant_invalid, -1,
  /* DiagArray160 */ diag::warn_call_to_pure_virtual_member_function_from_ctor_dtor, -1,
  /* DiagArray161 */ diag::warn_called_once_gets_called_twice, diag::warn_called_once_never_called, diag::warn_called_once_never_called_when, -1,
  /* DiagArray162 */ diag::warn_cast_align, -1,
  /* DiagArray163 */ diag::warn_cast_calling_conv, -1,
  /* DiagArray165 */ diag::warn_cast_function_type, -1,
  /* DiagArray166 */ diag::warn_cast_function_type_strict, -1,
  /* DiagArray167 */ diag::warn_cast_pointer_from_sel, -1,
  /* DiagArray168 */ diag::warn_cast_qual, diag::warn_cast_qual2, -1,
  /* DiagArray169 */ diag::ext_bad_cxx_cast_qualifiers_away_incoherent, -1,
  /* DiagArray171 */ diag::warn_omp_section_is_char, diag::warn_subscript_is_char, -1,
  /* DiagArray172 */ diag::warn_drv_yc_multiple_inputs_clang_cl, diag::warn_drv_ycyu_different_arg_clang_cl, diag::warn_pp_hdrstop_filename_ignored, diag::warn_pp_macro_def_mismatch_with_pch, -1,
  /* DiagArray173 */ diag::warn_conv_to_base_not_used, diag::warn_conv_to_self_not_used, diag::warn_conv_to_void_not_used, -1,
  /* DiagArray174 */ diag::warn_pass_class_arg_to_vararg, -1,
  /* DiagArray175 */ diag::warn_cmse_nonsecure_union, -1,
  /* DiagArray176 */ diag::warn_comma_operator, -1,
  /* DiagArray177 */ diag::escaped_newline_block_comment_end, diag::ext_line_comment, diag::ext_multi_line_line_comment, diag::warn_nested_block_comment, -1,
  /* DiagArray179 */ diag::ext_typecheck_comparison_of_distinct_pointers, -1,
  /* DiagArray180 */ diag::warn_completion_handler_called_twice, diag::warn_completion_handler_never_called, diag::warn_completion_handler_never_called_when, -1,
  /* DiagArray181 */ diag::ext_complex_component_init, -1,
  /* DiagArray183 */ diag::warn_compound_token_split_by_macro, -1,
  /* DiagArray184 */ diag::warn_compound_token_split_by_whitespace, -1,
  /* DiagArray185 */ diag::ext_typecheck_cond_pointer_integer_mismatch, -1,
  /* DiagArray186 */ diag::warn_maybe_uninit_var, -1,
  /* DiagArray187 */ diag::warn_module_config_macro_undef, -1,
  /* DiagArray188 */ diag::warn_impcast_integer_precision_constant, -1,
  /* DiagArray189 */ diag::warn_is_constant_evaluated_always_true_constexpr, -1,
  /* DiagArray190 */ diag::warn_logical_instead_of_bitwise, -1,
  /* DiagArray191 */ diag::warn_cxx14_compat_constexpr_not_const, -1,
  /* DiagArray192 */ diag::warn_attr_on_unconsumable_class, diag::warn_loop_state_mismatch, diag::warn_param_return_typestate_mismatch, diag::warn_param_typestate_mismatch, diag::warn_return_typestate_for_unconsumable_type, diag::warn_return_typestate_mismatch, diag::warn_use_in_invalid_state, diag::warn_use_of_temp_in_invalid_state, -1,
  /* DiagArray193 */ diag::warn_hlsl_impcast_vector_truncation, diag::warn_impcast_complex_scalar, diag::warn_impcast_vector_scalar, diag::warn_opencl_generic_address_space_arg, diag::warn_template_arg_negative, diag::warn_template_arg_too_large, -1,
  /* DiagArray195 */ diag::warn_non_aligned_allocation_function, -1,
  /* DiagArray196 */ diag::warn_coroutine_handle_address_invalid_return_type, -1,
  /* DiagArray197 */ diag::warn_coroutine_promise_unhandled_exception_required_with_exceptions, -1,
  /* DiagArray198 */ diag::warn_unreachable_default, -1,
  /* DiagArray200 */ diag::warn_objc_cdirective_format_string, -1,
  /* DiagArray201 */ diag::warn_ctad_maybe_unsupported, -1,
  /* DiagArray203 */ diag::warn_ctu_incompat_triple, -1,
  /* DiagArray204 */ diag::warn_attribute_argument_n_negative, diag::warn_cuda_attr_lambda_position, diag::warn_kern_is_inline, diag::warn_kern_is_method, diag::warn_pragma_unroll_cuda_value_in_parens, -1,
  /* DiagArray205 */ diag::warn_default_atomic_custom_getter_setter, -1,
  /* DiagArray206 */ diag::ext_cxx11_attr_placement, -1,
  /* DiagArray207 */ diag::warn_dangling_variable, diag::warn_unsupported_lifetime_extension, -1,
  /* DiagArray208 */ diag::warn_dangling_pointer_assignment, -1,
  /* DiagArray209 */ diag::warn_dangling_lifetime_pointer_assignment, -1,
  /* DiagArray210 */ diag::warn_dangling_else, -1,
  /* DiagArray211 */ diag::warn_bind_ref_member_to_parameter, diag::warn_dangling_member, diag::warn_init_ptr_member_to_parameter_addr, diag::warn_new_dangling_reference, -1,
  /* DiagArray212 */ diag::warn_dangling_lifetime_pointer, diag::warn_dangling_lifetime_pointer_member, -1,
  /* DiagArray213 */ diag::warn_new_dangling_initializer_list, -1,
  /* DiagArray214 */ diag::warn_drv_darwin_sdk_invalid_settings, -1,
  /* DiagArray215 */ diag::warn_pp_date_time, -1,
  /* DiagArray216 */ diag::warn_dealloc_in_category, -1,
  /* DiagArray217 */ diag::warn_debug_compression_unavailable, -1,
  /* DiagArray218 */ diag::ext_mixed_decls_code, diag::warn_mixed_decls_code, -1,
  /* DiagArray219 */ diag::warn_defaulted_comparison_deleted, diag::warn_defaulted_method_deleted, -1,
  /* DiagArray220 */ diag::warn_drv_delayed_template_parsing_after_cxx20, -1,
  /* DiagArray221 */ diag::warn_delegating_ctor_cycle, -1,
  /* DiagArray222 */ diag::warn_delete_abstract_non_virtual_dtor, -1,
  /* DiagArray223 */ diag::ext_delete_void_ptr_operand, diag::warn_delete_incomplete, -1,
  /* DiagArray224 */ diag::warn_delete_non_virtual_dtor, -1,
  /* DiagArray226 */ diag::ext_delimited_escape_sequence, -1,
  /* DiagArray227 */ diag::warn_deprecated_lax_vec_conv_all, -1,
  /* DiagArray228 */ diag::warn_O4_is_O3, diag::warn_access_decl_deprecated, diag::warn_drv_deprecated_arg, diag::warn_drv_deprecated_custom, diag::warn_drv_treating_input_as_cxx, diag::warn_omp_depend_in_ordered_deprecated, diag::warn_omp_minus_in_reduction_deprecated, diag::warn_option_invalid_ocl_version, diag::warn_vector_long_decl_spec_combination, -1,
  /* DiagArray229 */ diag::warn_deprecated_altivec_src_compat, -1,
  /* DiagArray230 */ diag::warn_arith_conv_mixed_anon_enum_types_cxx20, -1,
  /* DiagArray231 */ diag::warn_depr_array_comparison, -1,
  /* DiagArray232 */ diag::warn_deprecated_noreturn_spelling, diag::warn_type_attribute_deprecated_on_decl, diag::warn_vector_mode_deprecated, -1,
  /* DiagArray233 */ diag::warn_deprecated_builtin, -1,
  /* DiagArray234 */ diag::warn_deprecated_comma_subscript, -1,
  /* DiagArray235 */ diag::warn_deprecated_copy, -1,
  /* DiagArray237 */ diag::warn_deprecated_copy_with_dtor, -1,
  /* DiagArray238 */ diag::warn_deprecated_copy_with_user_provided_copy, -1,
  /* DiagArray239 */ diag::warn_deprecated_copy_with_user_provided_dtor, -1,
  /* DiagArray240 */ diag::warn_deprecated_for_co_await, -1,
  /* DiagArray241 */ diag::warn_atl_uuid_deprecated, diag::warn_cstyle_param, diag::warn_deprecated, diag::warn_deprecated_fwdclass_message, diag::warn_deprecated_message, diag::warn_property_method_deprecated, -1,
  /* DiagArray242 */ diag::warn_exception_spec_deprecated, -1,
  /* DiagArray243 */ diag::warn_comparison_mixed_enum_types_cxx20, -1,
  /* DiagArray244 */ diag::warn_conditional_mixed_enum_types_cxx20, -1,
  /* DiagArray245 */ diag::warn_arith_conv_mixed_enum_types_cxx20, -1,
  /* DiagArray246 */ diag::warn_arith_conv_enum_float_cxx20, -1,
  /* DiagArray247 */ diag::warn_deprecated_def, diag::warn_unavailable_def, -1,
  /* DiagArray248 */ diag::warn_increment_bool, -1,
  /* DiagArray249 */ diag::warn_deprecated_literal_operator_id, -1,
  /* DiagArray250 */ diag::warn_deprecated_module_dot_map, -1,
  /* DiagArray251 */ diag::warn_drv_deprecated_arg_no_relaxed_template_template_args, -1,
  /* DiagArray252 */ diag::warn_non_prototype_changes_behavior, diag::warn_strict_uses_without_prototype, -1,
  /* DiagArray253 */ diag::warn_objc_isa_assign, diag::warn_objc_isa_use, -1,
  /* DiagArray254 */ diag::warn_objc_pointer_masking, -1,
  /* DiagArray255 */ diag::warn_objc_pointer_masking_performSelector, -1,
  /* DiagArray256 */ diag::warn_drv_deprecated_arg_ofast, -1,
  /* DiagArray257 */ diag::warn_pragma_deprecated_macro_use, -1,
  /* DiagArray258 */ diag::warn_deprecated_redundant_constexpr_static_def, -1,
  /* DiagArray259 */ diag::warn_deprecated_register, -1,
  /* DiagArray260 */ diag::warn_deprecated_this_capture, -1,
  /* DiagArray261 */ diag::warn_ext_int_deprecated, -1,
  /* DiagArray262 */ diag::warn_deprecated_increment_decrement_volatile, diag::warn_deprecated_simple_assign_volatile, diag::warn_deprecated_volatile_param, diag::warn_deprecated_volatile_return, diag::warn_deprecated_volatile_structured_binding, -1,
  /* DiagArray264 */ diag::warn_direct_ivar_access, -1,
  /* DiagArray265 */ diag::pp_disabled_macro_expansion, -1,
  /* DiagArray268 */ diag::warn_conflicting_param_modifiers, diag::warn_conflicting_ret_type_modifiers, -1,
  /* DiagArray270 */ diag::warn_remainder_division_by_zero, -1,
  /* DiagArray271 */ diag::warn_attribute_dll_redeclaration, -1,
  /* DiagArray272 */ diag::warn_attribute_dllexport_explicit_instantiation_decl, -1,
  /* DiagArray273 */ diag::warn_attribute_dllimport_static_field_definition, -1,
  /* DiagArray274 */ diag::warn_doc_api_container_decl_mismatch, diag::warn_doc_block_command_duplicate, diag::warn_doc_block_command_empty_paragraph, diag::warn_doc_container_decl_mismatch, diag::warn_doc_function_method_decl_mismatch, diag::warn_doc_html_start_tag_expected_ident_or_greater, diag::warn_doc_html_start_tag_expected_quoted_string, diag::warn_doc_inline_command_not_enough_arguments, diag::warn_doc_param_duplicate, diag::warn_doc_param_invalid_direction, diag::warn_doc_param_not_attached_to_a_function_decl, diag::warn_doc_param_not_found, diag::warn_doc_returns_attached_to_a_void_function, diag::warn_doc_returns_not_attached_to_a_function_decl, diag::warn_doc_tparam_duplicate, diag::warn_doc_tparam_not_attached_to_a_template_decl, diag::warn_doc_tparam_not_found, diag::warn_not_a_doxygen_trailing_member_comment, diag::warn_splice_in_doxygen_comment, diag::warn_verbatim_block_end_without_start, -1,
  /* DiagArray275 */ diag::warn_doc_deprecated_not_sync, -1,
  /* DiagArray276 */ diag::warn_doc_html_end_forbidden, diag::warn_doc_html_end_unbalanced, diag::warn_doc_html_missing_end_tag, diag::warn_doc_html_start_end_mismatch, -1,
  /* DiagArray277 */ diag::warn_doc_param_spaces_in_direction, -1,
  /* DiagArray278 */ diag::warn_correct_comment_command_name, diag::warn_unknown_comment_command_name, -1,
  /* DiagArray279 */ diag::ext_dollar_in_identifier, -1,
  /* DiagArray280 */ diag::warn_impcast_double_promotion, -1,
  /* DiagArray281 */ diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_qualified_dtor_named_in_lexical_scope, -1,
  /* DiagArray282 */ diag::ext_destructor_typedef_name, -1,
  /* DiagArray283 */ diag::ext_duplicate_declspec, diag::ext_warn_duplicate_declspec, diag::warn_attribute_address_multiple_identical_qualifiers, diag::warn_duplicate_declspec, -1,
  /* DiagArray284 */ diag::warn_duplicate_enum_values, -1,
  /* DiagArray285 */ diag::warn_method_param_declaration, -1,
  /* DiagArray286 */ diag::warn_duplicate_method_decl, -1,
  /* DiagArray287 */ diag::warn_duplicate_protocol_def, -1,
  /* DiagArray288 */ diag::warn_drv_dxc_missing_dxv, -1,
  /* DiagArray289 */ diag::warn_dyn_class_memaccess, -1,
  /* DiagArray290 */ diag::ext_dynamic_exception_spec, -1,
  /* DiagArray291 */ diag::warn_eagerly_load_for_standard_cplusplus_modules, -1,
  /* DiagArray293 */ diag::ext_enum_base_in_type_specifier, -1,
  /* DiagArray294 */ diag::ext_elaborated_enum_class, -1,
  /* DiagArray295 */ diag::ext_embedded_directive, -1,
  /* DiagArray296 */ diag::warn_empty_for_body, diag::warn_empty_if_body, diag::warn_empty_range_based_for_body, diag::warn_empty_switch_body, diag::warn_empty_while_body, -1,
  /* DiagArray297 */ diag::ext_decomp_decl_empty, -1,
  /* DiagArray298 */ diag::warn_empty_init_statement, -1,
  /* DiagArray299 */ diag::ext_empty_translation_unit, -1,
  /* DiagArray300 */ diag::warn_incomplete_encoded_type, -1,
  /* DiagArray302 */ diag::warn_comparison_mixed_enum_types, -1,
  /* DiagArray303 */ diag::warn_conditional_mixed_enum_types, -1,
  /* DiagArray304 */ diag::warn_comparison_of_mixed_enum_types_switch, -1,
  /* DiagArray305 */ diag::warn_constexpr_unscoped_enum_out_of_range, -1,
  /* DiagArray306 */ diag::warn_impcast_different_enum_types, -1,
  /* DiagArray307 */ diag::warn_arith_conv_mixed_enum_types, -1,
  /* DiagArray308 */ diag::warn_arith_conv_enum_float, -1,
  /* DiagArray309 */ diag::ext_enum_too_large, diag::ext_enumerator_increment_too_large, -1,
  /* DiagArray310 */ diag::warn_cdtor_function_try_handler_mem_expr, diag::warn_exception_caught_by_earlier_handler, diag::warn_throw_in_noexcept_func, -1,
  /* DiagArray311 */ diag::ext_excess_initializers, diag::ext_excess_initializers_for_sizeless_type, diag::ext_excess_initializers_in_char_array_initializer, diag::ext_initializer_string_for_char_array_too_long, -1,
  /* DiagArray312 */ diag::warn_anyx86_excessive_regsave, -1,
  /* DiagArray313 */ diag::warn_exit_time_destructor, -1,
  /* DiagArray314 */ diag::warn_defined_in_function_type_macro, diag::warn_defined_in_object_type_macro, -1,
  /* DiagArray315 */ diag::warn_experimental_header_unit, -1,
  /* DiagArray316 */ diag::warn_direct_initialize_call, diag::warn_direct_super_initialize_call, -1,
  /* DiagArray317 */ diag::warn_arc_strong_pointer_objc_pointer, -1,
  /* DiagArray318 */ diag::ext_explicit_specialization_storage_class, -1,
  /* DiagArray320 */ diag::warn_zero_size_struct_union_in_extern_c, -1,
  /* DiagArray321 */ diag::warn_extern_init, -1,
  /* DiagArray323 */ diag::warn_namespace_member_extra_qualification, -1,
  /* DiagArray324 */ diag::ext_extra_semi, diag::warn_extra_semi_after_mem_fn_def, -1,
  /* DiagArray325 */ diag::warn_null_statement, -1,
  /* DiagArray326 */ diag::ext_pp_extra_tokens_at_eol, diag::warn_omp_extra_tokens_at_eol, -1,
  /* DiagArray327 */ diag::warn_missing_symbol_graph_dir, -1,
  /* DiagArray328 */ diag::warn_final_dtor_non_final_class, -1,
  /* DiagArray329 */ diag::warn_pragma_final_macro, -1,
  /* DiagArray330 */ diag::ext_clang_c_enum_fixed_underlying_type, -1,
  /* DiagArray331 */ diag::warn_fixedpoint_constant_overflow, -1,
  /* DiagArray332 */ diag::warn_flag_enum_constant_out_of_range, -1,
  /* DiagArray333 */ diag::ext_flexible_array_in_array, diag::ext_flexible_array_in_struct, -1,
  /* DiagArray334 */ diag::warn_impcast_float_integer, -1,
  /* DiagArray335 */ diag::warn_floatingpoint_eq, -1,
  /* DiagArray336 */ diag::warn_impcast_float_to_integer, diag::warn_impcast_float_to_integer_out_of_range, -1,
  /* DiagArray337 */ diag::warn_impcast_float_to_integer_zero, -1,
  /* DiagArray338 */ diag::warn_redundant_loop_iteration, diag::warn_variables_not_in_loop_body, -1,
  /* DiagArray339 */ diag::warn_format_P_no_precision, diag::warn_format_P_with_objc_pointer, diag::warn_format_argument_needs_cast, diag::warn_format_bool_as_character, diag::warn_format_conversion_argument_type_mismatch, diag::warn_format_invalid_annotation, diag::warn_format_invalid_positional_specifier, diag::warn_format_mix_positional_nonpositional_args, diag::warn_format_nonsensical_length, diag::warn_format_string_is_wide_literal, diag::warn_format_zero_positional_specifier, diag::warn_missing_format_string, diag::warn_printf_ObjCflags_without_ObjCConversion, diag::warn_printf_asterisk_missing_arg, diag::warn_printf_asterisk_wrong_type, diag::warn_printf_empty_objc_flag, diag::warn_printf_format_string_contains_null_char, diag::warn_printf_format_string_not_null_terminated, diag::warn_printf_ignored_flag, diag::warn_printf_incomplete_specifier, diag::warn_printf_invalid_objc_flag, diag::warn_printf_narg_not_supported, diag::warn_printf_nonsensical_flag, diag::warn_printf_nonsensical_optional_amount, diag::warn_printf_positional_arg_exceeds_data_args, diag::warn_scanf_nonzero_width, diag::warn_scanf_scanlist_incomplete, -1,
  /* DiagArray340 */ diag::warn_printf_data_arg_not_used, -1,
  /* DiagArray341 */ diag::warn_printf_insufficient_data_args, -1,
  /* DiagArray342 */ diag::warn_format_invalid_conversion, -1,
  /* DiagArray343 */ diag::warn_format_non_standard, diag::warn_format_non_standard_conversion_spec, diag::warn_format_non_standard_positional_arg, -1,
  /* DiagArray344 */ diag::warn_format_nonliteral, -1,
  /* DiagArray345 */ diag::warn_format_overflow, -1,
  /* DiagArray346 */ diag::warn_format_overflow_non_kprintf, -1,
  /* DiagArray347 */ diag::warn_format_argument_needs_cast_pedantic, diag::warn_format_conversion_argument_type_mismatch_pedantic, -1,
  /* DiagArray348 */ diag::warn_format_nonliteral_noargs, -1,
  /* DiagArray349 */ diag::warn_format_conversion_argument_type_mismatch_signedness, -1,
  /* DiagArray350 */ diag::warn_format_truncation, -1,
  /* DiagArray351 */ diag::warn_format_truncation_non_kprintf, -1,
  /* DiagArray352 */ diag::warn_format_conversion_argument_type_mismatch_confusion, -1,
  /* DiagArray354 */ diag::warn_empty_format_string, -1,
  /* DiagArray356 */ diag::warn_fortify_scanf_overflow, diag::warn_fortify_source_overflow, diag::warn_fortify_source_size_mismatch, diag::warn_fortify_strlen_overflow, -1,
  /* DiagArray357 */ diag::warn_four_char_character_literal, -1,
  /* DiagArray358 */ diag::warn_frame_address, -1,
  /* DiagArray359 */ diag::warn_fe_backend_frame_larger_than, diag::warn_fe_frame_larger_than, -1,
  /* DiagArray361 */ diag::warn_framework_include_private_from_public, -1,
  /* DiagArray362 */ diag::warn_free_nonheap_object, -1,
  /* DiagArray363 */ diag::ext_enum_friend, -1,
  /* DiagArray364 */ diag::warn_function_def_in_objc_container, -1,
  /* DiagArray365 */ diag::warn_conflicting_func_effects, diag::warn_invalid_add_func_effects, diag::warn_mismatched_func_effect_override, diag::warn_mismatched_func_effect_redeclaration, -1,
  /* DiagArray366 */ diag::warn_dispatch_body_ignored, diag::warn_multiversion_duplicate_entries, diag::warn_target_clone_duplicate_options, diag::warn_target_clone_no_impact_options, -1,
  /* DiagArray367 */ diag::warn_drv_fuse_ld_path, -1,
  /* DiagArray370 */ diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_warn_gnu_final, diag::warn_attribute_on_function_definition, diag::warn_break_binds_to_switch, diag::warn_cleanup_ext, diag::warn_gcc_attribute_location, diag::warn_gcc_ignores_type_attr, diag::warn_gcc_requires_variadic_function, diag::warn_gcc_variable_decl_in_for_loop, diag::warn_loop_ctrl_binds_to_inner, -1,
  /* DiagArray371 */ diag::warn_global_constructor, diag::warn_global_destructor, -1,
  /* DiagArray372 */ diag::warn_drv_global_isel_incomplete, diag::warn_drv_global_isel_incomplete_opt, -1,
  /* DiagArray374 */ diag::ext_alignof_expr, -1,
  /* DiagArray375 */ diag::ext_gnu_anonymous_struct, -1,
  /* DiagArray376 */ diag::ext_array_init_parens, -1,
  /* DiagArray377 */ diag::ext_auto_type, -1,
  /* DiagArray379 */ diag::ext_gnu_case_range, -1,
  /* DiagArray380 */ diag::ext_integer_complex, -1,
  /* DiagArray381 */ diag::ext_array_init_copy, -1,
  /* DiagArray382 */ diag::ext_gnu_conditional_expr, -1,
  /* DiagArray383 */ diag::ext_gnu_array_range, diag::ext_gnu_missing_equal_designator, diag::ext_gnu_old_style_field_designator, -1,
  /* DiagArray385 */ diag::ext_empty_struct_union, diag::ext_flexible_array_empty_aggregate_gnu, diag::ext_no_named_members_in_struct_union, -1,
  /* DiagArray386 */ diag::ext_flexible_array_init, -1,
  /* DiagArray387 */ diag::ext_flexible_array_union_gnu, -1,
  /* DiagArray388 */ diag::ext_expr_not_ice, diag::ext_in_class_initializer_non_constant, diag::ext_vla_folded_to_constant, -1,
  /* DiagArray389 */ diag::ext_imaginary_constant, -1,
  /* DiagArray390 */ diag::ext_pp_include_next_directive, -1,
  /* DiagArray391 */ diag::warn_gnu_inline_cplusplus_without_extern, -1,
  /* DiagArray392 */ diag::ext_gnu_address_of_label, diag::ext_gnu_indirect_goto, -1,
  /* DiagArray393 */ diag::ext_pp_gnu_line_directive, -1,
  /* DiagArray394 */ diag::warn_gnu_null_ptr_arith, -1,
  /* DiagArray396 */ diag::ext_gnu_ptr_func_arith, diag::ext_gnu_subscript_void_type, diag::ext_gnu_void_ptr, -1,
  /* DiagArray397 */ diag::ext_forward_ref_enum_def, -1,
  /* DiagArray398 */ diag::ext_gnu_statement_expr, -1,
  /* DiagArray399 */ diag::ext_gnu_statement_expr_macro, -1,
  /* DiagArray400 */ diag::ext_in_class_initializer_float_type, -1,
  /* DiagArray401 */ diag::ext_string_literal_operator_template, -1,
  /* DiagArray402 */ diag::ext_typecheck_cast_to_union, -1,
  /* DiagArray403 */ diag::ext_variable_sized_type_in_struct, -1,
  /* DiagArray404 */ diag::ext_pp_line_zero, -1,
  /* DiagArray405 */ diag::ext_paste_comma, -1,
  /* DiagArray406 */ diag::warn_maybe_capture_bad_target_this_ptr, -1,
  /* DiagArray407 */ diag::warn_header_guard, -1,
  /* DiagArray408 */ diag::warn_using_directive_in_header, -1,
  /* DiagArray409 */ diag::warn_next_larger_fp_type_same_size_than_fp, -1,
  /* DiagArray410 */ diag::warn_hip_omp_target_directives, -1,
  /* DiagArray411 */ diag::warn_ignored_hip_only_option, -1,
  /* DiagArray412 */ diag::warn_hlsl_availability, diag::warn_hlsl_availability_unavailable, -1,
  /* DiagArray413 */ diag::ext_hlsl_access_specifiers, -1,
  /* DiagArray414 */ diag::warn_condition_is_idiomatic_assignment, -1,
  /* DiagArray415 */ diag::ext_cannot_use_trivial_abi, diag::warn_alias_to_weak_alias, diag::warn_alias_with_section, diag::warn_aligned_attr_underaligned, diag::warn_attr_abi_tag_namespace, diag::warn_attribute_after_definition_ignored, diag::warn_attribute_cmse_entry_static, diag::warn_attribute_dllexport_explicit_instantiation_def, diag::warn_attribute_exclude_from_explicit_instantiation_local_class, diag::warn_attribute_has_no_effect_on_compile_time_if, diag::warn_attribute_has_no_effect_on_infinite_loop, diag::warn_attribute_hybrid_patchable_non_extern, diag::warn_attribute_iboutlet, diag::warn_attribute_ignored, diag::warn_attribute_ignored_for_field_of_type, diag::warn_attribute_ignored_no_calls_in_stmt, diag::warn_attribute_ignored_non_function_pointer, diag::warn_attribute_ignored_on_inline, diag::warn_attribute_ignored_on_non_definition, diag::warn_attribute_invalid_on_definition, diag::warn_attribute_no_decl, diag::warn_attribute_nonnull_no_pointers, diag::warn_attribute_nonnull_parm_no_args, diag::warn_attribute_not_on_decl, diag::warn_attribute_pointer_or_reference_only, diag::warn_attribute_pointers_only, diag::warn_attribute_precede_definition, diag::warn_attribute_return_pointers_only, diag::warn_attribute_return_pointers_refs_only, diag::warn_attribute_sentinel_named_arguments, diag::warn_attribute_sentinel_not_variadic, diag::warn_attribute_type_not_supported, diag::warn_attribute_type_not_supported_global, diag::warn_attribute_unknown_visibility, diag::warn_attribute_void_function_method, diag::warn_attribute_weak_on_field, diag::warn_attribute_weak_on_local, diag::warn_attribute_wrong_decl_type, diag::warn_attribute_wrong_decl_type_str, diag::warn_attributes_likelihood_ifstmt_conflict, diag::warn_block_literal_attributes_on_omitted_return_type, diag::warn_cconv_unsupported, diag::warn_const_attr_with_pure_attr, diag::warn_cuda_maxclusterrank_sm_90, diag::warn_cxx11_gnu_attribute_on_type, diag::warn_declspec_allocator_nonpointer, diag::warn_declspec_attribute_ignored, diag::warn_deprecated_anonymous_namespace, diag::warn_deprecated_ignored_on_using, diag::warn_dllimport_dropped_from_inline_function, diag::warn_duplicate_attribute, diag::warn_duplicate_attribute_exact, diag::warn_function_attribute_ignored_in_stmt, diag::warn_function_stmt_attribute_precedence, diag::warn_gc_attribute_weak_on_local, diag::warn_gnu_inline_attribute_requires_inline, diag::warn_ignored_ms_inheritance, diag::warn_ignored_objc_externally_retained, diag::warn_import_on_definition, diag::warn_internal_linkage_local_storage, diag::warn_interrupt_attribute_invalid, diag::warn_microsoft_qualifiers_ignored, diag::warn_mig_server_routine_does_not_return_kern_return_t, diag::warn_mismatched_import, diag::warn_mmap_unknown_attribute, diag::warn_nocf_check_attribute_ignored, diag::warn_noderef_on_non_pointer_or_array, diag::warn_nothrow_attribute_ignored, diag::warn_ns_attribute_wrong_parameter_type, diag::warn_ns_attribute_wrong_return_type, diag::warn_objc_direct_ignored, diag::warn_objc_direct_property_ignored, diag::warn_opencl_attr_deprecated_ignored, diag::warn_pure_function_returns_void, diag::warn_require_const_init_added_too_late, diag::warn_riscv_repeated_interrupt_attribute, diag::warn_sycl_kernel_invalid_template_param_type, diag::warn_sycl_kernel_num_of_function_params, diag::warn_sycl_kernel_num_of_template_params, diag::warn_sycl_kernel_return_type, diag::warn_transparent_union_attribute_field_size_align, diag::warn_transparent_union_attribute_floating, diag::warn_transparent_union_attribute_not_definition, diag::warn_transparent_union_attribute_zero_fields, diag::warn_type_attribute_wrong_type, diag::warn_unhandled_ms_attribute_ignored, diag::warn_unsupported_target_attribute, diag::warn_unused_result_typedef_unsupported_spelling, diag::warn_wrong_clang_attr_namespace, -1,
  /* DiagArray416 */ diag::warn_missing_sdksettings_for_availability_checking, -1,
  /* DiagArray417 */ diag::warn_drv_pch_ignoring_gch_dir, diag::warn_drv_pch_ignoring_gch_file, -1,
  /* DiagArray418 */ diag::warn_drv_unsupported_opt_for_target, diag::warn_ignored_gcc_optimization, -1,
  /* DiagArray419 */ diag::warn_pragma_intrinsic_builtin, -1,
  /* DiagArray421 */ diag::warn_clause_expected_string, diag::warn_pragma_align_expected_equal, diag::warn_pragma_align_invalid_option, diag::warn_pragma_comment_ignored, diag::warn_pragma_debug_dependent_argument, diag::warn_pragma_debug_missing_argument, diag::warn_pragma_debug_missing_command, diag::warn_pragma_debug_unexpected_argument, diag::warn_pragma_debug_unexpected_command, diag::warn_pragma_debug_unknown_module, diag::warn_pragma_expected_action_or_r_paren, diag::warn_pragma_expected_colon, diag::warn_pragma_expected_colon_r_paren, diag::warn_pragma_expected_comma, diag::warn_pragma_expected_identifier, diag::warn_pragma_expected_init_seg, diag::warn_pragma_expected_integer, diag::warn_pragma_expected_lparen, diag::warn_pragma_expected_non_wide_string, diag::warn_pragma_expected_predicate, diag::warn_pragma_expected_punc, diag::warn_pragma_expected_rparen, diag::warn_pragma_expected_section_label_or_name, diag::warn_pragma_expected_section_name, diag::warn_pragma_expected_section_push_pop_or_name, diag::warn_pragma_expected_string, diag::warn_pragma_extra_tokens_at_eol, diag::warn_pragma_force_cuda_host_device_bad_arg, diag::warn_pragma_fp_ignored, diag::warn_pragma_init_seg_unsupported_target, diag::warn_pragma_invalid_action, diag::warn_pragma_invalid_argument, diag::warn_pragma_invalid_specific_action, diag::warn_pragma_missing_argument, diag::warn_pragma_ms_fenv_access, diag::warn_pragma_ms_struct, diag::warn_pragma_options_align_reset_failed, diag::warn_pragma_options_expected_align, diag::warn_pragma_pack_invalid_alignment, diag::warn_pragma_pack_malformed, diag::warn_pragma_pop_failed, diag::warn_pragma_pop_macro_no_push, diag::warn_pragma_unknown_extension, diag::warn_pragma_unsupported_action, diag::warn_pragma_unsupported_extension, diag::warn_pragma_unused_expected_var, diag::warn_pragma_unused_expected_var_arg, diag::warn_pragma_unused_undeclared_var, diag::warn_stdc_unknown_rounding_mode, -1,
  /* DiagArray422 */ diag::warn_arc_lifetime_result_type, diag::warn_block_literal_qualifiers_on_omitted_return_type, diag::warn_qual_return_type, diag::warn_typecheck_function_qualifiers_ignored, -1,
  /* DiagArray423 */ diag::warn_typecheck_reference_qualifiers, -1,
  /* DiagArray425 */ diag::warn_auto_implicit_atomic_property, diag::warn_implicit_atomic_property, -1,
  /* DiagArray426 */ diag::warn_impcast_integer_float_precision_constant, -1,
  /* DiagArray427 */ diag::warn_impcast_floating_point_to_bool, -1,
  /* DiagArray428 */ diag::ext_implicit_exception_spec_mismatch, -1,
  /* DiagArray429 */ diag::warn_unannotated_fallthrough, -1,
  /* DiagArray430 */ diag::warn_unannotated_fallthrough_per_function, -1,
  /* DiagArray431 */ diag::warn_impcast_fixed_point_range, -1,
  /* DiagArray432 */ diag::warn_impcast_float_precision, diag::warn_impcast_float_result_precision, -1,
  /* DiagArray433 */ diag::ext_implicit_function_decl_c99, diag::ext_implicit_lib_function_decl, diag::ext_implicit_lib_function_decl_c99, diag::warn_builtin_unknown, diag::warn_implicit_function_decl, -1,
  /* DiagArray434 */ diag::ext_missing_type_specifier, diag::ext_param_not_declared, diag::warn_missing_type_specifier, -1,
  /* DiagArray435 */ diag::warn_impcast_high_order_zero_bits, diag::warn_impcast_integer_precision, -1,
  /* DiagArray436 */ diag::warn_impcast_integer_float_precision, -1,
  /* DiagArray437 */ diag::warn_implicitly_retains_self, -1,
  /* DiagArray438 */ diag::ext_integer_literal_too_large_for_signed, -1,
  /* DiagArray440 */ diag::ext_pp_import_directive, -1,
  /* DiagArray441 */ diag::warn_inaccessible_base_class, -1,
  /* DiagArray442 */ diag::warn_pp_include_angled_in_module_purview, -1,
  /* DiagArray443 */ diag::pp_include_next_absolute_path, -1,
  /* DiagArray444 */ diag::pp_include_next_in_primary, -1,
  /* DiagArray445 */ diag::warn_deep_exception_specs_differ, diag::warn_incompatible_exception_specs, -1,
  /* DiagArray446 */ diag::ext_typecheck_convert_incompatible_function_pointer, -1,
  /* DiagArray447 */ diag::warn_typecheck_convert_incompatible_function_pointer_strict, -1,
  /* DiagArray448 */ diag::warn_redecl_library_builtin, -1,
  /* DiagArray449 */ diag::warn_section_msvc_compat, -1,
  /* DiagArray450 */ diag::warn_cxx_ms_struct, diag::warn_npot_ms_struct, -1,
  /* DiagArray451 */ diag::ext_typecheck_convert_incompatible_pointer, -1,
  /* DiagArray452 */ diag::ext_nested_pointer_qualifier_mismatch, diag::ext_typecheck_convert_discards_qualifiers, diag::warn_bad_cxx_cast_nested_pointer_addr_space, -1,
  /* DiagArray453 */ diag::warn_property_types_are_incompatible, -1,
  /* DiagArray454 */ diag::warn_incompatible_sysroot, -1,
  /* DiagArray455 */ diag::warn_mmap_incomplete_framework_module_declaration, -1,
  /* DiagArray456 */ diag::warn_undef_method_impl, -1,
  /* DiagArray458 */ diag::warn_implicit_decl_no_jmp_buf, -1,
  /* DiagArray459 */ diag::warn_missing_submodule, diag::warn_mmap_umbrella_dir_not_found, diag::warn_uncovered_module_header, -1,
  /* DiagArray460 */ diag::warn_redeclaration_without_attribute_prev_attribute_ignored, diag::warn_redeclaration_without_import_attribute, -1,
  /* DiagArray461 */ diag::warn_inconsistent_destructor_marked_not_override_overriding, -1,
  /* DiagArray462 */ diag::warn_inconsistent_function_marked_not_override_overriding, -1,
  /* DiagArray463 */ diag::ext_increment_bool, -1,
  /* DiagArray464 */ diag::warn_infinite_recursive_function, -1,
  /* DiagArray466 */ diag::ext_initializer_overrides, diag::ext_initializer_union_overrides, diag::warn_initializer_overrides, -1,
  /* DiagArray467 */ diag::ext_out_of_line_qualified_id_type_names_constructor, -1,
  /* DiagArray469 */ diag::warn_fe_inline_asm, -1,
  /* DiagArray470 */ diag::warn_inline_namespace_reopened_noninline, -1,
  /* DiagArray471 */ diag::ext_operator_new_delete_declared_inline, -1,
  /* DiagArray472 */ diag::warn_dylib_symbol_flags_mismatch, diag::warn_glob_did_not_match, diag::warn_header_availability_mismatch, diag::warn_header_hidden_symbol, diag::warn_header_symbol_flags_mismatch, diag::warn_header_symbol_missing, diag::warn_library_hidden_symbol, diag::warn_library_missing_symbol, diag::warn_no_such_excluded_header_file, diag::warn_platform_mismatch, diag::warn_rpaths_mismatch, diag::warn_rpaths_missing, diag::warn_target, -1,
  /* DiagArray473 */ diag::warn_explicit_instantiation_after_specialization, -1,
  /* DiagArray474 */ diag::ext_typecheck_convert_int_pointer, diag::ext_typecheck_convert_pointer_int, -1,
  /* DiagArray476 */ diag::warn_enum_constant_in_bool_context, diag::warn_left_shift_in_bool_context, -1,
  /* DiagArray477 */ diag::warn_int_to_pointer_cast, -1,
  /* DiagArray478 */ diag::warn_int_to_void_pointer_cast, -1,
  /* DiagArray479 */ diag::warn_integer_constant_overflow, -1,
  /* DiagArray480 */ diag::warn_drv_missing_plugin_arg, diag::warn_drv_missing_plugin_name, diag::warn_drv_msp430_hwmult_mismatch, diag::warn_drv_msp430_hwmult_no_device, diag::warn_drv_msp430_hwmult_unsupported, diag::warn_drv_object_size_disabled_O0, diag::warn_drv_optimization_value, diag::warn_fe_backend_invalid_feature_flag, diag::warn_fe_backend_readonly_feature_flag, diag::warn_target_unrecognized_env, diag::warn_target_unsupported_extension, -1,
  /* DiagArray481 */ diag::ext_constexpr_function_never_constant_expr, -1,
  /* DiagArray482 */ diag::warn_invalid_feature_combination, -1,
  /* DiagArray483 */ diag::warn_iboutlet_object_type, diag::warn_iboutletcollection_property_assign, -1,
  /* DiagArray484 */ diag::warn_invalid_initializer_from_system_header, -1,
  /* DiagArray485 */ diag::warn_invalid_ios_deployment_target, -1,
  /* DiagArray486 */ diag::warn_attribute_no_builtin_invalid_builtin_name, -1,
  /* DiagArray487 */ diag::warn_falloff_noreturn_function, diag::warn_noreturn_function_has_return_expr, -1,
  /* DiagArray488 */ diag::ext_offsetof_non_pod_type, diag::ext_offsetof_non_standardlayout_type, -1,
  /* DiagArray489 */ diag::warn_drv_unable_to_find_directory_expected, -1,
  /* DiagArray490 */ diag::ext_partial_spec_not_more_specialized_than_primary, -1,
  /* DiagArray492 */ diag::ext_empty_character, diag::ext_unterminated_char_or_string, -1,
  /* DiagArray493 */ diag::warn_bad_character_encoding, diag::warn_bad_string_encoding, -1,
  /* DiagArray494 */ diag::warn_static_assert_message_constexpr, -1,
  /* DiagArray495 */ diag::ext_pp_bad_paste_ms, -1,
  /* DiagArray496 */ diag::warn_unevaluated_string_prefix, -1,
  /* DiagArray497 */ diag::warn_invalid_utf8_in_comment, -1,
  /* DiagArray498 */ diag::warn_jump_out_of_seh_finally, -1,
  /* DiagArray499 */ diag::ext_keyword_as_ident, -1,
  /* DiagArray500 */ diag::warn_pp_macro_hides_keyword, -1,
  /* DiagArray501 */ diag::ext_param_promoted_not_compatible_with_prototype, -1,
  /* DiagArray502 */ diag::ext_token_used, -1,
  /* DiagArray503 */ diag::warn_parameter_size, diag::warn_return_value_size, -1,
  /* DiagArray505 */ diag::warn_fe_linking_module, -1,
  /* DiagArray506 */ diag::warn_impcast_literal_float_to_integer, diag::warn_impcast_literal_float_to_integer_out_of_range, -1,
  /* DiagArray507 */ diag::warn_float_compare_literal, diag::warn_float_overflow, diag::warn_float_underflow, -1,
  /* DiagArray508 */ diag::ext_template_arg_local_type, -1,
  /* DiagArray509 */ diag::warn_logical_not_on_lhs_of_check, -1,
  /* DiagArray510 */ diag::warn_logical_and_in_logical_or, -1,
  /* DiagArray511 */ diag::ext_c99_longlong, -1,
  /* DiagArray513 */ diag::ext_pp_macro_redef, -1,
  /* DiagArray514 */ diag::ext_main_used, diag::ext_noreturn_main, diag::ext_variadic_main, diag::warn_main_one_arg, diag::warn_main_redefined, diag::warn_main_returns_bool_literal, diag::warn_static_main, -1,
  /* DiagArray515 */ diag::ext_main_returns_nonint, -1,
  /* DiagArray516 */ diag::warn_has_warning_invalid_option, -1,
  /* DiagArray517 */ diag::ext_many_braces_around_init, -1,
  /* DiagArray518 */ diag::ext_mathematical_notation, -1,
  /* DiagArray519 */ diag::warn_max_tokens, diag::warn_max_tokens_total, -1,
  /* DiagArray520 */ diag::warn_max_unsigned_zero, -1,
  /* DiagArray521 */ diag::warn_suspicious_sizeof_memset, -1,
  /* DiagArray522 */ diag::warn_memsize_comparison, -1,
  /* DiagArray523 */ diag::warn_non_contravariant_param_types, diag::warn_non_covariant_ret_types, -1,
  /* DiagArray525 */ diag::ext_ms_abstract_keyword, -1,
  /* DiagArray526 */ diag::ext_anonymous_record_with_type, diag::ext_ms_anonymous_record, -1,
  /* DiagArray527 */ diag::ext_ms_cast_fn_obj, diag::ext_ms_impcast_fn_obj, -1,
  /* DiagArray528 */ diag::ext_charize_microsoft, -1,
  /* DiagArray529 */ diag::ext_comment_paste_microsoft, -1,
  /* DiagArray530 */ diag::ext_default_init_const, -1,
  /* DiagArray531 */ diag::ext_pp_operator_used_as_macro_name, -1,
  /* DiagArray532 */ diag::ext_param_default_argument_redefinition, -1,
  /* DiagArray533 */ diag::warn_attribute_section_drectve, -1,
  /* DiagArray534 */ diag::ext_ctrl_z_eof_microsoft, -1,
  /* DiagArray535 */ diag::ext_ms_forward_ref_enum, -1,
  /* DiagArray536 */ diag::ext_enumerator_too_large, -1,
  /* DiagArray537 */ diag::ext_ellipsis_exception_spec, diag::ext_incomplete_in_exception_spec, diag::ext_mismatched_exception_spec, diag::ext_mismatched_exception_spec_explicit_instantiation, diag::ext_override_exception_spec, -1,
  /* DiagArray538 */ diag::warn_microsoft_dependent_exists, -1,
  /* DiagArray539 */ diag::ext_ms_explicit_constructor_call, -1,
  /* DiagArray540 */ diag::warn_member_extra_qualification, -1,
  /* DiagArray541 */ diag::ext_ms_c_enum_fixed_underlying_type, -1,
  /* DiagArray542 */ diag::ext_flexible_array_empty_aggregate_ms, diag::ext_flexible_array_union_ms, -1,
  /* DiagArray543 */ diag::ext_goto_into_protected_scope, -1,
  /* DiagArray544 */ diag::ext_ms_ambiguous_direct_base, -1,
  /* DiagArray545 */ diag::ext_pp_include_search_ms, -1,
  /* DiagArray546 */ diag::ext_init_from_predefined, -1,
  /* DiagArray547 */ diag::ext_mutable_reference, -1,
  /* DiagArray548 */ diag::ext_pure_function_definition, -1,
  /* DiagArray549 */ diag::ext_static_non_static, -1,
  /* DiagArray550 */ diag::ext_ms_sealed_keyword, -1,
  /* DiagArray551 */ diag::ext_ms_static_assert, -1,
  /* DiagArray552 */ diag::ext_string_literal_from_predefined, -1,
  /* DiagArray553 */ diag::ext_explicit_instantiation_duplicate, diag::ext_found_in_dependent_base, diag::ext_found_later_in_class, diag::ext_ms_delayed_template_argument, diag::ext_ms_deref_template_argument, diag::ext_ms_template_spec_redecl_out_of_scope, diag::ext_ms_template_type_arg_missing_typename, diag::ext_static_out_of_line, diag::ext_undeclared_unqual_id_with_dependent_base, diag::ext_unqualified_base_class, -1,
  /* DiagArray554 */ diag::ext_template_param_shadow, -1,
  /* DiagArray555 */ diag::ext_union_member_of_reference_type, -1,
  /* DiagArray556 */ diag::ext_friend_tag_redecl_outside_namespace, -1,
  /* DiagArray557 */ diag::ext_ms_using_declaration_inaccessible, -1,
  /* DiagArray558 */ diag::ext_pseudo_dtor_on_void, -1,
  /* DiagArray559 */ diag::warn_profile_data_misexpect, -1,
  /* DiagArray560 */ diag::warn_misleading_indentation, -1,
  /* DiagArray561 */ diag::warn_mismatched_delete_new, -1,
  /* DiagArray562 */ diag::warn_conflicting_param_types, -1,
  /* DiagArray563 */ diag::warn_conflicting_ret_types, -1,
  /* DiagArray564 */ diag::warn_struct_class_previous_tag_mismatch, diag::warn_struct_class_tag_mismatch, -1,
  /* DiagArray565 */ diag::warn_missing_braces, -1,
  /* DiagArray566 */ diag::ext_constinit_missing, -1,
  /* DiagArray567 */ diag::ext_no_declarators, diag::ext_standalone_specifier, diag::ext_typedef_without_a_name, diag::warn_standalone_specifier, -1,
  /* DiagArray568 */ diag::warn_missing_designated_field_initializers, -1,
  /* DiagArray569 */ diag::ext_missing_exception_specification, -1,
  /* DiagArray570 */ diag::warn_missing_field_initializers, -1,
  /* DiagArray572 */ diag::warn_missing_include_dirs, -1,
  /* DiagArray573 */ diag::warn_missing_method_return_type, -1,
  /* DiagArray574 */ diag::warn_drv_missing_multilib, -1,
  /* DiagArray575 */ diag::warn_overriding_method_missing_noescape, -1,
  /* DiagArray576 */ diag::warn_suggest_noreturn_block, diag::warn_suggest_noreturn_function, -1,
  /* DiagArray577 */ diag::warn_cconv_knr, -1,
  /* DiagArray578 */ diag::warn_missing_prototype, -1,
  /* DiagArray579 */ diag::warn_missing_selector_name, -1,
  /* DiagArray580 */ diag::warn_missing_sysroot, -1,
  /* DiagArray581 */ diag::missing_template_arg_list_after_template_kw, -1,
  /* DiagArray582 */ diag::warn_missing_variable_declarations, -1,
  /* DiagArray583 */ diag::warn_omp_assume_attribute_string_unknown_suggested, -1,
  /* DiagArray584 */ diag::warn_hlsl_packoffset_mix, -1,
  /* DiagArray585 */ diag::remark_module_build, diag::remark_module_build_done, diag::remark_module_lock_failure, diag::remark_module_lock_timeout, -1,
  /* DiagArray586 */ diag::warn_module_conflict, diag::warn_module_system_bit_conflict, -1,
  /* DiagArray587 */ diag::warn_module_config_mismatch, -1,
  /* DiagArray588 */ diag::warn_duplicate_module_file_extension, -1,
  /* DiagArray589 */ diag::remark_module_import, -1,
  /* DiagArray590 */ diag::ext_module_import_in_extern_c, -1,
  /* DiagArray591 */ diag::remark_pp_include_directive_modular_translation, -1,
  /* DiagArray592 */ diag::remark_module_lock, -1,
  /* DiagArray593 */ diag::ext_equivalent_internal_linkage_decl_in_modules, -1,
  /* DiagArray594 */ diag::ext_module_import_not_at_top_level_noop, -1,
  /* DiagArray598 */ diag::warn_drv_msvc_not_found, -1,
  /* DiagArray599 */ diag::warn_drv_multi_gpu_arch, -1,
  /* DiagArray600 */ diag::warn_multichar_character_literal, -1,
  /* DiagArray601 */ diag::warn_vbase_moved_multiple_times, -1,
  /* DiagArray602 */ diag::warn_fp_nan_inf_when_disabled, -1,
  /* DiagArray604 */ diag::ext_anonymous_record_with_anonymous_type, -1,
  /* DiagArray606 */ diag::warn_operator_new_returns_null, -1,
  /* DiagArray607 */ diag::ext_no_newline_eof, diag::warn_no_newline_eof, -1,
  /* DiagArray608 */ diag::warn_dereference_of_noderef_type, diag::warn_dereference_of_noderef_type_no_decl, diag::warn_noderef_to_dereferenceable_pointer, -1,
  /* DiagArray610 */ diag::ext_non_c_like_anon_struct_in_typedef, -1,
  /* DiagArray612 */ diag::warn_non_literal_null_pointer, -1,
  /* DiagArray613 */ diag::warn_non_modular_include_in_framework_module, -1,
  /* DiagArray614 */ diag::warn_non_modular_include_in_module, -1,
  /* DiagArray615 */ diag::warn_cannot_pass_non_pod_arg_to_vararg, diag::warn_non_pod_vararg_with_format_string, diag::warn_second_parameter_to_va_arg_not_pod, diag::warn_second_parameter_to_va_arg_ownership_qualified, -1,
  /* DiagArray616 */ diag::warn_alignment_not_power_of_two, -1,
  /* DiagArray617 */ diag::warn_non_virtual_dtor, -1,
  /* DiagArray618 */ diag::warn_null_arg, diag::warn_null_ret, -1,
  /* DiagArray620 */ diag::pp_nonportable_path, -1,
  /* DiagArray621 */ diag::warn_apinotes_private_case, -1,
  /* DiagArray622 */ diag::warn_apinotes_private_case_system, -1,
  /* DiagArray623 */ diag::pp_nonportable_system_path, -1,
  /* DiagArray624 */ diag::warn_neon_vector_initializer_non_portable, -1,
  /* DiagArray625 */ diag::warn_cstruct_memaccess, -1,
  /* DiagArray626 */ diag::warn_nsconsumed_attribute_mismatch, -1,
  /* DiagArray627 */ diag::warn_nsreturns_retained_attribute_mismatch, -1,
  /* DiagArray628 */ diag::warn_null_in_arithmetic_operation, diag::warn_null_in_comparison_operation, -1,
  /* DiagArray629 */ diag::null_in_char_or_string, diag::null_in_file, -1,
  /* DiagArray630 */ diag::warn_impcast_null_pointer_to_integer, -1,
  /* DiagArray631 */ diag::warn_binding_null_to_reference, diag::warn_indirection_through_null, -1,
  /* DiagArray632 */ diag::warn_pointer_arith_null_ptr, -1,
  /* DiagArray633 */ diag::warn_pointer_sub_null_ptr, -1,
  /* DiagArray634 */ diag::warn_conflicting_nullability_attr_overriding_param_types, diag::warn_conflicting_nullability_attr_overriding_ret_types, diag::warn_mismatched_nullability_attr, diag::warn_null_resettable_setter, diag::warn_nullability_duplicate, -1,
  /* DiagArray635 */ diag::warn_nullability_missing, -1,
  /* DiagArray636 */ diag::warn_nullability_missing_array, -1,
  /* DiagArray637 */ diag::warn_nullability_declspec, -1,
  /* DiagArray638 */ diag::ext_nullability, -1,
  /* DiagArray639 */ diag::warn_nullability_inferred_on_nested_type, -1,
  /* DiagArray640 */ diag::warn_nullability_lost, -1,
  /* DiagArray641 */ diag::warn_offload_incompatible_redeclare, -1,
  /* DiagArray642 */ diag::warn_autosynthesis_property_ivar_match, -1,
  /* DiagArray643 */ diag::warn_impcast_constant_value_to_objc_bool, -1,
  /* DiagArray644 */ diag::warn_objc_boxing_invalid_utf8_string, -1,
  /* DiagArray645 */ diag::warn_objc_circular_container, -1,
  /* DiagArray647 */ diag::warn_objc_designated_init_missing_super_call, diag::warn_objc_designated_init_non_designated_init_call, diag::warn_objc_designated_init_non_super_designated_init_call, diag::warn_objc_implementation_missing_designated_init_override, diag::warn_objc_secondary_init_missing_init_call, diag::warn_objc_secondary_init_super_init_call, -1,
  /* DiagArray648 */ diag::warn_nsdictionary_duplicate_key, -1,
  /* DiagArray649 */ diag::warn_dup_category_def, -1,
  /* DiagArray650 */ diag::warn_superclass_variable_sized_type_not_at_end, diag::warn_variable_sized_ivar_visibility, -1,
  /* DiagArray651 */ diag::warn_forward_class_redefinition, -1,
  /* DiagArray652 */ diag::warn_ivars_in_interface, -1,
  /* DiagArray653 */ diag::warn_objc_literal_comparison, -1,
  /* DiagArray654 */ diag::warn_impcast_objective_c_literal_to_bool, diag::warn_objc_collection_literal_element, -1,
  /* DiagArray655 */ diag::warn_pp_objc_macro_redef_ignored, -1,
  /* DiagArray656 */ diag::warn_messaging_unqualified_id, -1,
  /* DiagArray657 */ diag::warn_class_method_not_found, diag::warn_class_method_not_found_with_typo, diag::warn_inst_method_not_found, diag::warn_instance_method_not_found_with_typo, diag::warn_instance_method_on_class_found, diag::warn_root_inst_method_not_found, -1,
  /* DiagArray658 */ diag::warn_missing_explicit_synthesis, -1,
  /* DiagArray659 */ diag::warn_objc_missing_super_call, -1,
  /* DiagArray660 */ diag::warn_multiple_method_decl, -1,
  /* DiagArray661 */ diag::warn_objc_property_retain_of_block, -1,
  /* DiagArray662 */ diag::warn_objc_pointer_cxx_catch_fragile, -1,
  /* DiagArray663 */ diag::warn_objc_property_assign_on_object, -1,
  /* DiagArray664 */ diag::warn_impl_required_for_class_property, diag::warn_impl_required_in_category_for_class_property, diag::warn_setter_getter_impl_required, diag::warn_setter_getter_impl_required_in_category, -1,
  /* DiagArray665 */ diag::warn_property_implicitly_mismatched, -1,
  /* DiagArray666 */ diag::warn_cocoa_naming_owned_rule, -1,
  /* DiagArray667 */ diag::warn_objc_property_default_assign_on_object, diag::warn_objc_property_no_assignment_attribute, -1,
  /* DiagArray668 */ diag::warn_autosynthesis_property_in_superclass, diag::warn_no_autosynthesis_property, diag::warn_no_autosynthesis_shared_ivar_property, -1,
  /* DiagArray669 */ diag::warn_category_method_impl_match, -1,
  /* DiagArray670 */ diag::warn_auto_synthesizing_protocol_property, -1,
  /* DiagArray671 */ diag::warn_objc_redundant_qualified_class_type, -1,
  /* DiagArray672 */ diag::warn_objc_readonly_property_has_setter, -1,
  /* DiagArray674 */ diag::warn_objc_redundant_literal_use, -1,
  /* DiagArray675 */ diag::warn_objc_root_class_missing, -1,
  /* DiagArray677 */ diag::warn_impcast_float_to_objc_signed_char_bool, -1,
  /* DiagArray678 */ diag::warn_impcast_int_to_objc_signed_char_bool, -1,
  /* DiagArray679 */ diag::warn_objc_string_literal_comparison, -1,
  /* DiagArray680 */ diag::warn_concatenated_nsarray_literal, -1,
  /* DiagArray681 */ diag::warn_objc_unsafe_perform_selector, -1,
  /* DiagArray682 */ diag::warn_odr_different_num_template_parameters, diag::warn_odr_different_template_parameter_kind, diag::warn_odr_field_type_inconsistent, diag::warn_odr_function_type_inconsistent, diag::warn_odr_ivar_type_inconsistent, diag::warn_odr_non_type_parameter_type_inconsistent, diag::warn_odr_objc_method_num_params_inconsistent, diag::warn_odr_objc_method_param_type_inconsistent, diag::warn_odr_objc_method_result_type_inconsistent, diag::warn_odr_objc_method_variadic_inconsistent, diag::warn_odr_objc_property_impl_kind_inconsistent, diag::warn_odr_objc_property_type_inconsistent, diag::warn_odr_objc_superclass_inconsistent, diag::warn_odr_objc_synthesize_ivar_inconsistent, diag::warn_odr_parameter_pack_non_pack, diag::warn_odr_tag_type_inconsistent, diag::warn_odr_variable_multiple_def, diag::warn_odr_variable_type_inconsistent, -1,
  /* DiagArray683 */ diag::warn_old_style_cast, -1,
  /* DiagArray686 */ diag::warn_acc_deprecated_alias_name, -1,
  /* DiagArray687 */ diag::warn_acc_if_self_conflict, -1,
  /* DiagArray688 */ diag::ext_opencl_ext_vector_type_rgba_selector, -1,
  /* DiagArray690 */ diag::ext_omp_attributes, -1,
  /* DiagArray691 */ diag::warn_omp_alignment_not_power_of_two, diag::warn_omp_allocate_thread_on_task_target_directive, diag::warn_omp_ctx_incompatible_property_for_selector, diag::warn_omp_ctx_incompatible_score_for_property, diag::warn_omp_ctx_incompatible_selector_for_set, diag::warn_omp_ctx_selector_without_properties, diag::warn_omp_declare_variant_ctx_mutiple_use, diag::warn_omp_declare_variant_ctx_not_a_property, diag::warn_omp_declare_variant_ctx_not_a_selector, diag::warn_omp_declare_variant_ctx_not_a_set, diag::warn_omp_declare_variant_expected, diag::warn_omp_declare_variant_string_literal_or_identifier, diag::warn_omp_linear_step_zero, diag::warn_omp_more_one_device_type_clause, diag::warn_omp_more_one_interop_type, diag::warn_omp_more_one_omp_all_memory, diag::warn_omp_unknown_assumption_clause_missing_id, diag::warn_omp_unknown_assumption_clause_without_args, diag::warn_omp_used_different_allocator, -1,
  /* DiagArray692 */ diag::warn_omp_invalid_attribute_for_ompx_attributes, -1,
  /* DiagArray693 */ diag::ext_omp_loop_not_canonical_init, diag::warn_omp_loop_64_bit_var, -1,
  /* DiagArray694 */ diag::warn_omp_non_trivial_type_mapped, -1,
  /* DiagArray695 */ diag::warn_drv_omp_offload_target_duplicate, diag::warn_omp_declare_target_after_first_use, diag::warn_omp_not_in_target_context, -1,
  /* DiagArray696 */ diag::warn_throw_not_valid_on_target, diag::warn_try_not_valid_on_target, -1,
  /* DiagArray697 */ diag::warn_drv_fine_grained_bitfield_accesses_ignored, diag::warn_drv_fjmc_for_elf_only, diag::warn_drv_jmc_requires_debuginfo, diag::warn_drv_loongarch_conflicting_implied_val, diag::warn_drv_moutline_atomics_unsupported_opt, diag::warn_drv_moutline_unsupported_opt, diag::warn_drv_needs_hvx, diag::warn_drv_ps_force_pic, diag::warn_drv_unsupported_diag_option_for_flang, diag::warn_drv_unsupported_longcalls, diag::warn_drv_unsupported_openmp_library, diag::warn_drv_unsupported_option_for_flang, diag::warn_drv_unsupported_option_for_offload_arch_req_feature, diag::warn_drv_unsupported_option_for_processor, diag::warn_drv_unsupported_option_for_target, diag::warn_drv_unsupported_pic_with_mabicalls, diag::warn_drv_unsupported_sdata, diag::warn_target_override_arm64ec, -1,
  /* DiagArray698 */ diag::ext_typecheck_ordered_comparison_of_function_pointers, diag::warn_typecheck_ordered_comparison_of_function_pointers, -1,
  /* DiagArray699 */ diag::ext_out_of_line_declaration, -1,
  /* DiagArray700 */ diag::ext_use_out_of_scope_declaration, -1,
  /* DiagArray701 */ diag::warn_overaligned_type, -1,
  /* DiagArray703 */ diag::ext_string_too_long, -1,
  /* DiagArray704 */ diag::warn_overloaded_shift_in_comparison, -1,
  /* DiagArray705 */ diag::warn_overloaded_virtual, -1,
  /* DiagArray707 */ diag::warn_fe_override_module, -1,
  /* DiagArray708 */ diag::warn_conflicting_overriding_param_modifiers, diag::warn_conflicting_overriding_param_types, diag::warn_conflicting_overriding_ret_type_modifiers, diag::warn_conflicting_overriding_ret_types, diag::warn_conflicting_overriding_variadic, diag::warn_non_contravariant_overriding_param_types, diag::warn_non_covariant_overriding_ret_types, -1,
  /* DiagArray709 */ diag::warn_drv_overriding_option, -1,
  /* DiagArray710 */ diag::warn_unnecessary_packed, -1,
  /* DiagArray711 */ diag::warn_unpacked_field, -1,
  /* DiagArray712 */ diag::warn_padded_struct_anon_field, diag::warn_padded_struct_field, diag::warn_padded_struct_size, -1,
  /* DiagArray713 */ diag::warn_padded_struct_anon_bitfield, diag::warn_padded_struct_bitfield, -1,
  /* DiagArray714 */ diag::warn_condition_is_assignment, diag::warn_consecutive_comparison, diag::warn_precedence_bitwise_rel, diag::warn_precedence_conditional, -1,
  /* DiagArray715 */ diag::warn_equality_with_extra_parens, -1,
  /* DiagArray717 */ diag::remark_fe_backend_optimization_remark, -1,
  /* DiagArray718 */ diag::remark_fe_backend_optimization_remark_analysis, diag::remark_fe_backend_optimization_remark_analysis_aliasing, diag::remark_fe_backend_optimization_remark_analysis_fpcommute, -1,
  /* DiagArray719 */ diag::warn_fe_backend_optimization_failure, -1,
  /* DiagArray720 */ diag::remark_fe_backend_optimization_remark_missed, -1,
  /* DiagArray721 */ diag::warn_module_uses_date_time, -1,
  /* DiagArray722 */ diag::warn_pch_vfsoverlay_mismatch, -1,
  /* DiagArray723 */ diag::ext_aggregate_init_not_constant, diag::ext_anonymous_record_with_type, diag::ext_anonymous_struct_union_qualified, diag::ext_array_size_conversion, diag::ext_auto_new_list_init, diag::ext_binary_literal, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_c_empty_initializer, diag::ext_c_missing_varargs_arg, diag::ext_c_nullptr, diag::ext_cast_fn_obj, diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_cxx26_raw_string_literal_character_set, diag::ext_cxx_missing_varargs_arg, diag::ext_designated_init, diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_duplicate_declspec, diag::ext_ellipsis_exception_spec, diag::ext_empty_fnmacro_arg, diag::ext_enum_value_not_int, diag::ext_enumerator_list_comma_c, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_instantiation_without_qualified_id, diag::ext_expr_not_ice, diag::ext_extern_template, diag::ext_extra_semi, diag::ext_forward_ref_enum, diag::ext_freestanding_complex, diag::ext_gnu_array_range, diag::ext_hex_constant_invalid, diag::ext_hex_literal_invalid, diag::ext_ident_list_in_param, diag::ext_in_class_initializer_non_constant, diag::ext_integer_complement_complex, diag::ext_internal_in_extern_inline_quiet, diag::ext_line_comment, diag::ext_main_used, diag::ext_mixed_decls_code, diag::ext_multi_line_line_comment, diag::ext_named_variadic_macro, diag::ext_no_newline_eof, diag::ext_nonstandard_escape, diag::ext_ns_enum_attribute, diag::ext_opencl_double_without_pragma, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_pp_bad_vaargs_use, diag::ext_pp_comma_expr, diag::ext_pp_ident_directive, diag::ext_pp_line_too_big, diag::ext_pp_opencl_variadic_macros, diag::ext_pp_warning_directive, diag::ext_return_has_void_expr, diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::ext_subscript_non_lvalue, diag::ext_thread_before, diag::ext_type_defined_in_offsetof, diag::ext_typecheck_addrof_void, diag::ext_typecheck_cast_nonscalar, diag::ext_typecheck_comparison_of_fptr_to_void, diag::ext_typecheck_cond_one_void, diag::ext_typecheck_convert_pointer_void_func, diag::ext_typecheck_ordered_comparison_of_pointer_and_zero, diag::ext_variadic_macro, diag::ext_vla, diag::ext_vla_cxx_in_gnu_mode, diag::ext_vla_cxx_in_gnu_mode_static_assert, diag::warn_defined_in_function_type_macro, diag::warn_ext_c23_attributes, diag::warn_ext_cxx11_attributes, diag::warn_format_conversion_argument_type_mismatch_pedantic, diag::warn_kern_is_method, diag::warn_strict_prototypes, -1,
  /* DiagArray724 */ diag::warn_opencl_unsupported_core_feature, diag::warn_pragma_extension_is_core, -1,
  /* DiagArray726 */ diag::warn_pessimizing_move_on_initialization, diag::warn_pessimizing_move_on_return, -1,
  /* DiagArray727 */ diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::warn_sub_ptr_zero_size_types, -1,
  /* DiagArray728 */ diag::warn_cast_nonnull_to_bool, diag::warn_impcast_pointer_to_bool, -1,
  /* DiagArray729 */ diag::warn_pointer_compare, -1,
  /* DiagArray730 */ diag::ext_typecheck_comparison_of_pointer_integer, -1,
  /* DiagArray731 */ diag::ext_typecheck_convert_incompatible_pointer_sign, -1,
  /* DiagArray732 */ diag::warn_pointer_to_enum_cast, -1,
  /* DiagArray733 */ diag::warn_pointer_to_int_cast, -1,
  /* DiagArray734 */ diag::ext_typecheck_cond_incompatible_pointers, -1,
  /* DiagArray735 */ diag::warn_poison_system_directories, -1,
  /* DiagArray736 */ diag::warn_potentially_direct_selector_expression, -1,
  /* DiagArray737 */ diag::warn_side_effects_typeid, -1,
  /* DiagArray738 */ diag::warn_pragma_attribute_unused, -1,
  /* DiagArray739 */ diag::pp_pragma_once_in_main_file, -1,
  /* DiagArray740 */ diag::warn_pragma_pack_modified_after_include, diag::warn_pragma_pack_no_pop_eof, -1,
  /* DiagArray741 */ diag::warn_pragma_pack_non_default_at_include, -1,
  /* DiagArray742 */ diag::pp_pragma_sysheader_in_main_file, -1,
  /* DiagArray743 */ diag::warn_no_support_for_eval_method_source_on_m32, diag::warn_redefine_extname_not_applied, -1,
  /* DiagArray744 */ diag::warn_cxx11_compat_constexpr_body_invalid_stmt, diag::warn_cxx11_compat_constexpr_body_multiple_return, diag::warn_cxx11_compat_constexpr_body_no_return, diag::warn_cxx11_compat_constexpr_local_var, diag::warn_cxx11_compat_constexpr_type_definition, diag::warn_cxx11_compat_decltype_auto_type_specifier, diag::warn_cxx11_compat_deduced_return_type, diag::warn_cxx11_compat_digit_separator, diag::warn_cxx11_compat_generic_lambda, diag::warn_cxx11_compat_init_capture, diag::warn_cxx11_compat_variable_template, -1,
  /* DiagArray746 */ diag::warn_cxx14_compat_class_template_argument_deduction, diag::warn_cxx14_compat_constexpr_if, diag::warn_cxx14_compat_constexpr_on_lambda, diag::warn_cxx14_compat_decomp_decl, diag::warn_cxx14_compat_fold_expression, diag::warn_cxx14_compat_init_statement, diag::warn_cxx14_compat_inline_variable, diag::warn_cxx14_compat_nested_namespace_definition, diag::warn_cxx14_compat_star_this_lambda_capture, diag::warn_cxx14_compat_static_assert_no_message, diag::warn_cxx14_compat_template_nontype_parm_auto_type, diag::warn_cxx14_compat_template_template_param_typename, diag::warn_cxx14_compat_u8_character_literal, diag::warn_cxx14_compat_using_attribute_ns, diag::warn_cxx17_compat_multi_using_declaration, diag::warn_cxx17_compat_using_declaration_pack, diag::warn_for_range_begin_end_types_differ, -1,
  /* DiagArray747 */ diag::warn_cxx14_compat_ns_enum_attribute, diag::warn_cxx17_hex_literal, -1,
  /* DiagArray748 */ diag::warn_cxx17_compat_adl_only_template_id, diag::warn_cxx17_compat_bitfield_member_init, diag::warn_cxx17_compat_capture_binding, diag::warn_cxx17_compat_constexpr_body_invalid_stmt, diag::warn_cxx17_compat_constexpr_ctor_missing_init, diag::warn_cxx17_compat_constexpr_function_try_block, diag::warn_cxx17_compat_constexpr_local_var_no_init, diag::warn_cxx17_compat_constexpr_union_ctor_no_init, diag::warn_cxx17_compat_constexpr_virtual, diag::warn_cxx17_compat_ctad_for_alias_templates, diag::warn_cxx17_compat_decomp_decl_spec, diag::warn_cxx17_compat_defaulted_comparison, diag::warn_cxx17_compat_defaulted_method_type_mismatch, diag::warn_cxx17_compat_equals_this_lambda_capture, diag::warn_cxx17_compat_explicit_bool, diag::warn_cxx17_compat_for_range_init_stmt, diag::warn_cxx17_compat_init_capture_pack, diag::warn_cxx17_compat_inline_nested_namespace_definition, diag::warn_cxx17_compat_lambda_def_ctor_assign, diag::warn_cxx17_compat_lambda_template_parameter_list, diag::warn_cxx17_compat_missing_varargs_arg, diag::warn_cxx17_compat_spaceship, diag::warn_cxx17_compat_template_nontype_parm_type, diag::warn_cxx17_compat_unicode_type, diag::warn_cxx17_compat_using_decl_class_member_enumerator, diag::warn_cxx17_compat_using_decl_non_member_enumerator, diag::warn_cxx17_compat_using_decl_scoped_enumerator, diag::warn_cxx17_compat_using_enum_declaration, -1,
  /* DiagArray749 */ diag::warn_cxx17_compat_designated_init, diag::warn_cxx17_compat_pointer_to_const_ref_member_on_rvalue, -1,
  /* DiagArray750 */ diag::ext_subscript_overload, diag::warn_cxx20_alias_in_init_statement, diag::warn_cxx20_compat_auto_expr, diag::warn_cxx20_compat_consteval_if, diag::warn_cxx20_compat_constexpr_body_invalid_stmt, diag::warn_cxx20_compat_constexpr_var, diag::warn_cxx20_compat_decl_attrs_on_lambda, diag::warn_cxx20_compat_label_end_of_compound_statement, diag::warn_cxx20_compat_operator_overload_static, diag::warn_cxx20_compat_size_t_suffix, diag::warn_cxx20_compat_static_lambda, diag::warn_cxx23_compat_pp_directive, diag::warn_cxx23_compat_warning_directive, diag::warn_cxx23_delimited_escape_sequence, -1,
  /* DiagArray752 */ diag::warn_cxx23_compat_decl_attrs_on_binding, diag::warn_cxx23_delete_with_message, diag::warn_cxx23_pack_indexing, diag::warn_cxx23_placeholder_var_definition, diag::warn_cxx26_compat_raw_string_literal_character_set, -1,
  /* DiagArray756 */ diag::warn_c11_compat_keyword, -1,
  /* DiagArray758 */ diag::warn_c17_compat_ellipsis_only_parameter, diag::warn_c17_compat_missing_varargs_arg, diag::warn_c17_compat_static_assert_no_message, diag::warn_c23_compat_binary_literal, diag::warn_c23_compat_bitint_suffix, diag::warn_c23_compat_digit_separator, diag::warn_c23_compat_empty_initializer, diag::warn_c23_compat_keyword, diag::warn_c23_compat_label_end_of_compound_statement, diag::warn_c23_compat_label_followed_by_declaration, diag::warn_c23_compat_literal_ucn_control_character, diag::warn_c23_compat_literal_ucn_escape_basic_scs, diag::warn_c23_compat_pp_directive, diag::warn_c23_compat_warning_directive, diag::warn_compat_pp_embed_directive, diag::warn_pre_c23_compat_attributes, -1,
  /* DiagArray762 */ diag::warn_c2y_compat_alignof_incomplete_array, diag::warn_c2y_compat_generic_with_type_arg, diag::warn_c2y_compat_increment_complex, -1,
  /* DiagArray764 */ diag::warn_omp51_compat_attributes, -1,
  /* DiagArray765 */ diag::ext_predef_outside_function, -1,
  /* DiagArray766 */ diag::warn_private_extern, -1,
  /* DiagArray767 */ diag::warn_use_of_private_header_outside_module, -1,
  /* DiagArray768 */ diag::warn_mmap_mismatched_private_module_name, diag::warn_mmap_mismatched_private_submodule, diag::warn_mmap_redundant_export_as, diag::warn_no_priv_submodule_use_toplevel, -1,
  /* DiagArray769 */ diag::warn_profile_data_missing, -1,
  /* DiagArray770 */ diag::warn_profile_data_out_of_date, -1,
  /* DiagArray771 */ diag::warn_profile_data_unprofiled, -1,
  /* DiagArray772 */ diag::warn_property_access_suggest, -1,
  /* DiagArray773 */ diag::warn_property_attr_mismatch, diag::warn_property_attribute, diag::warn_property_redecl_getter_mismatch, diag::warn_readonly_property, -1,
  /* DiagArray774 */ diag::warn_unimplemented_protocol_method, -1,
  /* DiagArray775 */ diag::warn_protocol_property_mismatch, -1,
  /* DiagArray776 */ diag::warn_avx_calling_convention, -1,
  /* DiagArray777 */ diag::warn_ptrauth_auth_null_pointer, diag::warn_ptrauth_sign_null_pointer, -1,
  /* DiagArray778 */ diag::err_func_returning_qualified_void, -1,
  /* DiagArray779 */ diag::warn_quoted_include_in_framework_header, -1,
  /* DiagArray781 */ diag::warn_for_range_ref_binds_ret_temp, -1,
  /* DiagArray782 */ diag::warn_for_range_const_ref_binds_temp_built_from_ref, diag::warn_for_range_copy, -1,
  /* DiagArray783 */ diag::warn_var_decl_not_read_only, -1,
  /* DiagArray784 */ diag::warn_auto_readonly_iboutlet_property, -1,
  /* DiagArray785 */ diag::warn_bad_receiver_type, -1,
  /* DiagArray786 */ diag::warn_receiver_forward_class, diag::warn_receiver_forward_instance, -1,
  /* DiagArray787 */ diag::ext_member_redeclared, -1,
  /* DiagArray788 */ diag::warn_consteval_if_always_true, -1,
  /* DiagArray790 */ diag::warn_redundant_move_on_return, -1,
  /* DiagArray791 */ diag::warn_redundant_parens_around_declarator, -1,
  /* DiagArray792 */ diag::ext_register_storage_class, -1,
  /* DiagArray793 */ diag::warn_reinterpret_different_from_static, -1,
  /* DiagArray794 */ diag::remark_fe_backend_plugin, -1,
  /* DiagArray796 */ diag::warn_initializer_out_of_order, diag::warn_some_initializers_out_of_order, -1,
  /* DiagArray797 */ diag::ext_designated_init_reordered, -1,
  /* DiagArray798 */ diag::warn_objc_requires_super_protocol, -1,
  /* DiagArray800 */ diag::warn_reserved_extern_symbol, -1,
  /* DiagArray801 */ diag::warn_pp_macro_is_reserved_id, -1,
  /* DiagArray802 */ diag::warn_reserved_module_name, -1,
  /* DiagArray803 */ diag::ext_ms_reserved_user_defined_literal, diag::ext_reserved_user_defined_literal, -1,
  /* DiagArray804 */ diag::warn_pragma_restrict_expansion_macro_use, -1,
  /* DiagArray805 */ diag::ext_retained_language_linkage, -1,
  /* DiagArray807 */ diag::ext_return_has_expr, diag::ext_return_missing_expr, diag::warn_return_missing_expr, -1,
  /* DiagArray808 */ diag::warn_ret_addr_label, diag::warn_ret_local_temp_addr_ref, diag::warn_ret_stack_addr_ref, -1,
  /* DiagArray810 */ diag::warn_falloff_nonvoid_coroutine, diag::warn_falloff_nonvoid_function, diag::warn_falloff_nonvoid_lambda, diag::warn_maybe_falloff_nonvoid_coroutine, diag::warn_maybe_falloff_nonvoid_function, diag::warn_maybe_falloff_nonvoid_lambda, -1,
  /* DiagArray811 */ diag::warn_return_value_udt, diag::warn_return_value_udt_incomplete, -1,
  /* DiagArray812 */ diag::ext_ovl_rewrite_equalequal_not_bool, -1,
  /* DiagArray813 */ diag::remark_cc1_round_trip_generated, -1,
  /* DiagArray814 */ diag::warn_no_dynamic_cast_with_rtti_disabled, diag::warn_no_typeid_with_rtti_disabled, -1,
  /* DiagArray815 */ diag::remark_sanitize_address_insert_extra_padding_accepted, diag::remark_sanitize_address_insert_extra_padding_rejected, -1,
  /* DiagArray816 */ diag::warn_drv_sarif_format_unstable, -1,
  /* DiagArray817 */ diag::remark_pp_search_path_usage, -1,
  /* DiagArray818 */ diag::warn_attribute_section_on_redeclaration, diag::warn_duplicate_codeseg_attribute, diag::warn_mismatched_section, -1,
  /* DiagArray819 */ diag::warn_unimplemented_selector, -1,
  /* DiagArray820 */ diag::warn_multiple_selectors, -1,
  /* DiagArray821 */ diag::warn_self_assignment_builtin, -1,
  /* DiagArray822 */ diag::warn_identity_field_assign, -1,
  /* DiagArray823 */ diag::warn_self_assignment_overloaded, -1,
  /* DiagArray824 */ diag::warn_self_move, -1,
  /* DiagArray825 */ diag::warn_semicolon_before_method_body, -1,
  /* DiagArray826 */ diag::warn_missing_sentinel, diag::warn_not_enough_argument, -1,
  /* DiagArray828 */ diag::warn_fe_serialized_diag_failure, diag::warn_fe_serialized_diag_failure_during_finalization, diag::warn_fe_serialized_diag_merge_failure, -1,
  /* DiagArray829 */ diag::warn_decl_shadow, -1,
  /* DiagArray831 */ diag::warn_shadow_field, -1,
  /* DiagArray832 */ diag::warn_ctor_parm_shadows_field, -1,
  /* DiagArray833 */ diag::warn_modifying_shadowing_decl, -1,
  /* DiagArray834 */ diag::warn_ivar_use_hidden, -1,
  /* DiagArray835 */ diag::warn_decl_shadow_uncaptured_local, -1,
  /* DiagArray836 */ diag::warn_shift_negative, -1,
  /* DiagArray837 */ diag::warn_shift_gt_typewidth, -1,
  /* DiagArray838 */ diag::warn_shift_lhs_negative, -1,
  /* DiagArray839 */ diag::warn_addition_in_bitshift, -1,
  /* DiagArray840 */ diag::warn_shift_result_gt_typewidth, -1,
  /* DiagArray841 */ diag::warn_shift_result_sets_sign_bit, -1,
  /* DiagArray842 */ diag::warn_impcast_integer_64_32, -1,
  /* DiagArray843 */ diag::warn_mixed_sign_comparison, -1,
  /* DiagArray844 */ diag::warn_impcast_integer_sign, diag::warn_impcast_integer_sign_conditional, diag::warn_impcast_nonnegative_result, -1,
  /* DiagArray846 */ diag::warn_no_underlying_type_specified_for_enum_bitfield, -1,
  /* DiagArray847 */ diag::ext_wchar_t_sign_spec, -1,
  /* DiagArray848 */ diag::warn_impcast_single_bit_bitield_precision_constant, -1,
  /* DiagArray849 */ diag::warn_sizeof_array_param, -1,
  /* DiagArray850 */ diag::warn_sizeof_array_decay, -1,
  /* DiagArray851 */ diag::warn_division_sizeof_array, -1,
  /* DiagArray852 */ diag::warn_division_sizeof_ptr, -1,
  /* DiagArray853 */ diag::warn_sizeof_pointer_expr_memaccess, diag::warn_sizeof_pointer_type_memaccess, -1,
  /* DiagArray854 */ diag::warn_slash_u_filename, -1,
  /* DiagArray855 */ diag::warn_slh_does_not_support_asm_goto, -1,
  /* DiagArray856 */ diag::remark_sloc_usage, -1,
  /* DiagArray857 */ diag::warn_sometimes_uninit_var, -1,
  /* DiagArray858 */ diag::warn_fe_source_mgr, -1,
  /* DiagArray859 */ diag::warn_acc_clause_unimplemented, diag::warn_acc_construct_unimplemented, diag::warn_pragma_acc_ignored, -1,
  /* DiagArray860 */ diag::warn_omp_declare_variant_after_emitted, diag::warn_omp_declare_variant_after_used, diag::warn_omp_declare_variant_marked_as_declare_variant, diag::warn_omp_declare_variant_score_not_constant, diag::warn_omp_nesting_simd, diag::warn_omp_unterminated_declare_target, diag::warn_pragma_omp_ignored, diag::warn_unknown_declare_variant_isa_trait, -1,
  /* DiagArray861 */ diag::warn_sampler_initializer_invalid_bits, -1,
  /* DiagArray863 */ diag::warn_stack_exhausted, -1,
  /* DiagArray864 */ diag::warn_stack_clash_protection_inline_asm, -1,
  /* DiagArray865 */ diag::ext_in_class_initializer_float_type_cxx11, -1,
  /* DiagArray866 */ diag::ext_internal_in_extern_inline, diag::ext_internal_in_extern_inline_quiet, -1,
  /* DiagArray867 */ diag::warn_static_inline_explicit_inst_ignored, -1,
  /* DiagArray868 */ diag::warn_static_local_in_extern_inline, -1,
  /* DiagArray869 */ diag::warn_static_self_reference_in_init, -1,
  /* DiagArray870 */ diag::warn_drv_libstdcxx_not_found, -1,
  /* DiagArray882 */ diag::warn_strict_potentially_direct_selector_expression, -1,
  /* DiagArray883 */ diag::ext_compat_template_param_shadow, -1,
  /* DiagArray884 */ diag::warn_strict_prototypes, -1,
  /* DiagArray885 */ diag::warn_strict_multiple_method_decl, -1,
  /* DiagArray886 */ diag::warn_stringcompare, -1,
  /* DiagArray887 */ diag::warn_concatenated_literal_array_init, -1,
  /* DiagArray888 */ diag::warn_impcast_string_literal_to_bool, -1,
  /* DiagArray889 */ diag::warn_string_plus_char, -1,
  /* DiagArray890 */ diag::warn_string_plus_int, -1,
  /* DiagArray891 */ diag::warn_strlcpycat_wrong_size, -1,
  /* DiagArray892 */ diag::warn_strncat_large_size, diag::warn_strncat_src_size, diag::warn_strncat_wrong_size, -1,
  /* DiagArray893 */ diag::warn_suggest_destructor_marked_not_override_overriding, -1,
  /* DiagArray894 */ diag::warn_suggest_function_marked_not_override_overriding, -1,
  /* DiagArray895 */ diag::ext_typecheck_base_super, -1,
  /* DiagArray896 */ diag::warn_suspicious_bzero_size, -1,
  /* DiagArray898 */ diag::warn_attr_swift_name_decl_kind, diag::warn_attr_swift_name_decl_missing_params, diag::warn_attr_swift_name_function, diag::warn_attr_swift_name_getter_parameters, diag::warn_attr_swift_name_invalid_identifier, diag::warn_attr_swift_name_missing_parameters, diag::warn_attr_swift_name_multiple_selfs, diag::warn_attr_swift_name_num_params, diag::warn_attr_swift_name_setter_parameters, diag::warn_attr_swift_name_subscript_getter_newValue, diag::warn_attr_swift_name_subscript_invalid_parameter, diag::warn_attr_swift_name_subscript_setter_multiple_newValues, diag::warn_attr_swift_name_subscript_setter_no_newValue, -1,
  /* DiagArray899 */ diag::warn_case_value_overflow, diag::warn_missing_case, diag::warn_not_in_enum, -1,
  /* DiagArray900 */ diag::warn_bool_switch_condition, -1,
  /* DiagArray901 */ diag::warn_switch_default, -1,
  /* DiagArray902 */ diag::warn_def_missing_case, -1,
  /* DiagArray903 */ diag::warn_sync_op_misaligned, -1,
  /* DiagArray904 */ diag::warn_sync_fetch_and_nand_semantics_change, -1,
  /* DiagArray906 */ diag::warn_target_clone_mixed_values, -1,
  /* DiagArray907 */ diag::warn_comparison_bitwise_always, diag::warn_comparison_bitwise_or, -1,
  /* DiagArray908 */ diag::warn_alignment_builtin_useless, diag::warn_comparison_always, -1,
  /* DiagArray909 */ diag::warn_integer_constants_in_conditional_always_true, diag::warn_left_shift_always, diag::warn_tautological_bool_compare, -1,
  /* DiagArray911 */ diag::warn_out_of_range_compare, -1,
  /* DiagArray912 */ diag::warn_tautological_negation_and_compare, diag::warn_tautological_negation_or_compare, -1,
  /* DiagArray913 */ diag::warn_tautological_compare_objc_bool, -1,
  /* DiagArray914 */ diag::warn_tautological_overlap_comparison, -1,
  /* DiagArray915 */ diag::warn_nonnull_expr_compare, diag::warn_null_pointer_compare, -1,
  /* DiagArray916 */ diag::warn_tautological_constant_compare, -1,
  /* DiagArray917 */ diag::warn_address_of_reference_null_compare, diag::warn_this_null_compare, -1,
  /* DiagArray918 */ diag::warn_unsigned_char_always_true_comparison, -1,
  /* DiagArray919 */ diag::warn_unsigned_enum_always_true_comparison, -1,
  /* DiagArray920 */ diag::warn_unsigned_always_true_comparison, -1,
  /* DiagArray921 */ diag::warn_tautological_compare_value_range, -1,
  /* DiagArray922 */ diag::warn_tcb_enforcement_violation, -1,
  /* DiagArray923 */ diag::ext_template_after_declarative_nns, -1,
  /* DiagArray924 */ diag::warn_tentative_incomplete_array, -1,
  /* DiagArray925 */ diag::ext_typecheck_decl_incomplete_type, -1,
  /* DiagArray927 */ diag::warn_acquired_before, diag::warn_acquired_before_after_cycle, diag::warn_cannot_resolve_lock, diag::warn_double_lock, diag::warn_expecting_lock_held_on_loop, diag::warn_expecting_locked, diag::warn_fun_excludes_mutex, diag::warn_fun_requires_lock, diag::warn_fun_requires_negative_cap, diag::warn_lock_exclusive_and_shared, diag::warn_lock_some_predecessors, diag::warn_no_unlock, diag::warn_unlock_but_no_lock, diag::warn_unlock_kind_mismatch, diag::warn_var_deref_requires_any_lock, diag::warn_var_deref_requires_lock, diag::warn_variable_requires_any_lock, diag::warn_variable_requires_lock, -1,
  /* DiagArray928 */ diag::warn_thread_attribute_argument_not_lockable, diag::warn_thread_attribute_decl_not_lockable, diag::warn_thread_attribute_decl_not_pointer, diag::warn_thread_attribute_ignored, diag::warn_thread_attribute_not_on_capability_member, diag::warn_thread_attribute_not_on_non_static_member, -1,
  /* DiagArray929 */ diag::warn_thread_safety_beta, -1,
  /* DiagArray930 */ diag::warn_acquire_requires_negative_cap, -1,
  /* DiagArray931 */ diag::warn_fun_requires_lock_precise, diag::warn_var_deref_requires_lock_precise, diag::warn_variable_requires_lock_precise, -1,
  /* DiagArray932 */ diag::warn_guarded_pass_by_reference, diag::warn_pt_guarded_pass_by_reference, -1,
  /* DiagArray933 */ diag::warn_guarded_return_by_reference, diag::warn_pt_guarded_return_by_reference, -1,
  /* DiagArray934 */ diag::warn_thread_safety_verbose, -1,
  /* DiagArray935 */ diag::trigraph_converted, diag::trigraph_ends_block_comment, diag::trigraph_ignored, diag::trigraph_ignored_block_comment, -1,
  /* DiagArray937 */ diag::warn_type_safety_null_pointer_required, diag::warn_type_safety_type_mismatch, diag::warn_type_tag_for_datatype_wrong_kind, -1,
  /* DiagArray938 */ diag::ext_redefinition_of_typedef, -1,
  /* DiagArray939 */ diag::ext_typename_missing, -1,
  /* DiagArray940 */ diag::warn_fe_unable_to_open_stats_file, -1,
  /* DiagArray941 */ diag::warn_unaligned_access, -1,
  /* DiagArray942 */ diag::warn_imp_cast_drops_unaligned, -1,
  /* DiagArray943 */ diag::warn_unavailable_fwdclass_message, -1,
  /* DiagArray944 */ diag::warn_undeclared_selector, diag::warn_undeclared_selector_with_typo, -1,
  /* DiagArray945 */ diag::warn_pp_undef_identifier, -1,
  /* DiagArray946 */ diag::warn_pp_undef_prefix, -1,
  /* DiagArray947 */ diag::warn_attribute_arm_za_builtin_no_za_state, -1,
  /* DiagArray948 */ diag::warn_attribute_arm_zt0_builtin_no_zt0_state, -1,
  /* DiagArray949 */ diag::warn_address_of_reference_bool_conversion, diag::warn_this_bool_conversion, -1,
  /* DiagArray950 */ diag::warn_func_template_missing, -1,
  /* DiagArray951 */ diag::warn_undefined_inline, -1,
  /* DiagArray952 */ diag::warn_undefined_internal, -1,
  /* DiagArray953 */ diag::ext_undefined_internal_type, -1,
  /* DiagArray954 */ diag::warn_pointer_indirection_from_incompatible_type, diag::warn_undefined_reinterpret_cast, -1,
  /* DiagArray955 */ diag::warn_var_template_missing, -1,
  /* DiagArray956 */ diag::warn_throw_underaligned_obj, -1,
  /* DiagArray957 */ diag::warn_side_effects_unevaluated_context, -1,
  /* DiagArray958 */ diag::warn_unguarded_availability, diag::warn_unguarded_availability_unavailable, -1,
  /* DiagArray959 */ diag::warn_unguarded_availability_new, diag::warn_unguarded_availability_unavailable_new, -1,
  /* DiagArray960 */ diag::warn_delimited_ucn_empty, diag::warn_delimited_ucn_incomplete, diag::warn_ucn_escape_incomplete, diag::warn_ucn_escape_no_digits, diag::warn_ucn_escape_surrogate, diag::warn_ucn_not_valid_in_c89, diag::warn_ucn_not_valid_in_c89_literal, -1,
  /* DiagArray961 */ diag::warn_utf8_symbol_homoglyph, -1,
  /* DiagArray962 */ diag::ext_unicode_whitespace, -1,
  /* DiagArray963 */ diag::warn_utf8_symbol_zero_width, -1,
  /* DiagArray964 */ diag::warn_base_class_is_uninit, diag::warn_field_is_uninit, diag::warn_reference_field_is_uninit, diag::warn_uninit_byref_blockvar_captured_by_block, diag::warn_uninit_self_reference_in_init, diag::warn_uninit_self_reference_in_reference_init, diag::warn_uninit_var, -1,
  /* DiagArray965 */ diag::warn_uninit_const_reference, -1,
  /* DiagArray966 */ diag::warn_drv_potentially_misspelled_joined_argument, diag::warn_drv_unknown_argument_clang_cl, diag::warn_drv_unknown_argument_clang_cl_with_suggestion, -1,
  /* DiagArray967 */ diag::warn_omp_assume_attribute_string_unknown, -1,
  /* DiagArray968 */ diag::warn_unknown_attribute_ignored, -1,
  /* DiagArray969 */ diag::warn_drv_new_cuda_version, diag::warn_drv_partially_supported_cuda_version, -1,
  /* DiagArray970 */ diag::warn_pp_invalid_directive, -1,
  /* DiagArray971 */ diag::ext_unknown_escape, -1,
  /* DiagArray972 */ diag::ext_on_off_switch_syntax, diag::ext_pragma_syntax_eod, diag::ext_stdc_pragma_ignored, diag::warn_pragma_diagnostic_cannot_pop, diag::warn_pragma_diagnostic_invalid, diag::warn_pragma_diagnostic_invalid_option, diag::warn_pragma_diagnostic_invalid_token, diag::warn_pragma_exec_charset_expected, diag::warn_pragma_exec_charset_push_invalid, diag::warn_pragma_exec_charset_spec_invalid, diag::warn_pragma_ignored, diag::warn_pragma_include_alias_expected, diag::warn_pragma_include_alias_expected_filename, diag::warn_pragma_include_alias_mismatch_angle, diag::warn_pragma_include_alias_mismatch_quote, diag::warn_pragma_warning_expected, diag::warn_pragma_warning_expected_number, diag::warn_pragma_warning_push_level, diag::warn_pragma_warning_spec_invalid, diag::warn_stdc_fenv_round_not_supported, -1,
  /* DiagArray973 */ diag::warn_unknown_sanitizer_ignored, -1,
  /* DiagArray974 */ diag::warn_pragma_diagnostic_unknown_warning, diag::warn_unknown_diag_option, diag::warn_unknown_warning_specifier, -1,
  /* DiagArray975 */ diag::ext_template_arg_unnamed_type, -1,
  /* DiagArray976 */ diag::warn_unneeded_internal_decl, diag::warn_unneeded_static_internal_decl, -1,
  /* DiagArray977 */ diag::warn_unneeded_member_function, -1,
  /* DiagArray978 */ diag::warn_unqualified_call_to_std_cast_function, -1,
  /* DiagArray979 */ diag::warn_unreachable, -1,
  /* DiagArray981 */ diag::warn_unreachable_break, -1,
  /* DiagArray982 */ diag::warn_unreachable_fallthrough_attr, -1,
  /* DiagArray983 */ diag::warn_unreachable_association, -1,
  /* DiagArray984 */ diag::warn_unreachable_loop_increment, -1,
  /* DiagArray985 */ diag::warn_unreachable_return, -1,
  /* DiagArray986 */ diag::warn_unsafe_buffer_operation, diag::warn_unsafe_buffer_variable, -1,
  /* DiagArray987 */ diag::warn_unsafe_buffer_usage_in_container, -1,
  /* DiagArray988 */ diag::warn_unsequenced_mod_mod, diag::warn_unsequenced_mod_use, -1,
  /* DiagArray989 */ diag::warn_drv_no_floating_point_registers, diag::warn_drv_unsupported_float_abi_by_lib, -1,
  /* DiagArray990 */ diag::warn_target_unsupported_abs2008, diag::warn_target_unsupported_abslegacy, -1,
  /* DiagArray991 */ diag::warn_at_available_unchecked_use, -1,
  /* DiagArray992 */ diag::warn_target_unsupported_compact_branches, -1,
  /* DiagArray993 */ diag::warn_attribute_dll_instantiated_base_class, -1,
  /* DiagArray994 */ diag::warn_fe_backend_unsupported_fp_exceptions, diag::warn_fe_backend_unsupported_fp_rounding, -1,
  /* DiagArray995 */ diag::warn_template_qualified_friend_ignored, diag::warn_template_qualified_friend_unsupported, -1,
  /* DiagArray996 */ diag::warn_drv_unsupported_gpopt, -1,
  /* DiagArray997 */ diag::warn_target_unsupported_nan2008, diag::warn_target_unsupported_nanlegacy, -1,
  /* DiagArray998 */ diag::warn_drv_dwarf_version_limited_by_target, diag::warn_drv_unsupported_debug_info_opt_for_target, -1,
  /* DiagArray999 */ diag::warn_attribute_protected_visibility, -1,
  /* DiagArray1000 */ diag::ext_partial_specs_not_deducible, -1,
  /* DiagArray1003 */ diag::warn_unused_but_set_parameter, -1,
  /* DiagArray1004 */ diag::warn_unused_but_set_variable, -1,
  /* DiagArray1005 */ diag::warn_drv_diagnostics_hotness_requires_pgo, diag::warn_drv_diagnostics_misexpect_requires_pgo, diag::warn_drv_empty_joined_argument, diag::warn_drv_fraw_string_literals_in_cxx11, diag::warn_drv_input_file_unused, diag::warn_drv_input_file_unused_by_cpp, diag::warn_drv_invalid_arch_name_with_suggestion, diag::warn_drv_large_data_threshold_invalid_code_model, diag::warn_drv_preprocessed_input_file_unused, diag::warn_drv_unused_argument, diag::warn_drv_unused_x, diag::warn_ignored_clang_option, diag::warn_ignoring_fdiscard_for_bitcode, diag::warn_ignoring_verify_debuginfo_preserve_export, -1,
  /* DiagArray1006 */ diag::warn_unused_comparison, -1,
  /* DiagArray1007 */ diag::warn_unused_const_variable, -1,
  /* DiagArray1008 */ diag::warn_unused_exception_param, -1,
  /* DiagArray1009 */ diag::warn_unused_function, -1,
  /* DiagArray1010 */ diag::warn_unused_property_expr, -1,
  /* DiagArray1011 */ diag::warn_unused_label, -1,
  /* DiagArray1012 */ diag::warn_unused_lambda_capture, -1,
  /* DiagArray1013 */ diag::warn_unused_local_typedef, -1,
  /* DiagArray1015 */ diag::pp_macro_not_used, -1,
  /* DiagArray1016 */ diag::warn_unused_member_function, -1,
  /* DiagArray1017 */ diag::warn_unused_parameter, -1,
  /* DiagArray1018 */ diag::warn_unused_private_field, -1,
  /* DiagArray1019 */ diag::warn_unused_property_backing_ivar, -1,
  /* DiagArray1020 */ diag::warn_unused_result, diag::warn_unused_result_msg, -1,
  /* DiagArray1021 */ diag::warn_unused_template, -1,
  /* DiagArray1022 */ diag::warn_unused_call, diag::warn_unused_comma_left_operand, diag::warn_unused_constructor, diag::warn_unused_constructor_msg, diag::warn_unused_container_subscript_expr, diag::warn_unused_expr, diag::warn_unused_voidptr, -1,
  /* DiagArray1023 */ diag::warn_unused_variable, -1,
  /* DiagArray1024 */ diag::warn_unused_volatile, -1,
  /* DiagArray1025 */ diag::warn_used_but_marked_unused, -1,
  /* DiagArray1026 */ diag::warn_user_literal_reserved, -1,
  /* DiagArray1027 */ diag::warn_diagnose_if_succeeded, -1,
  /* DiagArray1028 */ diag::warn_second_arg_of_va_start_not_last_named_param, diag::warn_second_parameter_to_va_arg_never_compatible, diag::warn_va_start_type_is_undefined, -1,
  /* DiagArray1029 */ diag::ext_named_variadic_macro, diag::ext_pp_bad_vaopt_use, diag::ext_variadic_macro, -1,
  /* DiagArray1030 */ diag::warn_typecheck_vector_element_sizes_not_equal, -1,
  /* DiagArray1031 */ diag::warn_incompatible_vectors, -1,
  /* DiagArray1033 */ diag::warn_empty_parens_are_function_decl, diag::warn_parens_disambiguated_as_function_declaration, diag::warn_parens_disambiguated_as_variable_declaration, -1,
  /* DiagArray1034 */ diag::warn_decl_in_param_list, diag::warn_redefinition_in_param_list, -1,
  /* DiagArray1035 */ diag::warn_vla_used, -1,
  /* DiagArray1036 */ diag::ext_vla_cxx, diag::ext_vla_cxx_in_gnu_mode, -1,
  /* DiagArray1037 */ diag::ext_vla, -1,
  /* DiagArray1038 */ diag::ext_vla_cxx_in_gnu_mode_static_assert, diag::ext_vla_cxx_static_assert, -1,
  /* DiagArray1039 */ diag::warn_void_pointer_to_enum_cast, -1,
  /* DiagArray1040 */ diag::warn_void_pointer_to_int_cast, -1,
  /* DiagArray1041 */ diag::ext_typecheck_indirection_through_void_pointer, -1,
  /* DiagArray1043 */ diag::warn_wasm_dynamic_exception_spec_ignored, -1,
  /* DiagArray1044 */ diag::warn_weak_template_vtable, -1,
  /* DiagArray1045 */ diag::warn_weak_vtable, -1,
  /* DiagArray1046 */ diag::ext_deprecated_string_literal_conversion, -1,
  /* DiagArray1048 */ diag::warn_xor_used_as_pow, diag::warn_xor_used_as_pow_base, diag::warn_xor_used_as_pow_base_extra, -1,
  /* DiagArray1049 */ diag::warn_zero_as_null_pointer_constant, -1,
  /* DiagArray1050 */ diag::ext_typecheck_zero_array_size, -1,
};

static const int16_t DiagSubGroups[] = {
  /* Empty */ -1,
  /* DiagSubGroup0 */ 322, -1,
  /* DiagSubGroup4 */ 19, 322, -1,
  /* DiagSubGroup12 */ 728, 886, 915, -1,
  /* DiagSubGroup19 */ 595, 714, 899, 900, 560, 711, 1036, -1,
  /* DiagSubGroup30 */ 230, -1,
  /* DiagSubGroup33 */ 40, 39, 36, -1,
  /* DiagSubGroup38 */ 35, -1,
  /* DiagSubGroup47 */ 48, -1,
  /* DiagSubGroup57 */ 425, 205, -1,
  /* DiagSubGroup61 */ 968, 415, -1,
  /* DiagSubGroup72 */ 109, 143, -1,
  /* DiagSubGroup73 */ 146, -1,
  /* DiagSubGroup76 */ 848, -1,
  /* DiagSubGroup83 */ 728, 949, -1,
  /* DiagSubGroup84 */ 83, -1,
  /* DiagSubGroup85 */ 80, -1,
  /* DiagSubGroup95 */ 98, -1,
  /* DiagSubGroup96 */ 102, -1,
  /* DiagSubGroup97 */ 106, -1,
  /* DiagSubGroup98 */ 106, 101, 99, 744, 746, 748, 750, 752, -1,
  /* DiagSubGroup100 */ 98, 745, 747, 749, 751, 753, -1,
  /* DiagSubGroup102 */ 103, 104, 105, -1,
  /* DiagSubGroup106 */ 107, -1,
  /* DiagSubGroup110 */ 746, 748, 750, 752, -1,
  /* DiagSubGroup111 */ 110, 747, 749, 751, 753, -1,
  /* DiagSubGroup112 */ 109, 108, -1,
  /* DiagSubGroup114 */ 259, 248, 115, 748, 750, 752, -1,
  /* DiagSubGroup116 */ 114, 749, 751, 753, -1,
  /* DiagSubGroup117 */ 113, -1,
  /* DiagSubGroup118 */ 112, -1,
  /* DiagSubGroup119 */ 114, -1,
  /* DiagSubGroup120 */ 115, -1,
  /* DiagSubGroup121 */ 117, -1,
  /* DiagSubGroup123 */ 750, 752, -1,
  /* DiagSubGroup124 */ 123, 751, 753, -1,
  /* DiagSubGroup126 */ 125, 122, -1,
  /* DiagSubGroup128 */ 752, -1,
  /* DiagSubGroup129 */ 130, -1,
  /* DiagSubGroup132 */ 123, -1,
  /* DiagSubGroup133 */ 124, -1,
  /* DiagSubGroup134 */ 126, -1,
  /* DiagSubGroup135 */ 129, -1,
  /* DiagSubGroup136 */ 223, -1,
  /* DiagSubGroup137 */ 131, -1,
  /* DiagSubGroup138 */ 748, -1,
  /* DiagSubGroup139 */ 749, -1,
  /* DiagSubGroup140 */ 746, -1,
  /* DiagSubGroup141 */ 747, -1,
  /* DiagSubGroup142 */ 744, -1,
  /* DiagSubGroup144 */ 745, -1,
  /* DiagSubGroup145 */ 148, 150, 744, 746, 748, 750, 752, -1,
  /* DiagSubGroup149 */ 145, 146, 147, 745, 747, 749, 751, 753, -1,
  /* DiagSubGroup154 */ 152, -1,
  /* DiagSubGroup155 */ 153, -1,
  /* DiagSubGroup158 */ 125, -1,
  /* DiagSubGroup159 */ 158, -1,
  /* DiagSubGroup161 */ 180, -1,
  /* DiagSubGroup164 */ 166, 165, -1,
  /* DiagSubGroup174 */ 615, -1,
  /* DiagSubGroup178 */ 177, -1,
  /* DiagSubGroup182 */ 183, 184, -1,
  /* DiagSubGroup188 */ 76, 643, -1,
  /* DiagSubGroup193 */ 83, 188, 306, 77, 334, 474, 435, 432, 506, 612, 630, 654, 844, 888, -1,
  /* DiagSubGroup194 */ 630, -1,
  /* DiagSubGroup196 */ 197, 240, 22, 195, -1,
  /* DiagSubGroup199 */ 2, -1,
  /* DiagSubGroup207 */ 208, 209, 211, 213, 212, 808, -1,
  /* DiagSubGroup225 */ 224, 222, -1,
  /* DiagSubGroup228 */ 230, 231, 232, 234, 235, 237, 241, 242, 243, 244, 245, 246, 233, 248, 249, 257, 259, 251, 256, 260, 261, 262, 263, 258, -1,
  /* DiagSubGroup235 */ 238, -1,
  /* DiagSubGroup236 */ 237, -1,
  /* DiagSubGroup237 */ 239, -1,
  /* DiagSubGroup254 */ 255, -1,
  /* DiagSubGroup263 */ 99, -1,
  /* DiagSubGroup269 */ 270, -1,
  /* DiagSubGroup274 */ 276, 275, -1,
  /* DiagSubGroup277 */ 278, -1,
  /* DiagSubGroup290 */ 242, -1,
  /* DiagSubGroup292 */ 617, -1,
  /* DiagSubGroup301 */ 326, -1,
  /* DiagSubGroup302 */ 304, 243, -1,
  /* DiagSubGroup303 */ 244, -1,
  /* DiagSubGroup306 */ 307, 308, 303, -1,
  /* DiagSubGroup307 */ 245, -1,
  /* DiagSubGroup308 */ 246, -1,
  /* DiagSubGroup322 */ 235, 570, 422, 466, 825, 573, 843, 1017, 1003, 632, 633, 298, 887, 367, 165, -1,
  /* DiagSubGroup324 */ 147, 103, -1,
  /* DiagSubGroup325 */ 298, -1,
  /* DiagSubGroup334 */ 336, 337, -1,
  /* DiagSubGroup339 */ 340, 354, 618, 348, 353, 342, 341, 345, 350, -1,
  /* DiagSubGroup345 */ 346, -1,
  /* DiagSubGroup350 */ 351, -1,
  /* DiagSubGroup355 */ 344, 348, 353, -1,
  /* DiagSubGroup356 */ 345, 350, -1,
  /* DiagSubGroup360 */ 359, -1,
  /* DiagSubGroup366 */ 906, -1,
  /* DiagSubGroup368 */ 108, 113, 122, 127, -1,
  /* DiagSubGroup373 */ 374, 375, 377, 378, 379, 380, 381, 382, 383, 385, 1037, 386, 387, 388, 389, 390, 392, 393, 394, 395, 396, 787, 397, 398, 400, 401, 402, 403, 1050, 404, 405, -1,
  /* DiagSubGroup398 */ 399, -1,
  /* DiagSubGroup421 */ 419, 420, -1,
  /* DiagSubGroup422 */ 423, -1,
  /* DiagSubGroup424 */ 433, 434, -1,
  /* DiagSubGroup429 */ 430, -1,
  /* DiagSubGroup432 */ 436, 677, -1,
  /* DiagSubGroup435 */ 842, 678, -1,
  /* DiagSubGroup436 */ 426, -1,
  /* DiagSubGroup451 */ 452, 446, -1,
  /* DiagSubGroup457 */ 459, 614, -1,
  /* DiagSubGroup463 */ 248, -1,
  /* DiagSubGroup475 */ 474, -1,
  /* DiagSubGroup477 */ 478, -1,
  /* DiagSubGroup480 */ 418, -1,
  /* DiagSubGroup508 */ 148, -1,
  /* DiagSubGroup511 */ 105, -1,
  /* DiagSubGroup512 */ 338, 780, -1,
  /* DiagSubGroup524 */ 528, 533, 545, 531, 541, 550, 525, 556, 537, 557, 547, 548, 555, 539, 536, 532, 553, 549, 535, 543, 542, 540, 527, 530, 558, 526, 529, 534, 551, 546, 552, 460, -1,
  /* DiagSubGroup553 */ 554, -1,
  /* DiagSubGroup570 */ 568, -1,
  /* DiagSubGroup595 */ 46, 85, 171, 177, 225, 339, 338, 358, 424, 464, 476, 564, 565, 596, 600, 782, 795, 810, 821, 824, 849, 850, 890, 908, 935, 964, 972, 1001, 1042, 659, 647, 650, 705, 766, 167, 320, 1027, -1,
  /* DiagSubGroup596 */ 726, 790, 809, 824, -1,
  /* DiagSubGroup597 */ 545, -1,
  /* DiagSubGroup603 */ 106, -1,
  /* DiagSubGroup609 */ 115, -1,
  /* DiagSubGroup611 */ 843, 193, 507, -1,
  /* DiagSubGroup614 */ 613, -1,
  /* DiagSubGroup632 */ 394, -1,
  /* DiagSubGroup635 */ 636, -1,
  /* DiagSubGroup646 */ 673, -1,
  /* DiagSubGroup653 */ 679, -1,
  /* DiagSubGroup673 */ 674, -1,
  /* DiagSubGroup676 */ 678, 677, 643, 913, -1,
  /* DiagSubGroup685 */ 859, -1,
  /* DiagSubGroup689 */ 860, 691, 693, 695, 694, 690, 692, 696, -1,
  /* DiagSubGroup695 */ 694, -1,
  /* DiagSubGroup706 */ 466, -1,
  /* DiagSubGroup710 */ 711, -1,
  /* DiagSubGroup712 */ 713, -1,
  /* DiagSubGroup714 */ 510, 509, 79, 81, 839, 704, 715, 210, -1,
  /* DiagSubGroup716 */ 958, -1,
  /* DiagSubGroup723 */ 75, 156, 151, 103, 105, 108, 109, 113, 122, 125, 333, 368, 375, 377, 379, 380, 381, 382, 385, 386, 387, 389, 390, 392, 393, 394, 396, 397, 398, 402, 404, 405, 500, 511, 528, 529, 531, 534, 536, 541, 542, 549, 703, 1050, 279, 502, 497, 226, 440, 295, 299, 638, 330, 62, 953, 805, 181, 604, -1,
  /* DiagSubGroup725 */ 257, 513, 91, 804, 329, -1,
  /* DiagSubGroup727 */ 396, -1,
  /* DiagSubGroup732 */ 1039, -1,
  /* DiagSubGroup733 */ 732, 1040, -1,
  /* DiagSubGroup740 */ 741, -1,
  /* DiagSubGroup743 */ 972, 421, 738, 740, -1,
  /* DiagSubGroup745 */ 744, 143, -1,
  /* DiagSubGroup747 */ 746, -1,
  /* DiagSubGroup749 */ 748, -1,
  /* DiagSubGroup751 */ 750, -1,
  /* DiagSubGroup753 */ 752, -1,
  /* DiagSubGroup754 */ 752, -1,
  /* DiagSubGroup755 */ 753, -1,
  /* DiagSubGroup757 */ 756, -1,
  /* DiagSubGroup759 */ 758, -1,
  /* DiagSubGroup760 */ 758, -1,
  /* DiagSubGroup761 */ 759, -1,
  /* DiagSubGroup763 */ 762, -1,
  /* DiagSubGroup780 */ 782, 781, -1,
  /* DiagSubGroup792 */ 259, -1,
  /* DiagSubGroup795 */ 796, 797, -1,
  /* DiagSubGroup799 */ 801, -1,
  /* DiagSubGroup800 */ 801, 802, 1026, -1,
  /* DiagSubGroup803 */ 101, -1,
  /* DiagSubGroup806 */ 808, -1,
  /* DiagSubGroup810 */ 811, 807, -1,
  /* DiagSubGroup819 */ 820, -1,
  /* DiagSubGroup821 */ 823, 822, -1,
  /* DiagSubGroup827 */ 988, -1,
  /* DiagSubGroup829 */ 833, 834, -1,
  /* DiagSubGroup830 */ 829, 832, 835, 831, -1,
  /* DiagSubGroup832 */ 833, -1,
  /* DiagSubGroup862 */ 861, -1,
  /* DiagSubGroup865 */ 400, -1,
  /* DiagSubGroup882 */ 736, -1,
  /* DiagSubGroup884 */ 252, -1,
  /* DiagSubGroup897 */ 853, 289, 625, 521, 896, -1,
  /* DiagSubGroup908 */ 909, 915, 914, 907, 917, 913, 912, -1,
  /* DiagSubGroup909 */ 911, -1,
  /* DiagSubGroup910 */ 936, 921, -1,
  /* DiagSubGroup926 */ 928, 927, 931, 932, -1,
  /* DiagSubGroup932 */ 933, -1,
  /* DiagSubGroup936 */ 916, 920, 918, 919, -1,
  /* DiagSubGroup957 */ 737, -1,
  /* DiagSubGroup958 */ 959, -1,
  /* DiagSubGroup964 */ 857, 869, 965, -1,
  /* DiagSubGroup975 */ 150, -1,
  /* DiagSubGroup979 */ 984, 982, 983, -1,
  /* DiagSubGroup980 */ 979, 981, 985, -1,
  /* DiagSubGroup986 */ 987, -1,
  /* DiagSubGroup1001 */ 1002, 1009, 1011, 1018, 1012, 1013, 1022, 1023, 1004, 1019, -1,
  /* DiagSubGroup1009 */ 976, -1,
  /* DiagSubGroup1014 */ 1013, -1,
  /* DiagSubGroup1016 */ 977, -1,
  /* DiagSubGroup1021 */ 976, -1,
  /* DiagSubGroup1022 */ 1006, 1020, 957, -1,
  /* DiagSubGroup1023 */ 1007, -1,
  /* DiagSubGroup1032 */ 1031, -1,
  /* DiagSubGroup1035 */ 1037, -1,
  /* DiagSubGroup1036 */ 1038, -1,
  /* DiagSubGroup1037 */ 1036, -1,
  /* DiagSubGroup1040 */ 1039, -1,
  /* DiagSubGroup1046 */ 263, -1,
  /* DiagSubGroup1047 */ 1046, -1,
};

static const char DiagGroupNames[] = {
    "\000\020#pragma-messages\t#warnings\020CFString-literal\003CL4\032Indep"
    "endentClass-attribute\022NSObject-attribute\026aarch64-sme-attributes\003"
    "abi\016absolute-value\024abstract-final-class\023abstract-vbase-init\007"
    "address\030address-of-packed-member\024address-of-temporary\020aggregat"
    "e-return\naix-compat\"alias-template-in-declaration-name\016align-misma"
    "tch\003all\006alloca\031alloca-with-align-alignof\027always-inline-coro"
    "utine\020ambiguous-delete\022ambiguous-ellipsis\017ambiguous-macro\031a"
    "mbiguous-member-template\033ambiguous-reversed-operator\034analyzer-inc"
    "ompatible-plugin\034android-unversioned-fallback\031anon-enum-enum-conv"
    "ersion\025anonymous-pack-parens\010apinotes\003arc%arc-bridge-casts-dis"
    "allowed-in-nonarc\036arc-maybe-repeated-use-of-weak\025arc-non-pod-mema"
    "ccess\031arc-performSelector-leaks\030arc-repeated-use-of-weak\021arc-r"
    "etain-cycles\032arc-unsafe-retained-assign\026argument-outside-range\034"
    "argument-undefined-behaviour\031arm-interrupt-vfp-clobber\014array-boun"
    "ds\037array-bounds-pointer-arithmetic\017array-parameter\003asm\022asm-"
    "operand-widths\013assign-enum\006assume\013at-protocol\034atimport-in-f"
    "ramework-header\015atomic-access\020atomic-alignment\027atomic-implicit"
    "-seq-cst\026atomic-memory-ordering\021atomic-properties*atomic-property"
    "-with-user-defined-accessor\035attribute-packed-for-bitfield\021attribu"
    "te-warning\nattributes\024auto-decl-extensions\033auto-disable-vptr-san"
    "itizer\013auto-import\022auto-storage-class\013auto-var-id\014availabil"
    "ity\030avr-rtlib-linking-quirks\016backend-plugin\030backslash-newline-"
    "escape\021bad-function-cast\016binary-literal\026bind-to-temporary-copy"
    "\024binding-in-condition\021bit-int-extension\034bitfield-constant-conv"
    "ersion\030bitfield-enum-conversion\016bitfield-width\037bitwise-conditi"
    "onal-parentheses\032bitwise-instead-of-logical\026bitwise-op-parenthese"
    "s\033block-capture-autoreleasing\017bool-conversion\020bool-conversions"
    "\016bool-operation.bounds-safety-counted-by-elt-type-unknown-size\022br"
    "aced-scalar-init\021branch-protection\013bridge-cast builtin-assume-ali"
    "gned-alignment\027builtin-macro-redefined\027builtin-memcpy-chk-size\027"
    "builtin-requires-header\nc++-compat\014c++0x-compat\020c++0x-extensions"
    "\017c++0x-narrowing\014c++11-compat(c++11-compat-deprecated-writable-st"
    "rings\025c++11-compat-pedantic*c++11-compat-reserved-user-defined-liter"
    "al\020c++11-extensions\020c++11-extra-semi\026c++11-inline-namespace\017"
    "c++11-long-long\017c++11-narrowing\037c++11-narrowing-const-reference\032"
    "c++14-attribute-extensions\024c++14-binary-literal\014c++14-compat\025c"
    "++14-compat-pedantic\020c++14-extensions\032c++17-attribute-extensions\014"
    "c++17-compat\025c++17-compat-mangling\025c++17-compat-pedantic\020c++17"
    "-extensions\020c++1y-extensions\014c++1z-compat\025c++1z-compat-manglin"
    "g\020c++1z-extensions\032c++20-attribute-extensions\014c++20-compat\025"
    "c++20-compat-pedantic\020c++20-designator\020c++20-extensions\032c++23-"
    "attribute-extensions\014c++23-compat\020c++23-extensions\027c++23-lambd"
    "a-attributes\020c++26-extensions\014c++2a-compat\025c++2a-compat-pedant"
    "ic\020c++2a-extensions\020c++2b-extensions\014c++2c-compat\020c++2c-ext"
    "ensions\036c++98-c++11-c++14-c++17-compat'c++98-c++11-c++14-c++17-compa"
    "t-pedantic\030c++98-c++11-c++14-compat!c++98-c++11-c++14-compat-pedanti"
    "c\022c++98-c++11-compat!c++98-c++11-compat-binary-literal\033c++98-c++1"
    "1-compat-pedantic\014c++98-compat#c++98-compat-bind-to-temporary-copy\027"
    "c++98-compat-extra-semi%c++98-compat-local-type-template-args\025c++98-"
    "compat-pedantic'c++98-compat-unnamed-type-template-args\016c11-extensio"
    "ns\nc23-compat\016c23-extensions\nc2x-compat\016c2x-extensions\016c2y-e"
    "xtensions\nc99-compat\016c99-designator\016c99-extensions#call-to-pure-"
    "virtual-from-ctor-dtor\025called-once-parameter\ncast-align\027cast-cal"
    "ling-convention\022cast-function-type\033cast-function-type-mismatch\031"
    "cast-function-type-strict\020cast-of-sel-type\tcast-qual\023cast-qual-u"
    "nrelated\nchar-align\017char-subscripts\014clang-cl-pch\020class-conver"
    "sion\015class-varargs\017cmse-union-leak\005comma\007comment\010comment"
    "s\036compare-distinct-pointer-types\022completion-handler\026complex-co"
    "mponent-init\024compound-token-split\035compound-token-split-by-macro\035"
    "compound-token-split-by-space\031conditional-type-mismatch\031condition"
    "al-uninitialized\015config-macros\023constant-conversion\022constant-ev"
    "aluated\030constant-logical-operand\023constexpr-not-const\010consumed\n"
    "conversion\017conversion-null$coro-non-aligned-allocation-function\tcor"
    "outine%coroutine-missing-unhandled-exception\026covered-switch-default\003"
    "cpp\030cstring-format-directive\026ctad-maybe-unsupported\021ctor-dtor-"
    "privacy\003ctu\013cuda-compat\030custom-atomic-properties\027cxx-attrib"
    "ute-extension\010dangling\023dangling-assignment\027dangling-assignment"
    "-gsl\015dangling-else\016dangling-field\014dangling-gsl\031dangling-ini"
    "tializer-list\023darwin-sdk-settings\tdate-time\023dealloc-in-category\035"
    "debug-compression-unavailable\033declaration-after-statement\032default"
    "ed-function-deleted!delayed-template-parsing-in-cxx20\026delegating-cto"
    "r-cycles delete-abstract-non-virtual-dtor\021delete-incomplete$delete-n"
    "on-abstract-non-virtual-dtor\027delete-non-virtual-dtor#delimited-escap"
    "e-sequence-extension\032deprecate-lax-vec-conv-all\ndeprecated\035depre"
    "cated-altivec-src-compat$deprecated-anon-enum-enum-conversion\030deprec"
    "ated-array-compare\025deprecated-attributes\023deprecated-builtins\032d"
    "eprecated-comma-subscript\017deprecated-copy\024deprecated-copy-dtor\031"
    "deprecated-copy-with-dtor'deprecated-copy-with-user-provided-copy'depre"
    "cated-copy-with-user-provided-dtor\024deprecated-coroutine\027deprecate"
    "d-declarations!deprecated-dynamic-exception-spec\027deprecated-enum-com"
    "pare#deprecated-enum-compare-conditional\037deprecated-enum-enum-conver"
    "sion deprecated-enum-float-conversion\032deprecated-implementations\031"
    "deprecated-increment-bool\033deprecated-literal-operator\031deprecated-"
    "module-dot-map,deprecated-no-relaxed-template-template-args\030deprecat"
    "ed-non-prototype\031deprecated-objc-isa-usage%deprecated-objc-pointer-i"
    "ntrospection5deprecated-objc-pointer-introspection-performSelector\020d"
    "eprecated-ofast\021deprecated-pragma)deprecated-redundant-constexpr-sta"
    "tic-def\023deprecated-register\027deprecated-this-capture\017deprecated"
    "-type\023deprecated-volatile\033deprecated-writable-strings\022direct-i"
    "var-access\030disabled-macro-expansion\025disabled-optimization\014disc"
    "ard-qual\034distributed-object-modifiers\013div-by-zero\020division-by-"
    "zero\036dll-attribute-on-redeclaration%dllexport-explicit-instantiation"
    "-decl\032dllimport-static-field-def\015documentation\035documentation-d"
    "eprecated-sync\022documentation-html\026documentation-pedantic\035docum"
    "entation-unknown-command\036dollar-in-identifier-extension\020double-pr"
    "omotion\tdtor-name\014dtor-typedef\030duplicate-decl-specifier\016dupli"
    "cate-enum\024duplicate-method-arg\026duplicate-method-match\022duplicat"
    "e-protocol\017dxil-validation\027dynamic-class-memaccess\026dynamic-exc"
    "eption-spec\034eager-load-cxx-named-modules\006effc++\024elaborated-enu"
    "m-base\025elaborated-enum-class\022embedded-directive\nempty-body\023em"
    "pty-decomposition\017empty-init-stmt\026empty-translation-unit\013encod"
    "e-type\014endif-labels\014enum-compare\030enum-compare-conditional\023e"
    "num-compare-switch\031enum-constexpr-conversion\017enum-conversion\024e"
    "num-enum-conversion\025enum-float-conversion\016enum-too-large\nexcepti"
    "ons\023excess-initializers\021excessive-regsave\025exit-time-destructor"
    "s\024expansion-to-defined\031experimental-header-units\030explicit-init"
    "ialize-call\027explicit-ownership-type%explicit-specialization-storage-"
    "class\016export-unnamed\017extern-c-compat\022extern-initializer\005ext"
    "ra\023extra-qualification\nextra-semi\017extra-semi-stmt\014extra-token"
    "s\021extractapi-misuse\032final-dtor-non-final-class\013final-macro\024"
    "fixed-enum-extension\024fixed-point-overflow\tflag-enum\031flexible-arr"
    "ay-extensions\020float-conversion\013float-equal\031float-overflow-conv"
    "ersion\025float-zero-conversion\021for-loop-analysis\006format\021forma"
    "t-extra-args\030format-insufficient-args\030format-invalid-specifier\016"
    "format-non-iso\021format-nonliteral\017format-overflow\033format-overfl"
    "ow-non-kprintf\017format-pedantic\017format-security\021format-signedne"
    "ss\021format-truncation\035format-truncation-non-kprintf\025format-type"
    "-confusion\nformat-y2k\022format-zero-length\010format=2\016fortify-sou"
    "rce\023four-char-constants\015frame-address\021frame-larger-than\022fra"
    "me-larger-than=%framework-include-private-from-public\023free-nonheap-o"
    "bject\013friend-enum\036function-def-in-objc-container\020function-effe"
    "cts\025function-multiversion\014fuse-ld-path\033future-attribute-extens"
    "ions\015future-compat\ngcc-compat\023global-constructors\013global-isel"
    "\003gnu\026gnu-alignof-expression\024gnu-anonymous-struct\033gnu-array-"
    "member-paren-init\015gnu-auto-type\022gnu-binary-literal\016gnu-case-ra"
    "nge\023gnu-complex-integer gnu-compound-literal-initializer\037gnu-cond"
    "itional-omitted-operand\016gnu-designator\025gnu-empty-initializer\020g"
    "nu-empty-struct\036gnu-flexible-array-initializer\037gnu-flexible-array"
    "-union-member\024gnu-folding-constant\026gnu-imaginary-constant\020gnu-"
    "include-next\035gnu-inline-cpp-without-extern\022gnu-label-as-value\017"
    "gnu-line-marker\033gnu-null-pointer-arithmetic\027gnu-offsetof-extensio"
    "ns\021gnu-pointer-arith\023gnu-redeclared-enum\030gnu-statement-express"
    "ion-gnu-statement-expression-from-macro-expansion\025gnu-static-float-i"
    "nit$gnu-string-literal-operator-template\016gnu-union-cast\"gnu-variabl"
    "e-sized-type-not-at-end\027gnu-zero-line-directive!gnu-zero-variadic-ma"
    "cro-arguments\024gpu-maybe-wrong-side\014header-guard\016header-hygiene"
    "\023higher-precision-fp\031hip-omp-target-directives\010hip-only\021hls"
    "l-availability\017hlsl-extensions\025idiomatic-parentheses\022ignored-a"
    "ttributes)ignored-availability-without-sdk-settings\013ignored-gch\035i"
    "gnored-optimization-argument\030ignored-pragma-intrinsic\027ignored-pra"
    "gma-optimize\017ignored-pragmas\022ignored-qualifiers\034ignored-refere"
    "nce-qualifiers\010implicit\032implicit-atomic-properties#implicit-const"
    "-int-float-conversion*implicit-conversion-floating-point-to-bool implic"
    "it-exception-spec-mismatch\024implicit-fallthrough!implicit-fallthrough"
    "-per-function\037implicit-fixed-point-conversion\031implicit-float-conv"
    "ersion\035implicit-function-declaration\014implicit-int\027implicit-int"
    "-conversion\035implicit-int-float-conversion\024implicit-retain-self\033"
    "implicitly-unsigned-literal\006import&import-preprocessor-directive-ped"
    "antic\021inaccessible-base include-angled-in-module-purview\032include-"
    "next-absolute-path\033include-next-outside-header\033incompatible-excep"
    "tion-spec#incompatible-function-pointer-types*incompatible-function-poi"
    "nter-types-strict\"incompatible-library-redeclaration\036incompatible-m"
    "s-pragma-section\026incompatible-ms-struct\032incompatible-pointer-type"
    "s.incompatible-pointer-types-discards-qualifiers\032incompatible-proper"
    "ty-type\024incompatible-sysroot'incomplete-framework-module-declaration"
    "\031incomplete-implementation\021incomplete-module\035incomplete-setjmp"
    "-declaration\023incomplete-umbrella\026inconsistent-dllimport(inconsist"
    "ent-missing-destructor-override\035inconsistent-missing-override\016inc"
    "rement-bool\022infinite-recursion\tinit-self\025initializer-overrides\023"
    "injected-class-name\006inline\ninline-asm#inline-namespace-reopened-non"
    "inline\021inline-new-delete\024installapi-violation\"instantiation-afte"
    "r-specialization\016int-conversion\017int-conversions\023int-in-bool-co"
    "ntext\023int-to-pointer-cast\030int-to-void-pointer-cast\020integer-ove"
    "rflow\035invalid-command-line-argument\021invalid-constexpr\033invalid-"
    "feature-combination\020invalid-iboutlet&invalid-initializer-from-system"
    "-header\035invalid-ios-deployment-target\030invalid-no-builtin-names\020"
    "invalid-noreturn\020invalid-offsetof invalid-or-nonexistent-directory\036"
    "invalid-partial-specialization\013invalid-pch\020invalid-pp-token\027in"
    "valid-source-encoding\035invalid-static-assert-message\023invalid-token"
    "-paste\032invalid-unevaluated-string\014invalid-utf8\020jump-seh-finall"
    "y\016keyword-compat\015keyword-macro\026knr-promoted-parameter\030langu"
    "age-extension-token\023large-by-value-copy\006liblto\017linker-warnings"
    "\022literal-conversion\015literal-range\030local-type-template-args\027"
    "logical-not-parentheses\026logical-op-parentheses\tlong-long\015loop-an"
    "alysis\017macro-redefined\004main\020main-return-type\027malformed-warn"
    "ing-check\036many-braces-around-scalar-init*mathematical-notation-ident"
    "ifier-extension\nmax-tokens\021max-unsigned-zero\026memset-transposed-a"
    "rgs\022memsize-comparison\021method-signatures\tmicrosoft\022microsoft-"
    "abstract\022microsoft-anon-tag\016microsoft-cast\021microsoft-charize\027"
    "microsoft-comment-paste\024microsoft-const-init\023microsoft-cpp-macro\""
    "microsoft-default-arg-redefinition\031microsoft-drectve-section\025micr"
    "osoft-end-of-file microsoft-enum-forward-reference\024microsoft-enum-va"
    "lue\030microsoft-exception-spec\020microsoft-exists#microsoft-explicit-"
    "constructor-call\035microsoft-extra-qualification\024microsoft-fixed-en"
    "um\030microsoft-flexible-array\016microsoft-goto\033microsoft-inaccessi"
    "ble-base\021microsoft-include\036microsoft-init-from-predefined\033micr"
    "osoft-mutable-reference\031microsoft-pure-definition\032microsoft-redec"
    "lare-static\020microsoft-sealed\027microsoft-static-assert(microsoft-st"
    "ring-literal-from-predefined\022microsoft-template\031microsoft-templat"
    "e-shadow microsoft-union-member-reference\034microsoft-unqualified-frie"
    "nd\024microsoft-using-decl\032microsoft-void-pseudo-dtor\tmisexpect\026"
    "misleading-indentation\025mismatched-new-delete\032mismatched-parameter"
    "-types\027mismatched-return-types\017mismatched-tags\016missing-braces\021"
    "missing-constinit\024missing-declarations%missing-designated-field-init"
    "ializers\026missing-exception-spec\032missing-field-initializers\030mis"
    "sing-format-attribute\024missing-include-dirs\032missing-method-return-"
    "type\020missing-multilib\020missing-noescape\020missing-noreturn\030mis"
    "sing-prototype-for-cc\022missing-prototypes\025missing-selector-name\017"
    "missing-sysroot+missing-template-arg-list-after-template-kw\035missing-"
    "variable-declarations\025misspelled-assumption\016mix-packoffset\014mod"
    "ule-build\017module-conflict\033module-file-config-mismatch\025module-f"
    "ile-extension\015module-import\031module-import-in-extern-c\032module-i"
    "nclude-translation\013module-lock\"modules-ambiguous-internal-linkage\037"
    "modules-import-nested-redundant\004most\004move\014msvc-include\016msvc"
    "-not-found\tmulti-gpu\tmultichar\023multiple-move-vbase\025nan-infinity"
    "-disabled\tnarrowing\021nested-anon-types\016nested-externs\020new-retu"
    "rns-null\013newline-eof\007noderef\015noexcept-type\031non-c-typedef-fo"
    "r-linkage\007non-gcc\033non-literal-null-conversion'non-modular-include"
    "-in-framework-module\035non-modular-include-in-module\017non-pod-vararg"
    "s\032non-power-of-two-alignment\020non-virtual-dtor\007nonnull\025nonpo"
    "rtable-cfstrings\030nonportable-include-path!nonportable-private-apinot"
    "es-path(nonportable-private-system-apinotes-path\037nonportable-system-"
    "include-path!nonportable-vector-initialization\024nontrivial-memaccess\023"
    "nsconsumed-mismatch\022nsreturns-mismatch\017null-arithmetic\016null-ch"
    "aracter\017null-conversion\020null-dereference\027null-pointer-arithmet"
    "ic\030null-pointer-subtraction\013nullability\030nullability-completene"
    "ss\"nullability-completeness-on-arrays\024nullability-declspec\025nulla"
    "bility-extension#nullability-inferred-on-nested-type\036nullable-to-non"
    "null-conversion\013nvcc-compat+objc-autosynthesis-property-ivar-name-ma"
    "tch\035objc-bool-constant-conversion\013objc-boxing\027objc-circular-co"
    "ntainer\016objc-cocoa-api\034objc-designated-initializers\036objc-dicti"
    "onary-duplicate-keys\"objc-duplicate-category-definition\023objc-flexib"
    "le-array\037objc-forward-class-redefinition\024objc-interface-ivars\024"
    "objc-literal-compare\027objc-literal-conversion\027objc-macro-redefinit"
    "ion\021objc-messaging-id\022objc-method-access\037objc-missing-property"
    "-synthesis\030objc-missing-super-calls\032objc-multiple-method-names\"o"
    "bjc-noncopy-retain-block-property\032objc-nonunified-exceptions#objc-pr"
    "operty-assign-on-object-type\034objc-property-implementation\037objc-pr"
    "operty-implicit-mismatch*objc-property-matches-cocoa-ownership-rule\032"
    "objc-property-no-attribute\027objc-property-synthesis#objc-protocol-met"
    "hod-implementation objc-protocol-property-synthesis\030objc-protocol-qu"
    "alifiers\"objc-readonly-with-setter-property\026objc-redundant-api-use\032"
    "objc-redundant-literal-use\017objc-root-class\025objc-signed-char-bool/"
    "objc-signed-char-bool-implicit-float-conversion-objc-signed-char-bool-i"
    "mplicit-int-conversion\023objc-string-compare\031objc-string-concatenat"
    "ion\034objc-unsafe-perform-selector\003odr\016old-style-cast\024old-sty"
    "le-definition\007openacc\037openacc-deprecated-clause-alias\"openacc-se"
    "lf-if-potential-conflict\027opencl-unsupported-rgba\006openmp\024openmp"
    "-51-extensions\016openmp-clauses\021openmp-extensions\020openmp-loop-fo"
    "rm\016openmp-mapping\015openmp-target\027openmp-target-exception\016opt"
    "ion-ignored!ordered-compare-function-pointers\027out-of-line-declaratio"
    "n\025out-of-scope-function\014over-aligned\010overflow\022overlength-st"
    "rings\037overloaded-shift-op-parentheses\022overloaded-virtual\015overr"
    "ide-init\017override-module\032overriding-method-mismatch\021overriding"
    "-option\006packed\016packed-non-pod\006padded\017padded-bitfield\013par"
    "entheses\024parentheses-equality\024partial-availability\004pass\015pas"
    "s-analysis\013pass-failed\013pass-missed\015pch-date-time\014pch-vfs-di"
    "ff\010pedantic\026pedantic-core-features\017pedantic-macros\020pessimiz"
    "ing-move\015pointer-arith\027pointer-bool-conversion\017pointer-compare"
    "\027pointer-integer-compare\014pointer-sign\024pointer-to-enum-cast\023"
    "pointer-to-int-cast\025pointer-type-mismatch\031poison-system-directori"
    "es\033potentially-direct-selector potentially-evaluated-expression\026p"
    "ragma-clang-attribute\032pragma-once-outside-header\013pragma-pack\036p"
    "ragma-pack-suspicious-include#pragma-system-header-outside-header\007pr"
    "agmas\020pre-c++14-compat\031pre-c++14-compat-pedantic\020pre-c++17-com"
    "pat\031pre-c++17-compat-pedantic\020pre-c++20-compat\031pre-c++20-compa"
    "t-pedantic\020pre-c++23-compat\031pre-c++23-compat-pedantic\020pre-c++2"
    "6-compat\031pre-c++26-compat-pedantic\020pre-c++2c-compat\031pre-c++2c-"
    "compat-pedantic\016pre-c11-compat\027pre-c11-compat-pedantic\016pre-c23"
    "-compat\027pre-c23-compat-pedantic\016pre-c2x-compat\027pre-c2x-compat-"
    "pedantic\016pre-c2y-compat\027pre-c2y-compat-pedantic\024pre-openmp-51-"
    "compat&predefined-identifier-outside-function\016private-extern\016priv"
    "ate-header\016private-module\025profile-instr-missing\031profile-instr-"
    "out-of-date\030profile-instr-unprofiled\032property-access-dot-syntax\033"
    "property-attribute-mismatch\010protocol%protocol-property-synthesis-amb"
    "iguity\005psabi\025ptrauth-null-pointers\032qualified-void-return-type\""
    "quoted-include-in-framework-header\023range-loop-analysis\031range-loop"
    "-bind-reference\024range-loop-construct\017read-only-types\032readonly-"
    "iboutlet-property\015receiver-expr\026receiver-forward-class\027redecla"
    "red-class-member\026redundant-consteval-if\017redundant-decls\016redund"
    "ant-move\020redundant-parens\010register\026reinterpret-base-class\025r"
    "emark-backend-plugin\007reorder\014reorder-ctor\021reorder-init-list\030"
    "requires-super-attribute\021reserved-id-macro\023reserved-identifier\031"
    "reserved-macro-identifier\032reserved-module-identifier\035reserved-use"
    "r-defined-literal\022restrict-expansion\031retained-language-linkage\021"
    "return-local-addr\017return-mismatch\024return-stack-address\017return-"
    "std-move\013return-type\025return-type-c-linkage\020rewrite-not-bool\023"
    "round-trip-cc1-args\004rtti\020sanitize-address\025sarif-format-unstabl"
    "e\021search-path-usage\007section\010selector\026selector-type-mismatch"
    "\013self-assign\021self-assign-field\026self-assign-overloaded\tself-mo"
    "ve\034semicolon-before-method-body\010sentinel\016sequence-point\026ser"
    "ialized-diagnostics\006shadow\nshadow-all\014shadow-field\033shadow-fie"
    "ld-in-constructor$shadow-field-in-constructor-modified\013shadow-ivar\027"
    "shadow-uncaptured-local\024shift-count-negative\024shift-count-overflow"
    "\024shift-negative-value\024shift-op-parentheses\016shift-overflow\023s"
    "hift-sign-overflow\020shorten-64-to-32\014sign-compare\017sign-conversi"
    "on\nsign-promo\024signed-enum-bitfield\025signed-unsigned-wchar'single-"
    "bit-bitfield-constant-conversion\025sizeof-array-argument\022sizeof-arr"
    "ay-decay\020sizeof-array-div\022sizeof-pointer-div\030sizeof-pointer-me"
    "maccess\020slash-u-filename\014slh-asm-goto\nsloc-usage\027sometimes-un"
    "initialized\nsource-mgr\023source-uses-openacc\022source-uses-openmp\013"
    "spir-compat\014spirv-compat\017stack-exhausted\017stack-protector\021st"
    "atic-float-init\020static-in-inline$static-inline-explicit-instantiatio"
    "n\026static-local-in-inline\020static-self-init\023stdlibcxx-not-found\017"
    "strict-aliasing\021strict-aliasing=0\021strict-aliasing=1\021strict-ali"
    "asing=2\017strict-overflow\021strict-overflow=0\021strict-overflow=1\021"
    "strict-overflow=2\021strict-overflow=3\021strict-overflow=4\021strict-o"
    "verflow=5\"strict-potentially-direct-selector\036strict-primary-templat"
    "e-shadow\021strict-prototypes\025strict-selector-match\016string-compar"
    "e\024string-concatenation\021string-conversion\020string-plus-char\017s"
    "tring-plus-int\024strlcpy-strlcat-size\014strncat-size\033suggest-destr"
    "uctor-override\020suggest-override\033super-class-method-mismatch\020su"
    "spicious-bzero\024suspicious-memaccess\024swift-name-attribute\006switc"
    "h\013switch-bool\016switch-default\013switch-enum\016sync-alignment%syn"
    "c-fetch-and-nand-semantics-changed\005synth\036target-clones-mixed-spec"
    "ifiers\034tautological-bitwise-compare\024tautological-compare\035tauto"
    "logical-constant-compare&tautological-constant-in-range-compare*tautolo"
    "gical-constant-out-of-range-compare\035tautological-negation-compare\036"
    "tautological-objc-bool-compare\034tautological-overlap-compare\034tauto"
    "logical-pointer-compare\037tautological-type-limit-compare\036tautologi"
    "cal-undefined-compare'tautological-unsigned-char-zero-compare'tautologi"
    "cal-unsigned-enum-zero-compare\"tautological-unsigned-zero-compare taut"
    "ological-value-range-compare\017tcb-enforcement\034template-in-declarat"
    "ion-name\032tentative-definition-array$tentative-definition-incomplete-"
    "type\015thread-safety\026thread-safety-analysis\030thread-safety-attrib"
    "utes\022thread-safety-beta\026thread-safety-negative\025thread-safety-p"
    "recise\027thread-safety-reference\036thread-safety-reference-return\025"
    "thread-safety-verbose\ttrigraphs\013type-limits\013type-safety\024typed"
    "ef-redefinition\020typename-missing\031unable-to-open-stats-file\020una"
    "ligned-access!unaligned-qualifier-implicit-cast\030unavailable-declarat"
    "ions\023undeclared-selector\005undef\014undef-prefix\020undefined-arm-z"
    "a\021undefined-arm-zt0\031undefined-bool-conversion\027undefined-func-t"
    "emplate\020undefined-inline\022undefined-internal\027undefined-internal"
    "-type\032undefined-reinterpret-cast\026undefined-var-template\035undera"
    "ligned-exception-object\026unevaluated-expression\026unguarded-availabi"
    "lity\032unguarded-availability-new\007unicode\021unicode-homoglyph\022u"
    "nicode-whitespace\022unicode-zero-width\015uninitialized\035uninitializ"
    "ed-const-reference\020unknown-argument\022unknown-assumption\022unknown"
    "-attributes\024unknown-cuda-version\022unknown-directives\027unknown-es"
    "cape-sequence\017unknown-pragmas\022unknown-sanitizers\026unknown-warni"
    "ng-option\032unnamed-type-template-args\035unneeded-internal-declaratio"
    "n\030unneeded-member-function\031unqualified-std-cast-call\020unreachab"
    "le-code\033unreachable-code-aggressive\026unreachable-code-break\034unr"
    "eachable-code-fallthrough\036unreachable-code-generic-assoc\037unreacha"
    "ble-code-loop-increment\027unreachable-code-return\023unsafe-buffer-usa"
    "ge unsafe-buffer-usage-in-container\013unsequenced\017unsupported-abi\017"
    "unsupported-abs\036unsupported-availability-guard\016unsupported-cb#uns"
    "upported-dll-base-class-template\036unsupported-floating-point-opt\022u"
    "nsupported-friend\021unsupported-gpopt\017unsupported-nan\026unsupporte"
    "d-target-opt\026unsupported-visibility\037unusable-partial-specializati"
    "on\006unused\017unused-argument\030unused-but-set-parameter\027unused-b"
    "ut-set-variable\034unused-command-line-argument\021unused-comparison\025"
    "unused-const-variable\032unused-exception-parameter\017unused-function\032"
    "unused-getter-return-value\014unused-label\025unused-lambda-capture\024"
    "unused-local-typedef\025unused-local-typedefs\015unused-macros\026unuse"
    "d-member-function\020unused-parameter\024unused-private-field\024unused"
    "-property-ivar\015unused-result\017unused-template\014unused-value\017u"
    "nused-variable\026unused-volatile-lvalue\026used-but-marked-unused\025u"
    "ser-defined-literals\025user-defined-warnings\007varargs\017variadic-ma"
    "cros\015vec-elem-size\021vector-conversion\022vector-conversions\014vex"
    "ing-parse\nvisibility\003vla\021vla-cxx-extension\015vla-extension\033v"
    "la-extension-static-assert\031void-pointer-to-enum-cast\030void-pointer"
    "-to-int-cast\024void-ptr-dereference\025volatile-register-var\023wasm-e"
    "xception-spec\025weak-template-vtables\014weak-vtables\020writable-stri"
    "ngs\015write-strings\017xor-used-as-pow\035zero-as-null-pointer-constan"
    "t\021zero-length-array"};

#endif // GET_DIAG_ARRAYS


#ifdef DIAG_ENTRY
DIAG_ENTRY(anonymous_59 /*  */, 0, 0, /* DiagSubGroup0 */ 1, R"()")
DIAG_ENTRY(PoundPragmaMessage /* #pragma-messages */, 1, /* DiagArray1 */ 1, 0, R"()")
DIAG_ENTRY(PoundWarning /* #warnings */, 18, /* DiagArray2 */ 3, 0, R"()")
DIAG_ENTRY(anonymous_289 /* CFString-literal */, 28, /* DiagArray3 */ 5, 0, R"()")
DIAG_ENTRY(anonymous_58 /* CL4 */, 45, 0, /* DiagSubGroup4 */ 3, R"()")
DIAG_ENTRY(IndependentClassAttribute /* IndependentClass-attribute */, 49, /* DiagArray5 */ 7, 0, R"()")
DIAG_ENTRY(NSobjectAttribute /* NSObject-attribute */, 76, /* DiagArray6 */ 10, 0, R"()")
DIAG_ENTRY(AArch64SMEAttributes /* aarch64-sme-attributes */, 95, /* DiagArray7 */ 12, 0, R"()")
DIAG_ENTRY(anonymous_0 /* abi */, 118, 0, 0, R"()")
DIAG_ENTRY(AbsoluteValue /* absolute-value */, 122, /* DiagArray9 */ 16, 0, R"()")
DIAG_ENTRY(AbstractFinalClass /* abstract-final-class */, 137, /* DiagArray10 */ 21, 0, R"()")
DIAG_ENTRY(anonymous_283 /* abstract-vbase-init */, 158, /* DiagArray11 */ 23, 0, R"()")
DIAG_ENTRY(anonymous_57 /* address */, 178, 0, /* DiagSubGroup12 */ 6, R"()")
DIAG_ENTRY(anonymous_258 /* address-of-packed-member */, 186, /* DiagArray13 */ 25, 0, R"()")
DIAG_ENTRY(AddressOfTemporary /* address-of-temporary */, 211, /* DiagArray14 */ 27, 0, R"()")
DIAG_ENTRY(anonymous_2 /* aggregate-return */, 232, 0, 0, R"()")
DIAG_ENTRY(AIXCompat /* aix-compat */, 249, /* DiagArray16 */ 29, 0, R"()")
DIAG_ENTRY(anonymous_270 /* alias-template-in-declaration-name */, 260, /* DiagArray17 */ 32, 0, R"()")
DIAG_ENTRY(anonymous_259 /* align-mismatch */, 295, /* DiagArray18 */ 34, 0, R"()")
DIAG_ENTRY(All /* all */, 310, 0, /* DiagSubGroup19 */ 10, R"()")
DIAG_ENTRY(anonymous_202 /* alloca */, 314, /* DiagArray20 */ 36, 0, R"()")
DIAG_ENTRY(anonymous_203 /* alloca-with-align-alignof */, 321, /* DiagArray21 */ 38, 0, R"()")
DIAG_ENTRY(AlwaysInlineCoroutine /* always-inline-coroutine */, 347, /* DiagArray22 */ 40, 0, R"()")
DIAG_ENTRY(anonymous_265 /* ambiguous-delete */, 371, /* DiagArray23 */ 42, 0, R"()")
DIAG_ENTRY(anonymous_152 /* ambiguous-ellipsis */, 388, /* DiagArray24 */ 44, 0, R"()")
DIAG_ENTRY(AmbiguousMacro /* ambiguous-macro */, 407, /* DiagArray25 */ 46, 0, R"()")
DIAG_ENTRY(AmbigMemberTemplate /* ambiguous-member-template */, 423, /* DiagArray26 */ 48, 0, R"()")
DIAG_ENTRY(anonymous_223 /* ambiguous-reversed-operator */, 449, /* DiagArray27 */ 50, 0, R"()")
DIAG_ENTRY(anonymous_108 /* analyzer-incompatible-plugin */, 477, /* DiagArray28 */ 52, 0, R"()")
DIAG_ENTRY(anonymous_105 /* android-unversioned-fallback */, 506, /* DiagArray29 */ 54, 0, R"()")
DIAG_ENTRY(AnonEnumEnumConversion /* anon-enum-enum-conversion */, 535, /* DiagArray30 */ 56, /* DiagSubGroup30 */ 18, R"()")
DIAG_ENTRY(anonymous_153 /* anonymous-pack-parens */, 561, /* DiagArray31 */ 58, 0, R"()")
DIAG_ENTRY(anonymous_90 /* apinotes */, 583, /* DiagArray32 */ 60, 0, R"()")
DIAG_ENTRY(AutomaticReferenceCounting /* arc */, 592, 0, /* DiagSubGroup33 */ 20, R"()")
DIAG_ENTRY(anonymous_151 /* arc-bridge-casts-disallowed-in-nonarc */, 596, /* DiagArray34 */ 62, 0, R"()")
DIAG_ENTRY(ARCRepeatedUseOfWeakMaybe /* arc-maybe-repeated-use-of-weak */, 634, /* DiagArray35 */ 64, 0, R"()")
DIAG_ENTRY(ARCNonPodMemAccess /* arc-non-pod-memaccess */, 665, /* DiagArray36 */ 66, 0, R"()")
DIAG_ENTRY(anonymous_183 /* arc-performSelector-leaks */, 687, /* DiagArray37 */ 68, 0, R"()")
DIAG_ENTRY(ARCRepeatedUseOfWeak /* arc-repeated-use-of-weak */, 713, /* DiagArray38 */ 70, /* DiagSubGroup38 */ 24, R"()")
DIAG_ENTRY(ARCRetainCycles /* arc-retain-cycles */, 738, /* DiagArray39 */ 72, 0, R"()")
DIAG_ENTRY(ARCUnsafeRetainedAssign /* arc-unsafe-retained-assign */, 756, /* DiagArray40 */ 74, 0, R"()")
DIAG_ENTRY(anonymous_291 /* argument-outside-range */, 783, /* DiagArray41 */ 78, 0, R"()")
DIAG_ENTRY(anonymous_292 /* argument-undefined-behaviour */, 806, /* DiagArray42 */ 80, 0, R"()")
DIAG_ENTRY(anonymous_162 /* arm-interrupt-vfp-clobber */, 835, /* DiagArray43 */ 82, 0, R"()")
DIAG_ENTRY(ArrayBounds /* array-bounds */, 861, /* DiagArray44 */ 84, 0, R"()")
DIAG_ENTRY(ArrayBoundsPointerArithmetic /* array-bounds-pointer-arithmetic */, 874, /* DiagArray45 */ 90, 0, R"()")
DIAG_ENTRY(ArrayParameter /* array-parameter */, 906, /* DiagArray46 */ 93, 0, R"()")
DIAG_ENTRY(ASM /* asm */, 922, 0, /* DiagSubGroup47 */ 26, R"()")
DIAG_ENTRY(ASMOperandWidths /* asm-operand-widths */, 926, /* DiagArray48 */ 95, 0, R"()")
DIAG_ENTRY(anonymous_290 /* assign-enum */, 945, /* DiagArray49 */ 97, 0, R"()")
DIAG_ENTRY(anonymous_170 /* assume */, 957, /* DiagArray50 */ 99, 0, R"()")
DIAG_ENTRY(anonymous_56 /* at-protocol */, 964, 0, 0, R"()")
DIAG_ENTRY(FrameworkHdrAtImport /* atimport-in-framework-header */, 976, /* DiagArray52 */ 101, 0, R"()")
DIAG_ENTRY(anonymous_246 /* atomic-access */, 1005, /* DiagArray53 */ 103, 0, R"()")
DIAG_ENTRY(AtomicAlignment /* atomic-alignment */, 1019, /* DiagArray54 */ 105, 0, R"()")
DIAG_ENTRY(anonymous_275 /* atomic-implicit-seq-cst */, 1036, /* DiagArray55 */ 108, 0, R"()")
DIAG_ENTRY(anonymous_274 /* atomic-memory-ordering */, 1060, /* DiagArray56 */ 110, 0, R"()")
DIAG_ENTRY(AtomicProperties /* atomic-properties */, 1083, 0, /* DiagSubGroup57 */ 28, R"()")
DIAG_ENTRY(anonymous_178 /* atomic-property-with-user-defined-accessor */, 1101, /* DiagArray58 */ 112, 0, R"()")
DIAG_ENTRY(anonymous_219 /* attribute-packed-for-bitfield */, 1144, /* DiagArray59 */ 114, 0, R"()")
DIAG_ENTRY(BackendWarningAttributes /* attribute-warning */, 1174, /* DiagArray60 */ 116, 0, R"()")
DIAG_ENTRY(Attributes /* attributes */, 1192, 0, /* DiagSubGroup61 */ 31, R"()")
DIAG_ENTRY(anonymous_160 /* auto-decl-extensions */, 1203, /* DiagArray62 */ 119, 0, R"()")
DIAG_ENTRY(AutoDisableVptrSanitizer /* auto-disable-vptr-sanitizer */, 1224, /* DiagArray63 */ 121, 0, R"()")
DIAG_ENTRY(anonymous_3 /* auto-import */, 1252, 0, 0, R"()")
DIAG_ENTRY(anonymous_149 /* auto-storage-class */, 1264, /* DiagArray65 */ 123, 0, R"()")
DIAG_ENTRY(anonymous_197 /* auto-var-id */, 1283, /* DiagArray66 */ 125, 0, R"()")
DIAG_ENTRY(Availability /* availability */, 1295, /* DiagArray67 */ 127, 0, R"()")
DIAG_ENTRY(AVRRtlibLinkingQuirks /* avr-rtlib-linking-quirks */, 1308, /* DiagArray68 */ 139, 0, R"()")
DIAG_ENTRY(BackendPlugin /* backend-plugin */, 1333, /* DiagArray69 */ 145, 0, R"()")
DIAG_ENTRY(anonymous_112 /* backslash-newline-escape */, 1348, /* DiagArray70 */ 148, 0, R"()")
DIAG_ENTRY(BadFunctionCast /* bad-function-cast */, 1373, /* DiagArray71 */ 150, 0, R"()")
DIAG_ENTRY(BinaryLiteral /* binary-literal */, 1391, 0, /* DiagSubGroup72 */ 34, R"()")
DIAG_ENTRY(BindToTemporaryCopy /* bind-to-temporary-copy */, 1406, /* DiagArray73 */ 152, /* DiagSubGroup73 */ 37, R"()")
DIAG_ENTRY(anonymous_165 /* binding-in-condition */, 1429, /* DiagArray74 */ 155, 0, R"()")
DIAG_ENTRY(BitIntExtension /* bit-int-extension */, 1450, /* DiagArray75 */ 157, 0, R"()")
DIAG_ENTRY(BitFieldConstantConversion /* bitfield-constant-conversion */, 1468, /* DiagArray76 */ 160, /* DiagSubGroup76 */ 39, R"()")
DIAG_ENTRY(BitFieldEnumConversion /* bitfield-enum-conversion */, 1497, /* DiagArray77 */ 162, 0, R"()")
DIAG_ENTRY(BitFieldWidth /* bitfield-width */, 1522, /* DiagArray78 */ 166, 0, R"()")
DIAG_ENTRY(BitwiseConditionalParentheses /* bitwise-conditional-parentheses */, 1537, /* DiagArray79 */ 168, 0, R"()")
DIAG_ENTRY(BitwiseInsteadOfLogical /* bitwise-instead-of-logical */, 1569, /* DiagArray80 */ 170, 0, R"()")
DIAG_ENTRY(BitwiseOpParentheses /* bitwise-op-parentheses */, 1596, /* DiagArray81 */ 172, 0, R"()")
DIAG_ENTRY(BlockCaptureAutoReleasing /* block-capture-autoreleasing */, 1619, /* DiagArray82 */ 174, 0, R"()")
DIAG_ENTRY(BoolConversion /* bool-conversion */, 1647, /* DiagArray83 */ 176, /* DiagSubGroup83 */ 41, R"()")
DIAG_ENTRY(anonymous_64 /* bool-conversions */, 1663, 0, /* DiagSubGroup84 */ 44, R"()")
DIAG_ENTRY(BoolOperation /* bool-operation */, 1680, /* DiagArray85 */ 178, /* DiagSubGroup85 */ 46, R"()")
DIAG_ENTRY(BoundsSafetyCountedByEltTyUnknownSize /* bounds-safety-counted-by-elt-type-unknown-size */, 1695, /* DiagArray86 */ 180, 0, R"()")
DIAG_ENTRY(anonymous_241 /* braced-scalar-init */, 1742, /* DiagArray87 */ 182, 0, R"()")
DIAG_ENTRY(BranchProtection /* branch-protection */, 1761, /* DiagArray88 */ 184, 0, R"()")
DIAG_ENTRY(ObjCBridge /* bridge-cast */, 1779, /* DiagArray89 */ 189, 0, R"()")
DIAG_ENTRY(anonymous_205 /* builtin-assume-aligned-alignment */, 1791, /* DiagArray90 */ 192, 0, R"()")
DIAG_ENTRY(BuiltinMacroRedefined /* builtin-macro-redefined */, 1824, /* DiagArray91 */ 194, 0, R"()")
DIAG_ENTRY(anonymous_171 /* builtin-memcpy-chk-size */, 1848, /* DiagArray92 */ 197, 0, R"()")
DIAG_ENTRY(BuiltinRequiresHeader /* builtin-requires-header */, 1872, /* DiagArray93 */ 199, 0, R"()")
DIAG_ENTRY(CXXCompat /* c++-compat */, 1896, /* DiagArray94 */ 201, 0, R"()")
DIAG_ENTRY(anonymous_25 /* c++0x-compat */, 1907, 0, /* DiagSubGroup95 */ 48, R"()")
DIAG_ENTRY(anonymous_68 /* c++0x-extensions */, 1920, 0, /* DiagSubGroup96 */ 50, R"()")
DIAG_ENTRY(anonymous_23 /* c++0x-narrowing */, 1937, 0, /* DiagSubGroup97 */ 52, R"()")
DIAG_ENTRY(CXX11Compat /* c++11-compat */, 1953, /* DiagArray98 */ 203, /* DiagSubGroup98 */ 54, R"()")
DIAG_ENTRY(CXX11CompatDeprecatedWritableStr /* c++11-compat-deprecated-writable-strings */, 1966, /* DiagArray99 */ 214, 0, R"()")
DIAG_ENTRY(CXX11CompatPedantic /* c++11-compat-pedantic */, 2007, 0, /* DiagSubGroup100 */ 63, R"()")
DIAG_ENTRY(CXX11CompatReservedUserDefinedLiteral /* c++11-compat-reserved-user-defined-literal */, 2029, /* DiagArray101 */ 216, 0, R"()")
DIAG_ENTRY(CXX11 /* c++11-extensions */, 2072, /* DiagArray102 */ 218, /* DiagSubGroup102 */ 70, R"()")
DIAG_ENTRY(CXX11ExtraSemi /* c++11-extra-semi */, 2089, /* DiagArray103 */ 245, 0, R"()")
DIAG_ENTRY(CXX11InlineNamespace /* c++11-inline-namespace */, 2106, /* DiagArray104 */ 247, 0, R"()")
DIAG_ENTRY(CXX11LongLong /* c++11-long-long */, 2129, /* DiagArray105 */ 249, 0, R"()")
DIAG_ENTRY(CXX11Narrowing /* c++11-narrowing */, 2145, /* DiagArray106 */ 251, /* DiagSubGroup106 */ 74, R"()")
DIAG_ENTRY(CXX11NarrowingConstReference /* c++11-narrowing-const-reference */, 2161, /* DiagArray107 */ 259, 0, R"()")
DIAG_ENTRY(CXX14Attrs /* c++14-attribute-extensions */, 2193, /* DiagArray108 */ 263, 0, R"()")
DIAG_ENTRY(CXX14BinaryLiteral /* c++14-binary-literal */, 2220, /* DiagArray109 */ 265, 0, R"()")
DIAG_ENTRY(CXX14Compat /* c++14-compat */, 2241, 0, /* DiagSubGroup110 */ 76, R"()")
DIAG_ENTRY(CXX14CompatPedantic /* c++14-compat-pedantic */, 2254, 0, /* DiagSubGroup111 */ 81, R"()")
DIAG_ENTRY(CXX14 /* c++14-extensions */, 2276, /* DiagArray112 */ 267, /* DiagSubGroup112 */ 87, R"()")
DIAG_ENTRY(CXX17Attrs /* c++17-attribute-extensions */, 2293, /* DiagArray113 */ 275, 0, R"()")
DIAG_ENTRY(CXX17Compat /* c++17-compat */, 2320, 0, /* DiagSubGroup114 */ 90, R"()")
DIAG_ENTRY(CXX17CompatMangling /* c++17-compat-mangling */, 2333, /* DiagArray115 */ 277, 0, R"()")
DIAG_ENTRY(CXX17CompatPedantic /* c++17-compat-pedantic */, 2355, 0, /* DiagSubGroup116 */ 97, R"()")
DIAG_ENTRY(CXX17 /* c++17-extensions */, 2377, /* DiagArray117 */ 279, /* DiagSubGroup117 */ 102, R"()")
DIAG_ENTRY(anonymous_69 /* c++1y-extensions */, 2394, 0, /* DiagSubGroup118 */ 104, R"()")
DIAG_ENTRY(anonymous_26 /* c++1z-compat */, 2411, 0, /* DiagSubGroup119 */ 106, R"()")
DIAG_ENTRY(anonymous_12 /* c++1z-compat-mangling */, 2424, 0, /* DiagSubGroup120 */ 108, R"()")
DIAG_ENTRY(anonymous_70 /* c++1z-extensions */, 2446, 0, /* DiagSubGroup121 */ 110, R"()")
DIAG_ENTRY(CXX20Attrs /* c++20-attribute-extensions */, 2463, /* DiagArray122 */ 297, 0, R"()")
DIAG_ENTRY(CXX20Compat /* c++20-compat */, 2490, /* DiagArray123 */ 299, /* DiagSubGroup123 */ 112, R"()")
DIAG_ENTRY(CXX20CompatPedantic /* c++20-compat-pedantic */, 2503, 0, /* DiagSubGroup124 */ 115, R"()")
DIAG_ENTRY(CXX20Designator /* c++20-designator */, 2525, /* DiagArray125 */ 309, 0, R"()")
DIAG_ENTRY(CXX20 /* c++20-extensions */, 2542, /* DiagArray126 */ 311, /* DiagSubGroup126 */ 119, R"()")
DIAG_ENTRY(CXX23Attrs /* c++23-attribute-extensions */, 2559, /* DiagArray127 */ 334, 0, R"()")
DIAG_ENTRY(CXX23Compat /* c++23-compat */, 2586, 0, /* DiagSubGroup128 */ 122, R"()")
DIAG_ENTRY(CXX23 /* c++23-extensions */, 2599, /* DiagArray129 */ 336, /* DiagSubGroup129 */ 124, R"()")
DIAG_ENTRY(CXX23AttrsOnLambda /* c++23-lambda-attributes */, 2616, /* DiagArray130 */ 347, 0, R"()")
DIAG_ENTRY(CXX26 /* c++26-extensions */, 2640, /* DiagArray131 */ 349, 0, R"()")
DIAG_ENTRY(anonymous_27 /* c++2a-compat */, 2657, 0, /* DiagSubGroup132 */ 126, R"()")
DIAG_ENTRY(anonymous_28 /* c++2a-compat-pedantic */, 2670, 0, /* DiagSubGroup133 */ 128, R"()")
DIAG_ENTRY(anonymous_71 /* c++2a-extensions */, 2692, 0, /* DiagSubGroup134 */ 130, R"()")
DIAG_ENTRY(anonymous_72 /* c++2b-extensions */, 2709, 0, /* DiagSubGroup135 */ 132, R"()")
DIAG_ENTRY(CXX26Compat /* c++2c-compat */, 2726, 0, /* DiagSubGroup136 */ 134, R"()")
DIAG_ENTRY(anonymous_73 /* c++2c-extensions */, 2739, 0, /* DiagSubGroup137 */ 136, R"()")
DIAG_ENTRY(anonymous_19 /* c++98-c++11-c++14-c++17-compat */, 2756, 0, /* DiagSubGroup138 */ 138, R"()")
DIAG_ENTRY(anonymous_20 /* c++98-c++11-c++14-c++17-compat-pedantic */, 2787, 0, /* DiagSubGroup139 */ 140, R"()")
DIAG_ENTRY(anonymous_17 /* c++98-c++11-c++14-compat */, 2827, 0, /* DiagSubGroup140 */ 142, R"()")
DIAG_ENTRY(anonymous_18 /* c++98-c++11-c++14-compat-pedantic */, 2852, 0, /* DiagSubGroup141 */ 144, R"()")
DIAG_ENTRY(anonymous_15 /* c++98-c++11-compat */, 2886, 0, /* DiagSubGroup142 */ 146, R"()")
DIAG_ENTRY(CXXPre14CompatBinaryLiteral /* c++98-c++11-compat-binary-literal */, 2905, /* DiagArray143 */ 355, 0, R"()")
DIAG_ENTRY(anonymous_16 /* c++98-c++11-compat-pedantic */, 2939, 0, /* DiagSubGroup144 */ 148, R"()")
DIAG_ENTRY(CXX98Compat /* c++98-compat */, 2967, /* DiagArray145 */ 357, /* DiagSubGroup145 */ 150, R"()")
DIAG_ENTRY(CXX98CompatBindToTemporaryCopy /* c++98-compat-bind-to-temporary-copy */, 2980, /* DiagArray146 */ 416, 0, R"()")
DIAG_ENTRY(CXX98CompatExtraSemi /* c++98-compat-extra-semi */, 3016, /* DiagArray147 */ 418, 0, R"()")
DIAG_ENTRY(CXX98CompatLocalTypeTemplateArgs /* c++98-compat-local-type-template-args */, 3040, /* DiagArray148 */ 420, 0, R"()")
DIAG_ENTRY(CXX98CompatPedantic /* c++98-compat-pedantic */, 3078, /* DiagArray149 */ 422, /* DiagSubGroup149 */ 158, R"()")
DIAG_ENTRY(CXX98CompatUnnamedTypeTemplateArgs /* c++98-compat-unnamed-type-template-args */, 3100, /* DiagArray150 */ 432, 0, R"()")
DIAG_ENTRY(C11 /* c11-extensions */, 3140, /* DiagArray151 */ 434, 0, R"()")
DIAG_ENTRY(C23Compat /* c23-compat */, 3155, /* DiagArray152 */ 439, 0, R"()")
DIAG_ENTRY(C23 /* c23-extensions */, 3166, /* DiagArray153 */ 442, 0, R"()")
DIAG_ENTRY(anonymous_4 /* c2x-compat */, 3181, 0, /* DiagSubGroup154 */ 167, R"()")
DIAG_ENTRY(anonymous_74 /* c2x-extensions */, 3192, 0, /* DiagSubGroup155 */ 169, R"()")
DIAG_ENTRY(C2y /* c2y-extensions */, 3207, /* DiagArray156 */ 456, 0, R"()")
DIAG_ENTRY(C99Compat /* c99-compat */, 3222, /* DiagArray157 */ 460, 0, R"()")
DIAG_ENTRY(C99Designator /* c99-designator */, 3233, /* DiagArray158 */ 465, /* DiagSubGroup158 */ 171, R"()")
DIAG_ENTRY(C99 /* c99-extensions */, 3248, /* DiagArray159 */ 471, /* DiagSubGroup159 */ 173, R"()")
DIAG_ENTRY(PureVirtualCallFromCtorDtor /* call-to-pure-virtual-from-ctor-dtor */, 3263, /* DiagArray160 */ 482, 0, R"()")
DIAG_ENTRY(CalledOnceParameter /* called-once-parameter */, 3299, /* DiagArray161 */ 484, /* DiagSubGroup161 */ 175, R"()")
DIAG_ENTRY(CastAlign /* cast-align */, 3321, /* DiagArray162 */ 488, 0, R"()")
DIAG_ENTRY(anonymous_278 /* cast-calling-convention */, 3332, /* DiagArray163 */ 490, 0, R"()")
DIAG_ENTRY(CastFunctionType /* cast-function-type */, 3356, 0, /* DiagSubGroup164 */ 177, R"()")
DIAG_ENTRY(CastFunctionTypeMismatch /* cast-function-type-mismatch */, 3375, /* DiagArray165 */ 492, 0, R"()")
DIAG_ENTRY(CastFunctionTypeStrict /* cast-function-type-strict */, 3403, /* DiagArray166 */ 494, 0, R"()")
DIAG_ENTRY(SelTypeCast /* cast-of-sel-type */, 3429, /* DiagArray167 */ 496, 0, R"()")
DIAG_ENTRY(CastQual /* cast-qual */, 3446, /* DiagArray168 */ 498, 0, R"()")
DIAG_ENTRY(anonymous_263 /* cast-qual-unrelated */, 3456, /* DiagArray169 */ 501, 0, R"()")
DIAG_ENTRY(anonymous_5 /* char-align */, 3476, 0, 0, R"()")
DIAG_ENTRY(CharSubscript /* char-subscripts */, 3487, /* DiagArray171 */ 503, 0, R"()")
DIAG_ENTRY(ClangClPch /* clang-cl-pch */, 3503, /* DiagArray172 */ 506, 0, R"()")
DIAG_ENTRY(ClassConversion /* class-conversion */, 3516, /* DiagArray173 */ 511, 0, R"()")
DIAG_ENTRY(ClassVarargs /* class-varargs */, 3533, /* DiagArray174 */ 515, /* DiagSubGroup174 */ 180, R"()")
DIAG_ENTRY(anonymous_206 /* cmse-union-leak */, 3547, /* DiagArray175 */ 517, 0, R"()")
DIAG_ENTRY(anonymous_158 /* comma */, 3563, /* DiagArray176 */ 519, 0, R"()")
DIAG_ENTRY(Comment /* comment */, 3569, /* DiagArray177 */ 521, 0, R"()")
DIAG_ENTRY(anonymous_62 /* comments */, 3577, 0, /* DiagSubGroup178 */ 182, R"()")
DIAG_ENTRY(CompareDistinctPointerType /* compare-distinct-pointer-types */, 3586, /* DiagArray179 */ 526, 0, R"()")
DIAG_ENTRY(CompletionHandler /* completion-handler */, 3617, /* DiagArray180 */ 528, 0, R"()")
DIAG_ENTRY(anonymous_243 /* complex-component-init */, 3636, /* DiagArray181 */ 532, 0, R"()")
DIAG_ENTRY(CompoundTokenSplit /* compound-token-split */, 3659, 0, /* DiagSubGroup182 */ 184, R"()")
DIAG_ENTRY(CompoundTokenSplitByMacro /* compound-token-split-by-macro */, 3680, /* DiagArray183 */ 534, 0, R"()")
DIAG_ENTRY(CompoundTokenSplitBySpace /* compound-token-split-by-space */, 3710, /* DiagArray184 */ 536, 0, R"()")
DIAG_ENTRY(anonymous_280 /* conditional-type-mismatch */, 3740, /* DiagArray185 */ 538, 0, R"()")
DIAG_ENTRY(UninitializedMaybe /* conditional-uninitialized */, 3766, /* DiagArray186 */ 540, 0, R"()")
DIAG_ENTRY(ConfigMacros /* config-macros */, 3792, /* DiagArray187 */ 542, 0, R"()")
DIAG_ENTRY(ConstantConversion /* constant-conversion */, 3806, /* DiagArray188 */ 544, /* DiagSubGroup188 */ 187, R"()")
DIAG_ENTRY(anonymous_81 /* constant-evaluated */, 3826, /* DiagArray189 */ 546, 0, R"()")
DIAG_ENTRY(anonymous_253 /* constant-logical-operand */, 3845, /* DiagArray190 */ 548, 0, R"()")
DIAG_ENTRY(anonymous_195 /* constexpr-not-const */, 3870, /* DiagArray191 */ 550, 0, R"()")
DIAG_ENTRY(Consumed /* consumed */, 3890, /* DiagArray192 */ 552, 0, R"()")
DIAG_ENTRY(Conversion /* conversion */, 3899, /* DiagArray193 */ 561, /* DiagSubGroup193 */ 190, R"()")
DIAG_ENTRY(anonymous_63 /* conversion-null */, 3910, 0, /* DiagSubGroup194 */ 205, R"()")
DIAG_ENTRY(CoroNonAlignedAllocationFunction /* coro-non-aligned-allocation-function */, 3926, /* DiagArray195 */ 568, 0, R"()")
DIAG_ENTRY(Coroutine /* coroutine */, 3963, /* DiagArray196 */ 570, /* DiagSubGroup196 */ 207, R"()")
DIAG_ENTRY(CoroutineMissingUnhandledException /* coroutine-missing-unhandled-exception */, 3973, /* DiagArray197 */ 572, 0, R"()")
DIAG_ENTRY(CoveredSwitchDefault /* covered-switch-default */, 4011, /* DiagArray198 */ 574, 0, R"()")
DIAG_ENTRY(anonymous_61 /* cpp */, 4034, 0, /* DiagSubGroup199 */ 212, R"()")
DIAG_ENTRY(ObjCCStringFormat /* cstring-format-directive */, 4038, /* DiagArray200 */ 576, 0, R"()")
DIAG_ENTRY(CTADMaybeUnsupported /* ctad-maybe-unsupported */, 4063, /* DiagArray201 */ 578, 0, R"()")
DIAG_ENTRY(anonymous_6 /* ctor-dtor-privacy */, 4086, 0, 0, R"()")
DIAG_ENTRY(CrossTU /* ctu */, 4104, /* DiagArray203 */ 580, 0, R"()")
DIAG_ENTRY(CudaCompat /* cuda-compat */, 4108, /* DiagArray204 */ 582, 0, R"()")
DIAG_ENTRY(CustomAtomic /* custom-atomic-properties */, 4120, /* DiagArray205 */ 588, 0, R"()")
DIAG_ENTRY(anonymous_154 /* cxx-attribute-extension */, 4145, /* DiagArray206 */ 590, 0, R"()")
DIAG_ENTRY(Dangling /* dangling */, 4169, /* DiagArray207 */ 592, /* DiagSubGroup207 */ 214, R"()")
DIAG_ENTRY(DanglingAssignment /* dangling-assignment */, 4178, /* DiagArray208 */ 595, 0, R"()")
DIAG_ENTRY(DanglingAssignmentGsl /* dangling-assignment-gsl */, 4198, /* DiagArray209 */ 597, 0, R"()")
DIAG_ENTRY(DanglingElse /* dangling-else */, 4222, /* DiagArray210 */ 599, 0, R"()")
DIAG_ENTRY(DanglingField /* dangling-field */, 4236, /* DiagArray211 */ 601, 0, R"()")
DIAG_ENTRY(DanglingGsl /* dangling-gsl */, 4251, /* DiagArray212 */ 606, 0, R"()")
DIAG_ENTRY(DanglingInitializerList /* dangling-initializer-list */, 4264, /* DiagArray213 */ 609, 0, R"()")
DIAG_ENTRY(anonymous_101 /* darwin-sdk-settings */, 4290, /* DiagArray214 */ 611, 0, R"()")
DIAG_ENTRY(anonymous_138 /* date-time */, 4310, /* DiagArray215 */ 613, 0, R"()")
DIAG_ENTRY(DeallocInCategory /* dealloc-in-category */, 4320, /* DiagArray216 */ 615, 0, R"()")
DIAG_ENTRY(anonymous_97 /* debug-compression-unavailable */, 4340, /* DiagArray217 */ 617, 0, R"()")
DIAG_ENTRY(DeclarationAfterStatement /* declaration-after-statement */, 4370, /* DiagArray218 */ 619, 0, R"()")
DIAG_ENTRY(DefaultedFunctionDeleted /* defaulted-function-deleted */, 4398, /* DiagArray219 */ 622, 0, R"()")
DIAG_ENTRY(anonymous_98 /* delayed-template-parsing-in-cxx20 */, 4425, /* DiagArray220 */ 625, 0, R"()")
DIAG_ENTRY(DelegatingCtorCycles /* delegating-ctor-cycles */, 4459, /* DiagArray221 */ 627, 0, R"()")
DIAG_ENTRY(DeleteAbstractNonVirtualDtor /* delete-abstract-non-virtual-dtor */, 4482, /* DiagArray222 */ 629, 0, R"()")
DIAG_ENTRY(DeleteIncomplete /* delete-incomplete */, 4515, /* DiagArray223 */ 631, 0, R"()")
DIAG_ENTRY(DeleteNonAbstractNonVirtualDtor /* delete-non-abstract-non-virtual-dtor */, 4533, /* DiagArray224 */ 634, 0, R"()")
DIAG_ENTRY(DeleteNonVirtualDtor /* delete-non-virtual-dtor */, 4570, 0, /* DiagSubGroup225 */ 221, R"()")
DIAG_ENTRY(anonymous_120 /* delimited-escape-sequence-extension */, 4594, /* DiagArray226 */ 636, 0, R"()")
DIAG_ENTRY(anonymous_267 /* deprecate-lax-vec-conv-all */, 4630, /* DiagArray227 */ 638, 0, R"()")
DIAG_ENTRY(Deprecated /* deprecated */, 4657, /* DiagArray228 */ 640, /* DiagSubGroup228 */ 224, R"()")
DIAG_ENTRY(anonymous_266 /* deprecated-altivec-src-compat */, 4668, /* DiagArray229 */ 650, 0, R"()")
DIAG_ENTRY(DeprecatedAnonEnumEnumConversion /* deprecated-anon-enum-enum-conversion */, 4698, /* DiagArray230 */ 652, 0, R"()")
DIAG_ENTRY(DeprecatedArrayCompare /* deprecated-array-compare */, 4735, /* DiagArray231 */ 654, 0, R"()")
DIAG_ENTRY(DeprecatedAttributes /* deprecated-attributes */, 4760, /* DiagArray232 */ 656, 0, R"()")
DIAG_ENTRY(DeprecatedBuiltins /* deprecated-builtins */, 4782, /* DiagArray233 */ 660, 0, R"()")
DIAG_ENTRY(DeprecatedCommaSubscript /* deprecated-comma-subscript */, 4802, /* DiagArray234 */ 662, 0, R"()")
DIAG_ENTRY(DeprecatedCopy /* deprecated-copy */, 4829, /* DiagArray235 */ 664, /* DiagSubGroup235 */ 249, R"()")
DIAG_ENTRY(anonymous_7 /* deprecated-copy-dtor */, 4845, 0, /* DiagSubGroup236 */ 251, R"()")
DIAG_ENTRY(DeprecatedCopyWithDtor /* deprecated-copy-with-dtor */, 4866, /* DiagArray237 */ 666, /* DiagSubGroup237 */ 253, R"()")
DIAG_ENTRY(DeprecatedCopyWithUserProvidedCopy /* deprecated-copy-with-user-provided-copy */, 4892, /* DiagArray238 */ 668, 0, R"()")
DIAG_ENTRY(DeprecatedCopyWithUserProvidedDtor /* deprecated-copy-with-user-provided-dtor */, 4932, /* DiagArray239 */ 670, 0, R"()")
DIAG_ENTRY(DeprecatedCoroutine /* deprecated-coroutine */, 4972, /* DiagArray240 */ 672, 0, R"()")
DIAG_ENTRY(DeprecatedDeclarations /* deprecated-declarations */, 4993, /* DiagArray241 */ 674, 0, R"()")
DIAG_ENTRY(DeprecatedDynamicExceptionSpec /* deprecated-dynamic-exception-spec */, 5017, /* DiagArray242 */ 681, 0, R"()")
DIAG_ENTRY(DeprecatedEnumCompare /* deprecated-enum-compare */, 5051, /* DiagArray243 */ 683, 0, R"()")
DIAG_ENTRY(DeprecatedEnumCompareConditional /* deprecated-enum-compare-conditional */, 5075, /* DiagArray244 */ 685, 0, R"()")
DIAG_ENTRY(DeprecatedEnumEnumConversion /* deprecated-enum-enum-conversion */, 5111, /* DiagArray245 */ 687, 0, R"()")
DIAG_ENTRY(DeprecatedEnumFloatConversion /* deprecated-enum-float-conversion */, 5143, /* DiagArray246 */ 689, 0, R"()")
DIAG_ENTRY(DeprecatedImplementations /* deprecated-implementations */, 5176, /* DiagArray247 */ 691, 0, R"()")
DIAG_ENTRY(DeprecatedIncrementBool /* deprecated-increment-bool */, 5203, /* DiagArray248 */ 694, 0, R"()")
DIAG_ENTRY(DeprecatedLiteralOperator /* deprecated-literal-operator */, 5229, /* DiagArray249 */ 696, 0, R"()")
DIAG_ENTRY(DeprecatedModuleDotMap /* deprecated-module-dot-map */, 5257, /* DiagArray250 */ 698, 0, R"()")
DIAG_ENTRY(DeprecatedNoRelaxedTemplateTemplateArgs /* deprecated-no-relaxed-template-template-args */, 5283, /* DiagArray251 */ 700, 0, R"()")
DIAG_ENTRY(DeprecatedNonPrototype /* deprecated-non-prototype */, 5328, /* DiagArray252 */ 702, 0, R"()")
DIAG_ENTRY(DeprecatedObjCIsaUsage /* deprecated-objc-isa-usage */, 5353, /* DiagArray253 */ 705, 0, R"()")
DIAG_ENTRY(ObjCPointerIntrospect /* deprecated-objc-pointer-introspection */, 5379, /* DiagArray254 */ 708, /* DiagSubGroup254 */ 255, R"()")
DIAG_ENTRY(ObjCPointerIntrospectPerformSelector /* deprecated-objc-pointer-introspection-performSelector */, 5417, /* DiagArray255 */ 710, 0, R"()")
DIAG_ENTRY(DeprecatedOFast /* deprecated-ofast */, 5471, /* DiagArray256 */ 712, 0, R"()")
DIAG_ENTRY(DeprecatedPragma /* deprecated-pragma */, 5488, /* DiagArray257 */ 714, 0, R"()")
DIAG_ENTRY(DeprecatedRedundantConstexprStaticDef /* deprecated-redundant-constexpr-static-def */, 5506, /* DiagArray258 */ 716, 0, R"()")
DIAG_ENTRY(DeprecatedRegister /* deprecated-register */, 5548, /* DiagArray259 */ 718, 0, R"()")
DIAG_ENTRY(DeprecatedThisCapture /* deprecated-this-capture */, 5568, /* DiagArray260 */ 720, 0, R"()")
DIAG_ENTRY(DeprecatedType /* deprecated-type */, 5592, /* DiagArray261 */ 722, 0, R"()")
DIAG_ENTRY(DeprecatedVolatile /* deprecated-volatile */, 5608, /* DiagArray262 */ 724, 0, R"()")
DIAG_ENTRY(DeprecatedWritableStr /* deprecated-writable-strings */, 5628, 0, /* DiagSubGroup263 */ 257, R"()")
DIAG_ENTRY(anonymous_296 /* direct-ivar-access */, 5656, /* DiagArray264 */ 730, 0, R"()")
DIAG_ENTRY(anonymous_129 /* disabled-macro-expansion */, 5675, /* DiagArray265 */ 732, 0, R"()")
DIAG_ENTRY(anonymous_9 /* disabled-optimization */, 5700, 0, 0, R"()")
DIAG_ENTRY(anonymous_10 /* discard-qual */, 5722, 0, 0, R"()")
DIAG_ENTRY(DistributedObjectModifiers /* distributed-object-modifiers */, 5735, /* DiagArray268 */ 734, 0, R"()")
DIAG_ENTRY(anonymous_11 /* div-by-zero */, 5764, 0, /* DiagSubGroup269 */ 259, R"()")
DIAG_ENTRY(DivZero /* division-by-zero */, 5776, /* DiagArray270 */ 737, 0, R"()")
DIAG_ENTRY(anonymous_207 /* dll-attribute-on-redeclaration */, 5793, /* DiagArray271 */ 739, 0, R"()")
DIAG_ENTRY(DllexportExplicitInstantiationDecl /* dllexport-explicit-instantiation-decl */, 5824, /* DiagArray272 */ 741, 0, R"()")
DIAG_ENTRY(anonymous_208 /* dllimport-static-field-def */, 5862, /* DiagArray273 */ 743, 0, R"()")
DIAG_ENTRY(Documentation /* documentation */, 5889, /* DiagArray274 */ 745, /* DiagSubGroup274 */ 261, R"()")
DIAG_ENTRY(DocumentationDeprecatedSync /* documentation-deprecated-sync */, 5903, /* DiagArray275 */ 766, 0, R"()")
DIAG_ENTRY(DocumentationHTML /* documentation-html */, 5933, /* DiagArray276 */ 768, 0, R"()")
DIAG_ENTRY(DocumentationPedantic /* documentation-pedantic */, 5952, /* DiagArray277 */ 773, /* DiagSubGroup277 */ 264, R"()")
DIAG_ENTRY(DocumentationUnknownCommand /* documentation-unknown-command */, 5975, /* DiagArray278 */ 775, 0, R"()")
DIAG_ENTRY(anonymous_113 /* dollar-in-identifier-extension */, 6005, /* DiagArray279 */ 778, 0, R"()")
DIAG_ENTRY(DoublePromotion /* double-promotion */, 6036, /* DiagArray280 */ 780, 0, R"()")
DIAG_ENTRY(DtorName /* dtor-name */, 6053, /* DiagArray281 */ 782, 0, R"()")
DIAG_ENTRY(anonymous_194 /* dtor-typedef */, 6063, /* DiagArray282 */ 786, 0, R"()")
DIAG_ENTRY(DuplicateDeclSpecifier /* duplicate-decl-specifier */, 6076, /* DiagArray283 */ 788, 0, R"()")
DIAG_ENTRY(anonymous_157 /* duplicate-enum */, 6101, /* DiagArray284 */ 793, 0, R"()")
DIAG_ENTRY(DuplicateArgDecl /* duplicate-method-arg */, 6116, /* DiagArray285 */ 795, 0, R"()")
DIAG_ENTRY(MethodDuplicate /* duplicate-method-match */, 6137, /* DiagArray286 */ 797, 0, R"()")
DIAG_ENTRY(anonymous_173 /* duplicate-protocol */, 6160, /* DiagArray287 */ 799, 0, R"()")
DIAG_ENTRY(DXILValidation /* dxil-validation */, 6179, /* DiagArray288 */ 801, 0, R"()")
DIAG_ENTRY(DynamicClassMemaccess /* dynamic-class-memaccess */, 6195, /* DiagArray289 */ 803, 0, R"()")
DIAG_ENTRY(DynamicExceptionSpec /* dynamic-exception-spec */, 6219, /* DiagArray290 */ 805, /* DiagSubGroup290 */ 266, R"()")
DIAG_ENTRY(anonymous_110 /* eager-load-cxx-named-modules */, 6242, /* DiagArray291 */ 807, 0, R"()")
DIAG_ENTRY(anonymous_38 /* effc++ */, 6271, 0, /* DiagSubGroup292 */ 268, R"()")
DIAG_ENTRY(anonymous_145 /* elaborated-enum-base */, 6278, /* DiagArray293 */ 809, 0, R"()")
DIAG_ENTRY(anonymous_146 /* elaborated-enum-class */, 6299, /* DiagArray294 */ 811, 0, R"()")
DIAG_ENTRY(anonymous_135 /* embedded-directive */, 6321, /* DiagArray295 */ 813, 0, R"()")
DIAG_ENTRY(EmptyBody /* empty-body */, 6340, /* DiagArray296 */ 815, 0, R"()")
DIAG_ENTRY(anonymous_150 /* empty-decomposition */, 6351, /* DiagArray297 */ 821, 0, R"()")
DIAG_ENTRY(EmptyInitStatement /* empty-init-stmt */, 6371, /* DiagArray298 */ 823, 0, R"()")
DIAG_ENTRY(anonymous_142 /* empty-translation-unit */, 6387, /* DiagArray299 */ 825, 0, R"()")
DIAG_ENTRY(anonymous_211 /* encode-type */, 6410, /* DiagArray300 */ 827, 0, R"()")
DIAG_ENTRY(anonymous_60 /* endif-labels */, 6422, 0, /* DiagSubGroup301 */ 270, R"()")
DIAG_ENTRY(EnumCompare /* enum-compare */, 6435, /* DiagArray302 */ 829, /* DiagSubGroup302 */ 272, R"()")
DIAG_ENTRY(EnumCompareConditional /* enum-compare-conditional */, 6448, /* DiagArray303 */ 831, /* DiagSubGroup303 */ 275, R"()")
DIAG_ENTRY(EnumCompareSwitch /* enum-compare-switch */, 6473, /* DiagArray304 */ 833, 0, R"()")
DIAG_ENTRY(anonymous_80 /* enum-constexpr-conversion */, 6493, /* DiagArray305 */ 835, 0, R"()")
DIAG_ENTRY(EnumConversion /* enum-conversion */, 6519, /* DiagArray306 */ 837, /* DiagSubGroup306 */ 277, R"()")
DIAG_ENTRY(EnumEnumConversion /* enum-enum-conversion */, 6535, /* DiagArray307 */ 839, /* DiagSubGroup307 */ 281, R"()")
DIAG_ENTRY(EnumFloatConversion /* enum-float-conversion */, 6556, /* DiagArray308 */ 841, /* DiagSubGroup308 */ 283, R"()")
DIAG_ENTRY(EnumTooLarge /* enum-too-large */, 6578, /* DiagArray309 */ 843, 0, R"()")
DIAG_ENTRY(Exceptions /* exceptions */, 6593, /* DiagArray310 */ 846, 0, R"()")
DIAG_ENTRY(ExcessInitializers /* excess-initializers */, 6604, /* DiagArray311 */ 850, 0, R"()")
DIAG_ENTRY(anonymous_161 /* excessive-regsave */, 6624, /* DiagArray312 */ 855, 0, R"()")
DIAG_ENTRY(ExitTimeDestructors /* exit-time-destructors */, 6642, /* DiagArray313 */ 857, 0, R"()")
DIAG_ENTRY(ExpansionToDefined /* expansion-to-defined */, 6664, /* DiagArray314 */ 859, 0, R"()")
DIAG_ENTRY(anonymous_300 /* experimental-header-units */, 6685, /* DiagArray315 */ 862, 0, R"()")
DIAG_ENTRY(ExplicitInitializeCall /* explicit-initialize-call */, 6711, /* DiagArray316 */ 864, 0, R"()")
DIAG_ENTRY(anonymous_245 /* explicit-ownership-type */, 6736, /* DiagArray317 */ 867, 0, R"()")
DIAG_ENTRY(ExplicitSpecializationStorageClass /* explicit-specialization-storage-class */, 6760, /* DiagArray318 */ 869, 0, R"()")
DIAG_ENTRY(ExportUnnamed /* export-unnamed */, 6798, 0, 0, R"()")
DIAG_ENTRY(ExternCCompat /* extern-c-compat */, 6813, /* DiagArray320 */ 871, 0, R"()")
DIAG_ENTRY(anonymous_240 /* extern-initializer */, 6829, /* DiagArray321 */ 873, 0, R"()")
DIAG_ENTRY(Extra /* extra */, 6848, 0, /* DiagSubGroup322 */ 285, R"()")
DIAG_ENTRY(anonymous_254 /* extra-qualification */, 6854, /* DiagArray323 */ 875, 0, R"()")
DIAG_ENTRY(ExtraSemi /* extra-semi */, 6874, /* DiagArray324 */ 877, /* DiagSubGroup324 */ 301, R"()")
DIAG_ENTRY(ExtraSemiStmt /* extra-semi-stmt */, 6885, /* DiagArray325 */ 880, /* DiagSubGroup325 */ 304, R"()")
DIAG_ENTRY(ExtraTokens /* extra-tokens */, 6901, /* DiagArray326 */ 882, 0, R"()")
DIAG_ENTRY(ExtractAPIMisuse /* extractapi-misuse */, 6914, /* DiagArray327 */ 885, 0, R"()")
DIAG_ENTRY(FinalDtorNonFinalClass /* final-dtor-non-final-class */, 6932, /* DiagArray328 */ 887, 0, R"()")
DIAG_ENTRY(FinalMacro /* final-macro */, 6959, /* DiagArray329 */ 889, 0, R"()")
DIAG_ENTRY(anonymous_144 /* fixed-enum-extension */, 6971, /* DiagArray330 */ 891, 0, R"()")
DIAG_ENTRY(anonymous_79 /* fixed-point-overflow */, 6992, /* DiagArray331 */ 893, 0, R"()")
DIAG_ENTRY(FlagEnum /* flag-enum */, 7013, /* DiagArray332 */ 895, 0, R"()")
DIAG_ENTRY(FlexibleArrayExtensions /* flexible-array-extensions */, 7023, /* DiagArray333 */ 897, 0, R"()")
DIAG_ENTRY(FloatConversion /* float-conversion */, 7049, /* DiagArray334 */ 900, /* DiagSubGroup334 */ 306, R"()")
DIAG_ENTRY(anonymous_247 /* float-equal */, 7066, /* DiagArray335 */ 902, 0, R"()")
DIAG_ENTRY(FloatOverflowConversion /* float-overflow-conversion */, 7078, /* DiagArray336 */ 904, 0, R"()")
DIAG_ENTRY(FloatZeroConversion /* float-zero-conversion */, 7104, /* DiagArray337 */ 907, 0, R"()")
DIAG_ENTRY(ForLoopAnalysis /* for-loop-analysis */, 7126, /* DiagArray338 */ 909, 0, R"()")
DIAG_ENTRY(Format /* format */, 7144, /* DiagArray339 */ 912, /* DiagSubGroup339 */ 309, R"()")
DIAG_ENTRY(FormatExtraArgs /* format-extra-args */, 7151, /* DiagArray340 */ 940, 0, R"()")
DIAG_ENTRY(FormatInsufficientArgs /* format-insufficient-args */, 7169, /* DiagArray341 */ 942, 0, R"()")
DIAG_ENTRY(FormatInvalidSpecifier /* format-invalid-specifier */, 7194, /* DiagArray342 */ 944, 0, R"()")
DIAG_ENTRY(FormatNonStandard /* format-non-iso */, 7219, /* DiagArray343 */ 946, 0, R"()")
DIAG_ENTRY(FormatNonLiteral /* format-nonliteral */, 7234, /* DiagArray344 */ 950, 0, R"()")
DIAG_ENTRY(FormatOverflow /* format-overflow */, 7252, /* DiagArray345 */ 952, /* DiagSubGroup345 */ 319, R"()")
DIAG_ENTRY(FormatOverflowNonKprintf /* format-overflow-non-kprintf */, 7268, /* DiagArray346 */ 954, 0, R"()")
DIAG_ENTRY(FormatPedantic /* format-pedantic */, 7296, /* DiagArray347 */ 956, 0, R"()")
DIAG_ENTRY(FormatSecurity /* format-security */, 7312, /* DiagArray348 */ 959, 0, R"()")
DIAG_ENTRY(FormatSignedness /* format-signedness */, 7328, /* DiagArray349 */ 961, 0, R"()")
DIAG_ENTRY(FormatTruncation /* format-truncation */, 7346, /* DiagArray350 */ 963, /* DiagSubGroup350 */ 321, R"()")
DIAG_ENTRY(FormatTruncationNonKprintf /* format-truncation-non-kprintf */, 7364, /* DiagArray351 */ 965, 0, R"()")
DIAG_ENTRY(FormatTypeConfusion /* format-type-confusion */, 7394, /* DiagArray352 */ 967, 0, R"()")
DIAG_ENTRY(FormatY2K /* format-y2k */, 7416, 0, 0, R"()")
DIAG_ENTRY(FormatZeroLength /* format-zero-length */, 7427, /* DiagArray354 */ 969, 0, R"()")
DIAG_ENTRY(Format2 /* format=2 */, 7446, 0, /* DiagSubGroup355 */ 323, R"()")
DIAG_ENTRY(FortifySource /* fortify-source */, 7455, /* DiagArray356 */ 971, /* DiagSubGroup356 */ 327, R"()")
DIAG_ENTRY(FourByteMultiChar /* four-char-constants */, 7470, /* DiagArray357 */ 976, 0, R"()")
DIAG_ENTRY(FrameAddress /* frame-address */, 7490, /* DiagArray358 */ 978, 0, R"()")
DIAG_ENTRY(BackendFrameLargerThan /* frame-larger-than */, 7504, /* DiagArray359 */ 980, 0, R"(More fine grained information about the stack layout is available by adding the
`-Rpass-analysis=stack-frame-layout` command-line flag to the compiler
invocation.

The diagnostic information can be saved to a file in a machine readable format,
like YAML by adding the `-foptimization-record-file=<file>` command-line flag.

Results can be filtered by function name by passing
`-mllvm -filter-print-funcs=foo`, where `foo` is the target function's name.

   .. code-block:: console

      clang -c a.cpp -Rpass-analysis=stack-frame-layout -mllvm -filter-print-funcs=foo

   .. code-block:: console

      clang -c a.cpp -Rpass-analysis=stack-frame-layout -foptimization-record-file=<file>)")
DIAG_ENTRY(anonymous_76 /* frame-larger-than= */, 7522, 0, /* DiagSubGroup360 */ 330, R"()")
DIAG_ENTRY(FrameworkIncludePrivateFromPublic /* framework-include-private-from-public */, 7541, /* DiagArray361 */ 983, 0, R"()")
DIAG_ENTRY(FreeNonHeapObject /* free-nonheap-object */, 7579, /* DiagArray362 */ 985, 0, R"()")
DIAG_ENTRY(anonymous_189 /* friend-enum */, 7599, /* DiagArray363 */ 987, 0, R"()")
DIAG_ENTRY(FunctionDefInObjCContainer /* function-def-in-objc-container */, 7611, /* DiagArray364 */ 989, 0, R"()")
DIAG_ENTRY(FunctionEffects /* function-effects */, 7642, /* DiagArray365 */ 991, 0, R"()")
DIAG_ENTRY(FunctionMultiVersioning /* function-multiversion */, 7659, /* DiagArray366 */ 996, /* DiagSubGroup366 */ 332, R"()")
DIAG_ENTRY(FUseLdPath /* fuse-ld-path */, 7681, /* DiagArray367 */ 1001, 0, R"()")
DIAG_ENTRY(FutureAttrs /* future-attribute-extensions */, 7694, 0, /* DiagSubGroup368 */ 334, R"()")
DIAG_ENTRY(FutureCompat /* future-compat */, 7722, 0, 0, R"()")
DIAG_ENTRY(GccCompat /* gcc-compat */, 7736, /* DiagArray370 */ 1003, 0, R"()")
DIAG_ENTRY(GlobalConstructors /* global-constructors */, 7747, /* DiagArray371 */ 1015, 0, R"(Emit a warning for each variable declaration that generates code run at startup.)")
DIAG_ENTRY(GlobalISel /* global-isel */, 7767, /* DiagArray372 */ 1018, 0, R"()")
DIAG_ENTRY(GNU /* gnu */, 7779, 0, /* DiagSubGroup373 */ 339, R"()")
DIAG_ENTRY(GNUAlignofExpression /* gnu-alignof-expression */, 7783, /* DiagArray374 */ 1021, 0, R"()")
DIAG_ENTRY(GNUAnonymousStruct /* gnu-anonymous-struct */, 7806, /* DiagArray375 */ 1023, 0, R"()")
DIAG_ENTRY(anonymous_257 /* gnu-array-member-paren-init */, 7827, /* DiagArray376 */ 1025, 0, R"()")
DIAG_ENTRY(GNUAutoType /* gnu-auto-type */, 7855, /* DiagArray377 */ 1027, 0, R"()")
DIAG_ENTRY(GNUBinaryLiteral /* gnu-binary-literal */, 7869, 0, 0, R"()")
DIAG_ENTRY(GNUCaseRange /* gnu-case-range */, 7888, /* DiagArray379 */ 1029, 0, R"()")
DIAG_ENTRY(GNUComplexInteger /* gnu-complex-integer */, 7903, /* DiagArray380 */ 1031, 0, R"()")
DIAG_ENTRY(GNUCompoundLiteralInitializer /* gnu-compound-literal-initializer */, 7923, /* DiagArray381 */ 1033, 0, R"()")
DIAG_ENTRY(GNUConditionalOmittedOperand /* gnu-conditional-omitted-operand */, 7956, /* DiagArray382 */ 1035, 0, R"()")
DIAG_ENTRY(GNUDesignator /* gnu-designator */, 7988, /* DiagArray383 */ 1037, 0, R"()")
DIAG_ENTRY(anonymous_1 /* gnu-empty-initializer */, 8003, 0, 0, R"()")
DIAG_ENTRY(GNUEmptyStruct /* gnu-empty-struct */, 8025, /* DiagArray385 */ 1041, 0, R"()")
DIAG_ENTRY(GNUFlexibleArrayInitializer /* gnu-flexible-array-initializer */, 8042, /* DiagArray386 */ 1045, 0, R"()")
DIAG_ENTRY(GNUFlexibleArrayUnionMember /* gnu-flexible-array-union-member */, 8073, /* DiagArray387 */ 1047, 0, R"()")
DIAG_ENTRY(GNUFoldingConstant /* gnu-folding-constant */, 8105, /* DiagArray388 */ 1049, 0, R"()")
DIAG_ENTRY(GNUImaginaryConstant /* gnu-imaginary-constant */, 8126, /* DiagArray389 */ 1053, 0, R"()")
DIAG_ENTRY(GNUIncludeNext /* gnu-include-next */, 8149, /* DiagArray390 */ 1055, 0, R"()")
DIAG_ENTRY(anonymous_212 /* gnu-inline-cpp-without-extern */, 8166, /* DiagArray391 */ 1057, 0, R"()")
DIAG_ENTRY(GNULabelsAsValue /* gnu-label-as-value */, 8196, /* DiagArray392 */ 1059, 0, R"()")
DIAG_ENTRY(GNULineMarker /* gnu-line-marker */, 8215, /* DiagArray393 */ 1062, 0, R"()")
DIAG_ENTRY(GNUNullPointerArithmetic /* gnu-null-pointer-arithmetic */, 8231, /* DiagArray394 */ 1064, 0, R"()")
DIAG_ENTRY(GNUOffsetofExtensions /* gnu-offsetof-extensions */, 8259, 0, 0, R"()")
DIAG_ENTRY(GNUPointerArith /* gnu-pointer-arith */, 8283, /* DiagArray396 */ 1066, 0, R"()")
DIAG_ENTRY(GNURedeclaredEnum /* gnu-redeclared-enum */, 8301, /* DiagArray397 */ 1070, 0, R"()")
DIAG_ENTRY(GNUStatementExpression /* gnu-statement-expression */, 8321, /* DiagArray398 */ 1072, /* DiagSubGroup398 */ 371, R"()")
DIAG_ENTRY(GNUStatementExpressionFromMacroExpansion /* gnu-statement-expression-from-macro-expansion */, 8346, /* DiagArray399 */ 1074, 0, R"()")
DIAG_ENTRY(GNUStaticFloatInit /* gnu-static-float-init */, 8392, /* DiagArray400 */ 1076, 0, R"()")
DIAG_ENTRY(GNUStringLiteralOperatorTemplate /* gnu-string-literal-operator-template */, 8414, /* DiagArray401 */ 1078, 0, R"()")
DIAG_ENTRY(GNUUnionCast /* gnu-union-cast */, 8451, /* DiagArray402 */ 1080, 0, R"()")
DIAG_ENTRY(GNUVariableSizedTypeNotAtEnd /* gnu-variable-sized-type-not-at-end */, 8466, /* DiagArray403 */ 1082, 0, R"()")
DIAG_ENTRY(GNUZeroLineDirective /* gnu-zero-line-directive */, 8501, /* DiagArray404 */ 1084, 0, R"()")
DIAG_ENTRY(GNUZeroVariadicMacroArguments /* gnu-zero-variadic-macro-arguments */, 8525, /* DiagArray405 */ 1086, 0, R"()")
DIAG_ENTRY(anonymous_276 /* gpu-maybe-wrong-side */, 8559, /* DiagArray406 */ 1088, 0, R"()")
DIAG_ENTRY(anonymous_141 /* header-guard */, 8580, /* DiagArray407 */ 1090, 0, R"()")
DIAG_ENTRY(HeaderHygiene /* header-hygiene */, 8593, /* DiagArray408 */ 1092, 0, R"()")
DIAG_ENTRY(anonymous_83 /* higher-precision-fp */, 8608, /* DiagArray409 */ 1094, 0, R"()")
DIAG_ENTRY(HIPOpenMPOffloading /* hip-omp-target-directives */, 8628, /* DiagArray410 */ 1096, 0, R"()")
DIAG_ENTRY(HIPOnly /* hip-only */, 8654, /* DiagArray411 */ 1098, 0, R"()")
DIAG_ENTRY(HLSLAvailability /* hlsl-availability */, 8663, /* DiagArray412 */ 1100, 0, R"()")
DIAG_ENTRY(HLSLExtension /* hlsl-extensions */, 8681, /* DiagArray413 */ 1103, 0, R"()")
DIAG_ENTRY(anonymous_271 /* idiomatic-parentheses */, 8697, /* DiagArray414 */ 1105, 0, R"()")
DIAG_ENTRY(IgnoredAttributes /* ignored-attributes */, 8719, /* DiagArray415 */ 1107, 0, R"()")
DIAG_ENTRY(anonymous_215 /* ignored-availability-without-sdk-settings */, 8738, /* DiagArray416 */ 1197, 0, R"()")
DIAG_ENTRY(IgnoredGCH /* ignored-gch */, 8780, /* DiagArray417 */ 1199, 0, R"()")
DIAG_ENTRY(IgnoredOptimizationArgument /* ignored-optimization-argument */, 8792, /* DiagArray418 */ 1202, 0, R"()")
DIAG_ENTRY(IgnoredPragmaIntrinsic /* ignored-pragma-intrinsic */, 8822, /* DiagArray419 */ 1205, 0, R"()")
DIAG_ENTRY(IgnoredPragmaOptimize /* ignored-pragma-optimize */, 8847, 0, 0, R"()")
DIAG_ENTRY(IgnoredPragmas /* ignored-pragmas */, 8871, /* DiagArray421 */ 1207, /* DiagSubGroup421 */ 373, R"()")
DIAG_ENTRY(IgnoredQualifiers /* ignored-qualifiers */, 8887, /* DiagArray422 */ 1257, /* DiagSubGroup422 */ 376, R"()")
DIAG_ENTRY(IgnoredReferenceQualifiers /* ignored-reference-qualifiers */, 8906, /* DiagArray423 */ 1262, 0, R"()")
DIAG_ENTRY(Implicit /* implicit */, 8935, 0, /* DiagSubGroup424 */ 378, R"()")
DIAG_ENTRY(ImplicitAtomic /* implicit-atomic-properties */, 8944, /* DiagArray425 */ 1264, 0, R"()")
DIAG_ENTRY(ImplicitConstIntFloatConversion /* implicit-const-int-float-conversion */, 8971, /* DiagArray426 */ 1267, 0, R"()")
DIAG_ENTRY(ImplicitConversionFloatingPointToBool /* implicit-conversion-floating-point-to-bool */, 9007, /* DiagArray427 */ 1269, 0, R"()")
DIAG_ENTRY(anonymous_288 /* implicit-exception-spec-mismatch */, 9050, /* DiagArray428 */ 1271, 0, R"()")
DIAG_ENTRY(ImplicitFallthrough /* implicit-fallthrough */, 9083, /* DiagArray429 */ 1273, /* DiagSubGroup429 */ 381, R"()")
DIAG_ENTRY(ImplicitFallthroughPerFunction /* implicit-fallthrough-per-function */, 9104, /* DiagArray430 */ 1275, 0, R"()")
DIAG_ENTRY(ImplicitFixedPointConversion /* implicit-fixed-point-conversion */, 9138, /* DiagArray431 */ 1277, 0, R"()")
DIAG_ENTRY(ImplicitFloatConversion /* implicit-float-conversion */, 9170, /* DiagArray432 */ 1279, /* DiagSubGroup432 */ 383, R"()")
DIAG_ENTRY(ImplicitFunctionDeclare /* implicit-function-declaration */, 9196, /* DiagArray433 */ 1282, 0, R"()")
DIAG_ENTRY(ImplicitInt /* implicit-int */, 9226, /* DiagArray434 */ 1288, 0, R"()")
DIAG_ENTRY(ImplicitIntConversion /* implicit-int-conversion */, 9239, /* DiagArray435 */ 1292, /* DiagSubGroup435 */ 386, R"()")
DIAG_ENTRY(ImplicitIntFloatConversion /* implicit-int-float-conversion */, 9263, /* DiagArray436 */ 1295, /* DiagSubGroup436 */ 389, R"()")
DIAG_ENTRY(anonymous_184 /* implicit-retain-self */, 9293, /* DiagArray437 */ 1297, 0, R"()")
DIAG_ENTRY(ImplicitlyUnsignedLiteral /* implicitly-unsigned-literal */, 9314, /* DiagArray438 */ 1299, 0, R"()")
DIAG_ENTRY(anonymous_30 /* import */, 9342, 0, 0, R"()")
DIAG_ENTRY(anonymous_134 /* import-preprocessor-directive-pedantic */, 9349, /* DiagArray440 */ 1301, 0, R"()")
DIAG_ENTRY(anonymous_285 /* inaccessible-base */, 9388, /* DiagArray441 */ 1303, 0, R"()")
DIAG_ENTRY(anonymous_140 /* include-angled-in-module-purview */, 9406, /* DiagArray442 */ 1305, 0, R"()")
DIAG_ENTRY(anonymous_124 /* include-next-absolute-path */, 9439, /* DiagArray443 */ 1307, 0, R"()")
DIAG_ENTRY(anonymous_123 /* include-next-outside-header */, 9466, /* DiagArray444 */ 1309, 0, R"()")
DIAG_ENTRY(IncompatibleExceptionSpec /* incompatible-exception-spec */, 9494, /* DiagArray445 */ 1311, 0, R"()")
DIAG_ENTRY(IncompatibleFunctionPointerTypes /* incompatible-function-pointer-types */, 9522, /* DiagArray446 */ 1314, 0, R"()")
DIAG_ENTRY(anonymous_273 /* incompatible-function-pointer-types-strict */, 9558, /* DiagArray447 */ 1316, 0, R"()")
DIAG_ENTRY(anonymous_167 /* incompatible-library-redeclaration */, 9601, /* DiagArray448 */ 1318, 0, R"()")
DIAG_ENTRY(IncompatibleMSPragmaSection /* incompatible-ms-pragma-section */, 9636, /* DiagArray449 */ 1320, 0, R"()")
DIAG_ENTRY(IncompatibleMSStruct /* incompatible-ms-struct */, 9667, /* DiagArray450 */ 1322, 0, R"()")
DIAG_ENTRY(IncompatiblePointerTypes /* incompatible-pointer-types */, 9690, /* DiagArray451 */ 1325, /* DiagSubGroup451 */ 391, R"()")
DIAG_ENTRY(IncompatiblePointerTypesDiscardsQualifiers /* incompatible-pointer-types-discards-qualifiers */, 9717, /* DiagArray452 */ 1327, 0, R"()")
DIAG_ENTRY(anonymous_174 /* incompatible-property-type */, 9764, /* DiagArray453 */ 1331, 0, R"()")
DIAG_ENTRY(anonymous_96 /* incompatible-sysroot */, 9791, /* DiagArray454 */ 1333, 0, R"()")
DIAG_ENTRY(IncompleteFrameworkModuleDeclaration /* incomplete-framework-module-declaration */, 9812, /* DiagArray455 */ 1335, 0, R"()")
DIAG_ENTRY(anonymous_176 /* incomplete-implementation */, 9852, /* DiagArray456 */ 1337, 0, R"()")
DIAG_ENTRY(IncompleteModule /* incomplete-module */, 9878, 0, /* DiagSubGroup457 */ 394, R"()")
DIAG_ENTRY(anonymous_166 /* incomplete-setjmp-declaration */, 9896, /* DiagArray458 */ 1339, 0, R"()")
DIAG_ENTRY(IncompleteUmbrella /* incomplete-umbrella */, 9926, /* DiagArray459 */ 1341, 0, R"()")
DIAG_ENTRY(MicrosoftInconsistentDllImport /* inconsistent-dllimport */, 9946, /* DiagArray460 */ 1345, 0, R"()")
DIAG_ENTRY(CXX11WarnInconsistentOverrideDestructor /* inconsistent-missing-destructor-override */, 9969, /* DiagArray461 */ 1348, 0, R"()")
DIAG_ENTRY(CXX11WarnInconsistentOverrideMethod /* inconsistent-missing-override */, 10010, /* DiagArray462 */ 1350, 0, R"()")
DIAG_ENTRY(IncrementBool /* increment-bool */, 10040, /* DiagArray463 */ 1352, /* DiagSubGroup463 */ 397, R"()")
DIAG_ENTRY(InfiniteRecursion /* infinite-recursion */, 10055, /* DiagArray464 */ 1354, 0, R"()")
DIAG_ENTRY(anonymous_31 /* init-self */, 10074, 0, 0, R"()")
DIAG_ENTRY(InitializerOverrides /* initializer-overrides */, 10084, /* DiagArray466 */ 1356, 0, R"()")
DIAG_ENTRY(anonymous_193 /* injected-class-name */, 10106, /* DiagArray467 */ 1360, 0, R"()")
DIAG_ENTRY(anonymous_32 /* inline */, 10126, 0, 0, R"()")
DIAG_ENTRY(BackendInlineAsm /* inline-asm */, 10133, /* DiagArray469 */ 1362, 0, R"()")
DIAG_ENTRY(InlineNamespaceReopenedNoninline /* inline-namespace-reopened-noninline */, 10144, /* DiagArray470 */ 1364, 0, R"()")
DIAG_ENTRY(anonymous_286 /* inline-new-delete */, 10180, /* DiagArray471 */ 1366, 0, R"()")
DIAG_ENTRY(InstallAPIViolation /* installapi-violation */, 10198, /* DiagArray472 */ 1368, 0, R"()")
DIAG_ENTRY(anonymous_229 /* instantiation-after-specialization */, 10219, /* DiagArray473 */ 1382, 0, R"()")
DIAG_ENTRY(IntConversion /* int-conversion */, 10254, /* DiagArray474 */ 1384, 0, R"()")
DIAG_ENTRY(anonymous_65 /* int-conversions */, 10269, 0, /* DiagSubGroup475 */ 399, R"()")
DIAG_ENTRY(IntInBoolContext /* int-in-bool-context */, 10285, /* DiagArray476 */ 1387, 0, R"()")
DIAG_ENTRY(IntToPointerCast /* int-to-pointer-cast */, 10305, /* DiagArray477 */ 1390, /* DiagSubGroup477 */ 401, R"()")
DIAG_ENTRY(IntToVoidPointerCast /* int-to-void-pointer-cast */, 10325, /* DiagArray478 */ 1392, 0, R"()")
DIAG_ENTRY(anonymous_78 /* integer-overflow */, 10350, /* DiagArray479 */ 1394, 0, R"()")
DIAG_ENTRY(InvalidCommandLineArgument /* invalid-command-line-argument */, 10367, /* DiagArray480 */ 1396, /* DiagSubGroup480 */ 403, R"()")
DIAG_ENTRY(anonymous_196 /* invalid-constexpr */, 10397, /* DiagArray481 */ 1408, 0, R"()")
DIAG_ENTRY(anonymous_88 /* invalid-feature-combination */, 10415, /* DiagArray482 */ 1410, 0, R"()")
DIAG_ENTRY(ObjCInvalidIBOutletProperty /* invalid-iboutlet */, 10443, /* DiagArray483 */ 1412, 0, R"()")
DIAG_ENTRY(anonymous_209 /* invalid-initializer-from-system-header */, 10460, /* DiagArray484 */ 1415, 0, R"()")
DIAG_ENTRY(InvalidIOSDeploymentTarget /* invalid-ios-deployment-target */, 10499, /* DiagArray485 */ 1417, 0, R"()")
DIAG_ENTRY(anonymous_221 /* invalid-no-builtin-names */, 10529, /* DiagArray486 */ 1419, 0, R"()")
DIAG_ENTRY(InvalidNoreturn /* invalid-noreturn */, 10554, /* DiagArray487 */ 1421, 0, R"()")
DIAG_ENTRY(InvalidOffsetof /* invalid-offsetof */, 10571, /* DiagArray488 */ 1424, 0, R"()")
DIAG_ENTRY(InvalidOrNonExistentDirectory /* invalid-or-nonexistent-directory */, 10588, /* DiagArray489 */ 1427, 0, R"()")
DIAG_ENTRY(anonymous_227 /* invalid-partial-specialization */, 10621, /* DiagArray490 */ 1429, 0, R"()")
DIAG_ENTRY(anonymous_33 /* invalid-pch */, 10652, 0, 0, R"()")
DIAG_ENTRY(InvalidPPToken /* invalid-pp-token */, 10664, /* DiagArray492 */ 1431, 0, R"()")
DIAG_ENTRY(InvalidSourceEncoding /* invalid-source-encoding */, 10681, /* DiagArray493 */ 1434, 0, R"()")
DIAG_ENTRY(anonymous_187 /* invalid-static-assert-message */, 10705, /* DiagArray494 */ 1437, 0, R"()")
DIAG_ENTRY(anonymous_137 /* invalid-token-paste */, 10735, /* DiagArray495 */ 1439, 0, R"()")
DIAG_ENTRY(anonymous_122 /* invalid-unevaluated-string */, 10755, /* DiagArray496 */ 1441, 0, R"()")
DIAG_ENTRY(anonymous_115 /* invalid-utf8 */, 10782, /* DiagArray497 */ 1443, 0, R"()")
DIAG_ENTRY(anonymous_268 /* jump-seh-finally */, 10795, /* DiagArray498 */ 1445, 0, R"()")
DIAG_ENTRY(KeywordCompat /* keyword-compat */, 10812, /* DiagArray499 */ 1447, 0, R"()")
DIAG_ENTRY(KeywordAsMacro /* keyword-macro */, 10827, /* DiagArray500 */ 1449, 0, R"()")
DIAG_ENTRY(KNRPromotedParameter /* knr-promoted-parameter */, 10841, /* DiagArray501 */ 1451, 0, R"()")
DIAG_ENTRY(anonymous_114 /* language-extension-token */, 10864, /* DiagArray502 */ 1453, 0, R"()")
DIAG_ENTRY(LargeByValueCopy /* large-by-value-copy */, 10889, /* DiagArray503 */ 1455, 0, R"()")
DIAG_ENTRY(LibLTO /* liblto */, 10909, 0, 0, R"()")
DIAG_ENTRY(LinkerWarnings /* linker-warnings */, 10916, /* DiagArray505 */ 1458, 0, R"()")
DIAG_ENTRY(LiteralConversion /* literal-conversion */, 10932, /* DiagArray506 */ 1460, 0, R"()")
DIAG_ENTRY(LiteralRange /* literal-range */, 10951, /* DiagArray507 */ 1463, 0, R"()")
DIAG_ENTRY(LocalTypeTemplateArgs /* local-type-template-args */, 10965, /* DiagArray508 */ 1467, /* DiagSubGroup508 */ 405, R"()")
DIAG_ENTRY(LogicalNotParentheses /* logical-not-parentheses */, 10990, /* DiagArray509 */ 1469, 0, R"()")
DIAG_ENTRY(LogicalOpParentheses /* logical-op-parentheses */, 11014, /* DiagArray510 */ 1471, 0, R"()")
DIAG_ENTRY(LongLong /* long-long */, 11037, /* DiagArray511 */ 1473, /* DiagSubGroup511 */ 407, R"()")
DIAG_ENTRY(LoopAnalysis /* loop-analysis */, 11047, 0, /* DiagSubGroup512 */ 409, R"()")
DIAG_ENTRY(MacroRedefined /* macro-redefined */, 11061, /* DiagArray513 */ 1475, 0, R"()")
DIAG_ENTRY(Main /* main */, 11077, /* DiagArray514 */ 1477, 0, R"()")
DIAG_ENTRY(MainReturnType /* main-return-type */, 11082, /* DiagArray515 */ 1485, 0, R"()")
DIAG_ENTRY(MalformedWarningCheck /* malformed-warning-check */, 11099, /* DiagArray516 */ 1487, 0, R"()")
DIAG_ENTRY(anonymous_242 /* many-braces-around-scalar-init */, 11123, /* DiagArray517 */ 1489, 0, R"()")
DIAG_ENTRY(anonymous_119 /* mathematical-notation-identifier-extension */, 11154, /* DiagArray518 */ 1491, 0, R"()")
DIAG_ENTRY(MaxTokens /* max-tokens */, 11197, /* DiagArray519 */ 1493, 0, R"(The warning is issued if the number of pre-processor tokens exceeds
the token limit, which can be set in three ways:

1. As a limit at a specific point in a file, using the ``clang max_tokens_here``
   pragma:

   .. code-block:: c++

      #pragma clang max_tokens_here 1234

2. As a per-translation unit limit, using the ``-fmax-tokens=`` command-line
   flag:

   .. code-block:: console

      clang -c a.cpp -fmax-tokens=1234

3. As a per-translation unit limit using the ``clang max_tokens_total`` pragma,
   which works like and overrides the ``-fmax-tokens=`` flag:

   .. code-block:: c++

      #pragma clang max_tokens_total 1234

These limits can be helpful in limiting code growth through included files.

Setting a token limit of zero means no limit.

Note that the warning is disabled by default, so -Wmax-tokens must be used
in addition with the pragmas or -fmax-tokens flag to get any warnings.)")
DIAG_ENTRY(MaxUnsignedZero /* max-unsigned-zero */, 11208, /* DiagArray520 */ 1496, 0, R"()")
DIAG_ENTRY(MemsetTransposedArgs /* memset-transposed-args */, 11226, /* DiagArray521 */ 1498, 0, R"()")
DIAG_ENTRY(anonymous_169 /* memsize-comparison */, 11249, /* DiagArray522 */ 1500, 0, R"()")
DIAG_ENTRY(MethodSignatures /* method-signatures */, 11268, /* DiagArray523 */ 1502, 0, R"()")
DIAG_ENTRY(Microsoft /* microsoft */, 11286, 0, /* DiagSubGroup524 */ 412, R"()")
DIAG_ENTRY(MicrosoftAbstract /* microsoft-abstract */, 11296, /* DiagArray525 */ 1505, 0, R"()")
DIAG_ENTRY(MicrosoftAnonTag /* microsoft-anon-tag */, 11315, /* DiagArray526 */ 1507, 0, R"()")
DIAG_ENTRY(MicrosoftCast /* microsoft-cast */, 11334, /* DiagArray527 */ 1510, 0, R"()")
DIAG_ENTRY(MicrosoftCharize /* microsoft-charize */, 11349, /* DiagArray528 */ 1513, 0, R"()")
DIAG_ENTRY(MicrosoftCommentPaste /* microsoft-comment-paste */, 11367, /* DiagArray529 */ 1515, 0, R"()")
DIAG_ENTRY(MicrosoftConstInit /* microsoft-const-init */, 11391, /* DiagArray530 */ 1517, 0, R"()")
DIAG_ENTRY(MicrosoftCppMacro /* microsoft-cpp-macro */, 11412, /* DiagArray531 */ 1519, 0, R"()")
DIAG_ENTRY(MicrosoftDefaultArgRedefinition /* microsoft-default-arg-redefinition */, 11432, /* DiagArray532 */ 1521, 0, R"()")
DIAG_ENTRY(MicrosoftDrectveSection /* microsoft-drectve-section */, 11467, /* DiagArray533 */ 1523, 0, R"()")
DIAG_ENTRY(MicrosoftEndOfFile /* microsoft-end-of-file */, 11493, /* DiagArray534 */ 1525, 0, R"()")
DIAG_ENTRY(MicrosoftEnumForwardReference /* microsoft-enum-forward-reference */, 11515, /* DiagArray535 */ 1527, 0, R"()")
DIAG_ENTRY(MicrosoftEnumValue /* microsoft-enum-value */, 11548, /* DiagArray536 */ 1529, 0, R"()")
DIAG_ENTRY(MicrosoftExceptionSpec /* microsoft-exception-spec */, 11569, /* DiagArray537 */ 1531, 0, R"()")
DIAG_ENTRY(anonymous_147 /* microsoft-exists */, 11594, /* DiagArray538 */ 1537, 0, R"()")
DIAG_ENTRY(MicrosoftExplicitConstructorCall /* microsoft-explicit-constructor-call */, 11611, /* DiagArray539 */ 1539, 0, R"()")
DIAG_ENTRY(MicrosoftExtraQualification /* microsoft-extra-qualification */, 11647, /* DiagArray540 */ 1541, 0, R"()")
DIAG_ENTRY(MicrosoftFixedEnum /* microsoft-fixed-enum */, 11677, /* DiagArray541 */ 1543, 0, R"()")
DIAG_ENTRY(MicrosoftFlexibleArray /* microsoft-flexible-array */, 11698, /* DiagArray542 */ 1545, 0, R"()")
DIAG_ENTRY(MicrosoftGoto /* microsoft-goto */, 11723, /* DiagArray543 */ 1548, 0, R"()")
DIAG_ENTRY(MicrosoftInaccessibleBase /* microsoft-inaccessible-base */, 11738, /* DiagArray544 */ 1550, 0, R"()")
DIAG_ENTRY(MicrosoftInclude /* microsoft-include */, 11766, /* DiagArray545 */ 1552, 0, R"()")
DIAG_ENTRY(MicrosoftInitFromPredefined /* microsoft-init-from-predefined */, 11784, /* DiagArray546 */ 1554, 0, R"()")
DIAG_ENTRY(MicrosoftMutableReference /* microsoft-mutable-reference */, 11815, /* DiagArray547 */ 1556, 0, R"()")
DIAG_ENTRY(MicrosoftPureDefinition /* microsoft-pure-definition */, 11843, /* DiagArray548 */ 1558, 0, R"()")
DIAG_ENTRY(MicrosoftRedeclareStatic /* microsoft-redeclare-static */, 11869, /* DiagArray549 */ 1560, 0, R"()")
DIAG_ENTRY(MicrosoftSealed /* microsoft-sealed */, 11896, /* DiagArray550 */ 1562, 0, R"()")
DIAG_ENTRY(MicrosoftStaticAssert /* microsoft-static-assert */, 11913, /* DiagArray551 */ 1564, 0, R"()")
DIAG_ENTRY(MicrosoftStringLiteralFromPredefined /* microsoft-string-literal-from-predefined */, 11937, /* DiagArray552 */ 1566, 0, R"()")
DIAG_ENTRY(MicrosoftTemplate /* microsoft-template */, 11978, /* DiagArray553 */ 1568, /* DiagSubGroup553 */ 445, R"()")
DIAG_ENTRY(MicrosoftTemplateShadow /* microsoft-template-shadow */, 11997, /* DiagArray554 */ 1579, 0, R"()")
DIAG_ENTRY(MicrosoftUnionMemberReference /* microsoft-union-member-reference */, 12023, /* DiagArray555 */ 1581, 0, R"()")
DIAG_ENTRY(MicrosoftUnqualifiedFriend /* microsoft-unqualified-friend */, 12056, /* DiagArray556 */ 1583, 0, R"()")
DIAG_ENTRY(MicrosoftUsingDecl /* microsoft-using-decl */, 12085, /* DiagArray557 */ 1585, 0, R"()")
DIAG_ENTRY(MicrosoftVoidPseudoDtor /* microsoft-void-pseudo-dtor */, 12106, /* DiagArray558 */ 1587, 0, R"()")
DIAG_ENTRY(MisExpect /* misexpect */, 12133, /* DiagArray559 */ 1589, 0, R"()")
DIAG_ENTRY(MisleadingIndentation /* misleading-indentation */, 12143, /* DiagArray560 */ 1591, 0, R"()")
DIAG_ENTRY(anonymous_264 /* mismatched-new-delete */, 12166, /* DiagArray561 */ 1593, 0, R"()")
DIAG_ENTRY(MismatchedParameterTypes /* mismatched-parameter-types */, 12188, /* DiagArray562 */ 1595, 0, R"()")
DIAG_ENTRY(MismatchedReturnTypes /* mismatched-return-types */, 12215, /* DiagArray563 */ 1597, 0, R"()")
DIAG_ENTRY(MismatchedTags /* mismatched-tags */, 12239, /* DiagArray564 */ 1599, 0, R"()")
DIAG_ENTRY(MissingBraces /* missing-braces */, 12255, /* DiagArray565 */ 1602, 0, R"()")
DIAG_ENTRY(anonymous_282 /* missing-constinit */, 12270, /* DiagArray566 */ 1604, 0, R"()")
DIAG_ENTRY(MissingDeclarations /* missing-declarations */, 12288, /* DiagArray567 */ 1606, 0, R"()")
DIAG_ENTRY(MissingDesignatedFieldInitializers /* missing-designated-field-initializers */, 12309, /* DiagArray568 */ 1611, 0, R"(Warn about designated initializers with some fields missing (only in C++).)")
DIAG_ENTRY(anonymous_192 /* missing-exception-spec */, 12347, /* DiagArray569 */ 1613, 0, R"()")
DIAG_ENTRY(MissingFieldInitializers /* missing-field-initializers */, 12370, /* DiagArray570 */ 1615, /* DiagSubGroup570 */ 447, R"()")
DIAG_ENTRY(anonymous_34 /* missing-format-attribute */, 12397, 0, 0, R"()")
DIAG_ENTRY(MissingIncludeDirs /* missing-include-dirs */, 12422, /* DiagArray572 */ 1617, 0, R"()")
DIAG_ENTRY(MissingMethodReturnType /* missing-method-return-type */, 12443, /* DiagArray573 */ 1619, 0, R"()")
DIAG_ENTRY(anonymous_104 /* missing-multilib */, 12470, /* DiagArray574 */ 1621, 0, R"()")
DIAG_ENTRY(MissingNoEscape /* missing-noescape */, 12487, /* DiagArray575 */ 1623, 0, R"()")
DIAG_ENTRY(MissingNoreturn /* missing-noreturn */, 12504, /* DiagArray576 */ 1625, 0, R"()")
DIAG_ENTRY(anonymous_213 /* missing-prototype-for-cc */, 12521, /* DiagArray577 */ 1628, 0, R"()")
DIAG_ENTRY(anonymous_231 /* missing-prototypes */, 12546, /* DiagArray578 */ 1630, 0, R"()")
DIAG_ENTRY(anonymous_148 /* missing-selector-name */, 12565, /* DiagArray579 */ 1632, 0, R"()")
DIAG_ENTRY(anonymous_95 /* missing-sysroot */, 12587, /* DiagArray580 */ 1634, 0, R"()")
DIAG_ENTRY(anonymous_155 /* missing-template-arg-list-after-template-kw */, 12603, /* DiagArray581 */ 1636, 0, R"()")
DIAG_ENTRY(anonymous_232 /* missing-variable-declarations */, 12647, /* DiagArray582 */ 1638, 0, R"()")
DIAG_ENTRY(MisspelledAssumption /* misspelled-assumption */, 12677, /* DiagArray583 */ 1640, 0, R"()")
DIAG_ENTRY(HLSLMixPackOffset /* mix-packoffset */, 12699, /* DiagArray584 */ 1642, 0, R"()")
DIAG_ENTRY(ModuleBuild /* module-build */, 12714, /* DiagArray585 */ 1644, 0, R"()")
DIAG_ENTRY(ModuleConflict /* module-conflict */, 12727, /* DiagArray586 */ 1649, 0, R"()")
DIAG_ENTRY(anonymous_109 /* module-file-config-mismatch */, 12743, /* DiagArray587 */ 1652, 0, R"()")
DIAG_ENTRY(ModuleFileExtension /* module-file-extension */, 12771, /* DiagArray588 */ 1654, 0, R"()")
DIAG_ENTRY(ModuleImport /* module-import */, 12793, /* DiagArray589 */ 1656, 0, R"()")
DIAG_ENTRY(anonymous_298 /* module-import-in-extern-c */, 12807, /* DiagArray590 */ 1658, 0, R"()")
DIAG_ENTRY(ModuleIncludeDirectiveTranslation /* module-include-translation */, 12833, /* DiagArray591 */ 1660, 0, R"()")
DIAG_ENTRY(ModuleLock /* module-lock */, 12860, /* DiagArray592 */ 1662, 0, R"()")
DIAG_ENTRY(anonymous_301 /* modules-ambiguous-internal-linkage */, 12872, /* DiagArray593 */ 1664, 0, R"()")
DIAG_ENTRY(anonymous_299 /* modules-import-nested-redundant */, 12907, /* DiagArray594 */ 1666, 0, R"()")
DIAG_ENTRY(Most /* most */, 12939, 0, /* DiagSubGroup595 */ 449, R"()")
DIAG_ENTRY(Move /* move */, 12944, 0, /* DiagSubGroup596 */ 487, R"()")
DIAG_ENTRY(anonymous_75 /* msvc-include */, 12949, 0, /* DiagSubGroup597 */ 492, R"()")
DIAG_ENTRY(anonymous_100 /* msvc-not-found */, 12962, /* DiagArray598 */ 1668, 0, R"()")
DIAG_ENTRY(MultiGPU /* multi-gpu */, 12977, /* DiagArray599 */ 1670, 0, R"()")
DIAG_ENTRY(MultiChar /* multichar */, 12987, /* DiagArray600 */ 1672, 0, R"()")
DIAG_ENTRY(anonymous_287 /* multiple-move-vbase */, 12997, /* DiagArray601 */ 1674, 0, R"()")
DIAG_ENTRY(anonymous_84 /* nan-infinity-disabled */, 13017, /* DiagArray602 */ 1676, 0, R"(This warning is enabled when source code using the macros ``INFINITY`` or ``NAN``
is compiled with floating-point options preventing these two values. This can
lead to undefined behavior. Check the order of command line arguments that modify
this behavior, such as ``-ffast-math``, ``-fhonor-infinities``, and
``-fhonor-nans`` (etc), as well as ``#pragma`` directives if this diagnostic is
generated unexpectedly.)")
DIAG_ENTRY(anonymous_24 /* narrowing */, 13039, 0, /* DiagSubGroup603 */ 494, R"()")
DIAG_ENTRY(anonymous_284 /* nested-anon-types */, 13049, /* DiagArray604 */ 1678, 0, R"()")
DIAG_ENTRY(anonymous_35 /* nested-externs */, 13067, 0, 0, R"()")
DIAG_ENTRY(OperatorNewReturnsNull /* new-returns-null */, 13082, /* DiagArray606 */ 1680, 0, R"()")
DIAG_ENTRY(NewlineEOF /* newline-eof */, 13099, /* DiagArray607 */ 1682, 0, R"()")
DIAG_ENTRY(NoDeref /* noderef */, 13111, /* DiagArray608 */ 1685, 0, R"()")
DIAG_ENTRY(NoexceptType /* noexcept-type */, 13119, 0, /* DiagSubGroup609 */ 496, R"()")
DIAG_ENTRY(anonymous_172 /* non-c-typedef-for-linkage */, 13133, /* DiagArray610 */ 1689, 0, R"()")
DIAG_ENTRY(NonGCC /* non-gcc */, 13159, 0, /* DiagSubGroup611 */ 498, R"()")
DIAG_ENTRY(NonLiteralNullConversion /* non-literal-null-conversion */, 13167, /* DiagArray612 */ 1691, 0, R"()")
DIAG_ENTRY(NonModularIncludeInFrameworkModule /* non-modular-include-in-framework-module */, 13195, /* DiagArray613 */ 1693, 0, R"()")
DIAG_ENTRY(NonModularIncludeInModule /* non-modular-include-in-module */, 13235, /* DiagArray614 */ 1695, /* DiagSubGroup614 */ 502, R"()")
DIAG_ENTRY(NonPODVarargs /* non-pod-varargs */, 13265, /* DiagArray615 */ 1697, 0, R"()")
DIAG_ENTRY(anonymous_204 /* non-power-of-two-alignment */, 13281, /* DiagArray616 */ 1702, 0, R"()")
DIAG_ENTRY(NonVirtualDtor /* non-virtual-dtor */, 13308, /* DiagArray617 */ 1704, 0, R"()")
DIAG_ENTRY(NonNull /* nonnull */, 13325, /* DiagArray618 */ 1706, 0, R"()")
DIAG_ENTRY(anonymous_37 /* nonportable-cfstrings */, 13333, 0, 0, R"()")
DIAG_ENTRY(anonymous_125 /* nonportable-include-path */, 13355, /* DiagArray620 */ 1709, 0, R"()")
DIAG_ENTRY(anonymous_91 /* nonportable-private-apinotes-path */, 13380, /* DiagArray621 */ 1711, 0, R"()")
DIAG_ENTRY(anonymous_92 /* nonportable-private-system-apinotes-path */, 13414, /* DiagArray622 */ 1713, 0, R"()")
DIAG_ENTRY(anonymous_126 /* nonportable-system-include-path */, 13455, /* DiagArray623 */ 1715, 0, R"()")
DIAG_ENTRY(anonymous_293 /* nonportable-vector-initialization */, 13487, /* DiagArray624 */ 1717, 0, R"()")
DIAG_ENTRY(NonTrivialMemaccess /* nontrivial-memaccess */, 13521, /* DiagArray625 */ 1719, 0, R"()")
DIAG_ENTRY(NSConsumedMismatch /* nsconsumed-mismatch */, 13542, /* DiagArray626 */ 1721, 0, R"()")
DIAG_ENTRY(NSReturnsMismatch /* nsreturns-mismatch */, 13562, /* DiagArray627 */ 1723, 0, R"()")
DIAG_ENTRY(NullArithmetic /* null-arithmetic */, 13581, /* DiagArray628 */ 1725, 0, R"()")
DIAG_ENTRY(NullCharacter /* null-character */, 13597, /* DiagArray629 */ 1728, 0, R"()")
DIAG_ENTRY(NullConversion /* null-conversion */, 13612, /* DiagArray630 */ 1731, 0, R"()")
DIAG_ENTRY(NullDereference /* null-dereference */, 13628, /* DiagArray631 */ 1733, 0, R"()")
DIAG_ENTRY(NullPointerArithmetic /* null-pointer-arithmetic */, 13645, /* DiagArray632 */ 1736, /* DiagSubGroup632 */ 504, R"()")
DIAG_ENTRY(NullPointerSubtraction /* null-pointer-subtraction */, 13669, /* DiagArray633 */ 1738, 0, R"()")
DIAG_ENTRY(Nullability /* nullability */, 13694, /* DiagArray634 */ 1740, 0, R"()")
DIAG_ENTRY(NullabilityCompleteness /* nullability-completeness */, 13706, /* DiagArray635 */ 1746, /* DiagSubGroup635 */ 506, R"()")
DIAG_ENTRY(NullabilityCompletenessOnArrays /* nullability-completeness-on-arrays */, 13731, /* DiagArray636 */ 1748, 0, R"()")
DIAG_ENTRY(NullabilityDeclSpec /* nullability-declspec */, 13766, /* DiagArray637 */ 1750, 0, R"()")
DIAG_ENTRY(anonymous_143 /* nullability-extension */, 13787, /* DiagArray638 */ 1752, 0, R"()")
DIAG_ENTRY(NullabilityInferredOnNestedType /* nullability-inferred-on-nested-type */, 13809, /* DiagArray639 */ 1754, 0, R"()")
DIAG_ENTRY(NullableToNonNullConversion /* nullable-to-nonnull-conversion */, 13845, /* DiagArray640 */ 1756, 0, R"()")
DIAG_ENTRY(anonymous_277 /* nvcc-compat */, 13876, /* DiagArray641 */ 1758, 0, R"()")
DIAG_ENTRY(anonymous_181 /* objc-autosynthesis-property-ivar-name-match */, 13888, /* DiagArray642 */ 1760, 0, R"()")
DIAG_ENTRY(ObjCBoolConstantConversion /* objc-bool-constant-conversion */, 13932, /* DiagArray643 */ 1762, 0, R"()")
DIAG_ENTRY(ObjCBoxing /* objc-boxing */, 13962, /* DiagArray644 */ 1764, 0, R"()")
DIAG_ENTRY(anonymous_261 /* objc-circular-container */, 13974, /* DiagArray645 */ 1766, 0, R"()")
DIAG_ENTRY(ObjCCocoaAPI /* objc-cocoa-api */, 13998, 0, /* DiagSubGroup646 */ 508, R"()")
DIAG_ENTRY(ObjCDesignatedInit /* objc-designated-initializers */, 14013, /* DiagArray647 */ 1768, 0, R"()")
DIAG_ENTRY(anonymous_201 /* objc-dictionary-duplicate-keys */, 14042, /* DiagArray648 */ 1775, 0, R"()")
DIAG_ENTRY(anonymous_87 /* objc-duplicate-category-definition */, 14073, /* DiagArray649 */ 1777, 0, R"()")
DIAG_ENTRY(ObjCFlexibleArray /* objc-flexible-array */, 14108, /* DiagArray650 */ 1779, 0, R"()")
DIAG_ENTRY(anonymous_238 /* objc-forward-class-redefinition */, 14128, /* DiagArray651 */ 1782, 0, R"()")
DIAG_ENTRY(anonymous_239 /* objc-interface-ivars */, 14160, /* DiagArray652 */ 1784, 0, R"()")
DIAG_ENTRY(ObjCLiteralComparison /* objc-literal-compare */, 14181, /* DiagArray653 */ 1786, /* DiagSubGroup653 */ 510, R"()")
DIAG_ENTRY(ObjCLiteralConversion /* objc-literal-conversion */, 14202, /* DiagArray654 */ 1788, 0, R"()")
DIAG_ENTRY(anonymous_133 /* objc-macro-redefinition */, 14226, /* DiagArray655 */ 1791, 0, R"()")
DIAG_ENTRY(anonymous_186 /* objc-messaging-id */, 14250, /* DiagArray656 */ 1793, 0, R"()")
DIAG_ENTRY(MethodAccess /* objc-method-access */, 14268, /* DiagArray657 */ 1795, 0, R"()")
DIAG_ENTRY(anonymous_182 /* objc-missing-property-synthesis */, 14287, /* DiagArray658 */ 1802, 0, R"()")
DIAG_ENTRY(ObjCMissingSuperCalls /* objc-missing-super-calls */, 14319, /* DiagArray659 */ 1804, 0, R"()")
DIAG_ENTRY(ObjCMultipleMethodNames /* objc-multiple-method-names */, 14344, /* DiagArray660 */ 1806, 0, R"()")
DIAG_ENTRY(ObjCRetainBlockProperty /* objc-noncopy-retain-block-property */, 14371, /* DiagArray661 */ 1808, 0, R"()")
DIAG_ENTRY(ObjCNonUnifiedException /* objc-nonunified-exceptions */, 14406, /* DiagArray662 */ 1810, 0, R"()")
DIAG_ENTRY(ObjCPropertyAssignOnObjectType /* objc-property-assign-on-object-type */, 14433, /* DiagArray663 */ 1812, 0, R"()")
DIAG_ENTRY(ObjCPropertyImpl /* objc-property-implementation */, 14469, /* DiagArray664 */ 1814, 0, R"()")
DIAG_ENTRY(anonymous_177 /* objc-property-implicit-mismatch */, 14498, /* DiagArray665 */ 1819, 0, R"()")
DIAG_ENTRY(anonymous_179 /* objc-property-matches-cocoa-ownership-rule */, 14530, /* DiagArray666 */ 1821, 0, R"()")
DIAG_ENTRY(ObjCPropertyNoAttribute /* objc-property-no-attribute */, 14573, /* DiagArray667 */ 1823, 0, R"()")
DIAG_ENTRY(ObjCNoPropertyAutoSynthesis /* objc-property-synthesis */, 14600, /* DiagArray668 */ 1826, 0, R"()")
DIAG_ENTRY(ObjCProtocolMethodImpl /* objc-protocol-method-implementation */, 14624, /* DiagArray669 */ 1830, 0, R"()")
DIAG_ENTRY(anonymous_180 /* objc-protocol-property-synthesis */, 14660, /* DiagArray670 */ 1832, 0, R"()")
DIAG_ENTRY(ObjCProtocolQualifiers /* objc-protocol-qualifiers */, 14693, /* DiagArray671 */ 1834, 0, R"()")
DIAG_ENTRY(ObjCReadonlyPropertyHasSetter /* objc-readonly-with-setter-property */, 14718, /* DiagArray672 */ 1836, 0, R"()")
DIAG_ENTRY(ObjCRedundantAPIUse /* objc-redundant-api-use */, 14753, 0, /* DiagSubGroup673 */ 512, R"()")
DIAG_ENTRY(ObjCRedundantLiteralUse /* objc-redundant-literal-use */, 14776, /* DiagArray674 */ 1838, 0, R"()")
DIAG_ENTRY(ObjCRootClass /* objc-root-class */, 14803, /* DiagArray675 */ 1840, 0, R"()")
DIAG_ENTRY(ObjCSignedCharBool /* objc-signed-char-bool */, 14819, 0, /* DiagSubGroup676 */ 514, R"()")
DIAG_ENTRY(ObjCSignedCharBoolImplicitFloatConversion /* objc-signed-char-bool-implicit-float-conversion */, 14841, /* DiagArray677 */ 1842, 0, R"()")
DIAG_ENTRY(ObjCSignedCharBoolImplicitIntConversion /* objc-signed-char-bool-implicit-int-conversion */, 14889, /* DiagArray678 */ 1844, 0, R"()")
DIAG_ENTRY(ObjCStringComparison /* objc-string-compare */, 14935, /* DiagArray679 */ 1846, 0, R"()")
DIAG_ENTRY(ObjCStringConcatenation /* objc-string-concatenation */, 14955, /* DiagArray680 */ 1848, 0, R"()")
DIAG_ENTRY(anonymous_262 /* objc-unsafe-perform-selector */, 14981, /* DiagArray681 */ 1850, 0, R"()")
DIAG_ENTRY(ODR /* odr */, 15010, /* DiagArray682 */ 1852, 0, R"()")
DIAG_ENTRY(OldStyleCast /* old-style-cast */, 15014, /* DiagArray683 */ 1871, 0, R"()")
DIAG_ENTRY(anonymous_39 /* old-style-definition */, 15029, 0, 0, R"()")
DIAG_ENTRY(OpenACC /* openacc */, 15050, 0, /* DiagSubGroup685 */ 519, R"()")
DIAG_ENTRY(anonymous_305 /* openacc-deprecated-clause-alias */, 15058, /* DiagArray686 */ 1873, 0, R"()")
DIAG_ENTRY(anonymous_304 /* openacc-self-if-potential-conflict */, 15090, /* DiagArray687 */ 1875, 0, R"()")
DIAG_ENTRY(OpenCLUnsupportedRGBA /* opencl-unsupported-rgba */, 15125, /* DiagArray688 */ 1877, 0, R"()")
DIAG_ENTRY(OpenMP /* openmp */, 15149, 0, /* DiagSubGroup689 */ 521, R"()")
DIAG_ENTRY(OpenMP51Ext /* openmp-51-extensions */, 15156, /* DiagArray690 */ 1879, 0, R"()")
DIAG_ENTRY(OpenMPClauses /* openmp-clauses */, 15177, /* DiagArray691 */ 1881, 0, R"()")
DIAG_ENTRY(OpenMPExtensions /* openmp-extensions */, 15192, /* DiagArray692 */ 1901, 0, R"()")
DIAG_ENTRY(OpenMPLoopForm /* openmp-loop-form */, 15210, /* DiagArray693 */ 1903, 0, R"()")
DIAG_ENTRY(OpenMPMapping /* openmp-mapping */, 15227, /* DiagArray694 */ 1906, 0, R"()")
DIAG_ENTRY(OpenMPTarget /* openmp-target */, 15242, /* DiagArray695 */ 1908, /* DiagSubGroup695 */ 530, R"()")
DIAG_ENTRY(OpenMPTargetException /* openmp-target-exception */, 15256, /* DiagArray696 */ 1912, 0, R"()")
DIAG_ENTRY(OptionIgnored /* option-ignored */, 15280, /* DiagArray697 */ 1915, 0, R"()")
DIAG_ENTRY(OrderedCompareFunctionPointers /* ordered-compare-function-pointers */, 15295, /* DiagArray698 */ 1934, 0, R"()")
DIAG_ENTRY(OutOfLineDeclaration /* out-of-line-declaration */, 15329, /* DiagArray699 */ 1937, 0, R"()")
DIAG_ENTRY(anonymous_164 /* out-of-scope-function */, 15353, /* DiagArray700 */ 1939, 0, R"()")
DIAG_ENTRY(OveralignedType /* over-aligned */, 15375, /* DiagArray701 */ 1941, 0, R"()")
DIAG_ENTRY(anonymous_40 /* overflow */, 15388, 0, 0, R"()")
DIAG_ENTRY(OverlengthStrings /* overlength-strings */, 15397, /* DiagArray703 */ 1943, 0, R"()")
DIAG_ENTRY(OverloadedShiftOpParentheses /* overloaded-shift-op-parentheses */, 15416, /* DiagArray704 */ 1945, 0, R"()")
DIAG_ENTRY(OverloadedVirtual /* overloaded-virtual */, 15448, /* DiagArray705 */ 1947, 0, R"()")
DIAG_ENTRY(anonymous_36 /* override-init */, 15467, 0, /* DiagSubGroup706 */ 532, R"()")
DIAG_ENTRY(anonymous_106 /* override-module */, 15481, /* DiagArray707 */ 1949, 0, R"()")
DIAG_ENTRY(OverridingMethodMismatch /* overriding-method-mismatch */, 15497, /* DiagArray708 */ 1951, 0, R"()")
DIAG_ENTRY(anonymous_94 /* overriding-option */, 15524, /* DiagArray709 */ 1959, 0, R"()")
DIAG_ENTRY(Packed /* packed */, 15542, /* DiagArray710 */ 1961, /* DiagSubGroup710 */ 534, R"()")
DIAG_ENTRY(PackedNonPod /* packed-non-pod */, 15549, /* DiagArray711 */ 1963, 0, R"()")
DIAG_ENTRY(Padded /* padded */, 15564, /* DiagArray712 */ 1965, /* DiagSubGroup712 */ 536, R"()")
DIAG_ENTRY(PaddedBitField /* padded-bitfield */, 15571, /* DiagArray713 */ 1969, 0, R"()")
DIAG_ENTRY(Parentheses /* parentheses */, 15587, /* DiagArray714 */ 1972, /* DiagSubGroup714 */ 538, R"()")
DIAG_ENTRY(ParenthesesOnEquality /* parentheses-equality */, 15599, /* DiagArray715 */ 1977, 0, R"()")
DIAG_ENTRY(anonymous_8 /* partial-availability */, 15620, 0, /* DiagSubGroup716 */ 547, R"()")
DIAG_ENTRY(BackendOptimizationRemark /* pass */, 15641, /* DiagArray717 */ 1979, 0, R"()")
DIAG_ENTRY(BackendOptimizationRemarkAnalysis /* pass-analysis */, 15646, /* DiagArray718 */ 1981, 0, R"()")
DIAG_ENTRY(BackendOptimizationFailure /* pass-failed */, 15660, /* DiagArray719 */ 1985, 0, R"()")
DIAG_ENTRY(BackendOptimizationRemarkMissed /* pass-missed */, 15672, /* DiagArray720 */ 1987, 0, R"()")
DIAG_ENTRY(anonymous_307 /* pch-date-time */, 15684, /* DiagArray721 */ 1989, 0, R"()")
DIAG_ENTRY(anonymous_306 /* pch-vfs-diff */, 15698, /* DiagArray722 */ 1991, 0, R"()")
DIAG_ENTRY(Pedantic /* pedantic */, 15711, /* DiagArray723 */ 1993, /* DiagSubGroup723 */ 549, R"()")
DIAG_ENTRY(OpenCLCoreFeaturesDiagGroup /* pedantic-core-features */, 15720, /* DiagArray724 */ 2076, 0, R"()")
DIAG_ENTRY(PedanticMacros /* pedantic-macros */, 15743, 0, /* DiagSubGroup725 */ 608, R"()")
DIAG_ENTRY(PessimizingMove /* pessimizing-move */, 15759, /* DiagArray726 */ 2079, 0, R"()")
DIAG_ENTRY(PointerArith /* pointer-arith */, 15776, /* DiagArray727 */ 2082, /* DiagSubGroup727 */ 614, R"()")
DIAG_ENTRY(PointerBoolConversion /* pointer-bool-conversion */, 15790, /* DiagArray728 */ 2086, 0, R"()")
DIAG_ENTRY(anonymous_216 /* pointer-compare */, 15814, /* DiagArray729 */ 2089, 0, R"()")
DIAG_ENTRY(anonymous_260 /* pointer-integer-compare */, 15830, /* DiagArray730 */ 2091, 0, R"()")
DIAG_ENTRY(anonymous_272 /* pointer-sign */, 15854, /* DiagArray731 */ 2093, 0, R"()")
DIAG_ENTRY(PointerToEnumCast /* pointer-to-enum-cast */, 15867, /* DiagArray732 */ 2095, /* DiagSubGroup732 */ 616, R"()")
DIAG_ENTRY(PointerToIntCast /* pointer-to-int-cast */, 15888, /* DiagArray733 */ 2097, /* DiagSubGroup733 */ 618, R"()")
DIAG_ENTRY(anonymous_279 /* pointer-type-mismatch */, 15908, /* DiagArray734 */ 2099, 0, R"()")
DIAG_ENTRY(anonymous_93 /* poison-system-directories */, 15930, /* DiagArray735 */ 2101, 0, R"()")
DIAG_ENTRY(ObjCPotentiallyDirectSelector /* potentially-direct-selector */, 15956, /* DiagArray736 */ 2103, 0, R"()")
DIAG_ENTRY(PotentiallyEvaluatedExpression /* potentially-evaluated-expression */, 15984, /* DiagArray737 */ 2105, 0, R"()")
DIAG_ENTRY(PragmaClangAttribute /* pragma-clang-attribute */, 16017, /* DiagArray738 */ 2107, 0, R"()")
DIAG_ENTRY(anonymous_127 /* pragma-once-outside-header */, 16040, /* DiagArray739 */ 2109, 0, R"()")
DIAG_ENTRY(PragmaPack /* pragma-pack */, 16067, /* DiagArray740 */ 2111, /* DiagSubGroup740 */ 621, R"()")
DIAG_ENTRY(PragmaPackSuspiciousInclude /* pragma-pack-suspicious-include */, 16079, /* DiagArray741 */ 2114, 0, R"()")
DIAG_ENTRY(anonymous_128 /* pragma-system-header-outside-header */, 16110, /* DiagArray742 */ 2116, 0, R"()")
DIAG_ENTRY(Pragmas /* pragmas */, 16146, /* DiagArray743 */ 2118, /* DiagSubGroup743 */ 623, R"()")
DIAG_ENTRY(CXXPre14Compat /* pre-c++14-compat */, 16154, /* DiagArray744 */ 2121, 0, R"()")
DIAG_ENTRY(CXXPre14CompatPedantic /* pre-c++14-compat-pedantic */, 16171, 0, /* DiagSubGroup745 */ 628, R"()")
DIAG_ENTRY(CXXPre17Compat /* pre-c++17-compat */, 16197, /* DiagArray746 */ 2133, 0, R"()")
DIAG_ENTRY(CXXPre17CompatPedantic /* pre-c++17-compat-pedantic */, 16214, /* DiagArray747 */ 2151, /* DiagSubGroup747 */ 631, R"()")
DIAG_ENTRY(CXXPre20Compat /* pre-c++20-compat */, 16240, /* DiagArray748 */ 2154, 0, R"()")
DIAG_ENTRY(CXXPre20CompatPedantic /* pre-c++20-compat-pedantic */, 16257, /* DiagArray749 */ 2183, /* DiagSubGroup749 */ 633, R"()")
DIAG_ENTRY(CXXPre23Compat /* pre-c++23-compat */, 16283, /* DiagArray750 */ 2186, 0, R"()")
DIAG_ENTRY(CXXPre23CompatPedantic /* pre-c++23-compat-pedantic */, 16300, 0, /* DiagSubGroup751 */ 635, R"()")
DIAG_ENTRY(CXXPre26Compat /* pre-c++26-compat */, 16326, /* DiagArray752 */ 2201, 0, R"()")
DIAG_ENTRY(CXXPre26CompatPedantic /* pre-c++26-compat-pedantic */, 16343, 0, /* DiagSubGroup753 */ 637, R"()")
DIAG_ENTRY(anonymous_21 /* pre-c++2c-compat */, 16369, 0, /* DiagSubGroup754 */ 639, R"()")
DIAG_ENTRY(anonymous_22 /* pre-c++2c-compat-pedantic */, 16386, 0, /* DiagSubGroup755 */ 641, R"()")
DIAG_ENTRY(CPre11Compat /* pre-c11-compat */, 16412, /* DiagArray756 */ 2207, 0, R"()")
DIAG_ENTRY(CPre11CompatPedantic /* pre-c11-compat-pedantic */, 16427, 0, /* DiagSubGroup757 */ 643, R"()")
DIAG_ENTRY(CPre23Compat /* pre-c23-compat */, 16451, /* DiagArray758 */ 2209, 0, R"()")
DIAG_ENTRY(CPre23CompatPedantic /* pre-c23-compat-pedantic */, 16466, 0, /* DiagSubGroup759 */ 645, R"()")
DIAG_ENTRY(anonymous_13 /* pre-c2x-compat */, 16490, 0, /* DiagSubGroup760 */ 647, R"()")
DIAG_ENTRY(anonymous_14 /* pre-c2x-compat-pedantic */, 16505, 0, /* DiagSubGroup761 */ 649, R"()")
DIAG_ENTRY(CPre2yCompat /* pre-c2y-compat */, 16529, /* DiagArray762 */ 2226, 0, R"()")
DIAG_ENTRY(CPre2yCompatPedantic /* pre-c2y-compat-pedantic */, 16544, 0, /* DiagSubGroup763 */ 651, R"()")
DIAG_ENTRY(OpenMPPre51Compat /* pre-openmp-51-compat */, 16568, /* DiagArray764 */ 2230, 0, R"()")
DIAG_ENTRY(anonymous_159 /* predefined-identifier-outside-function */, 16589, /* DiagArray765 */ 2232, 0, R"()")
DIAG_ENTRY(PrivateExtern /* private-extern */, 16628, /* DiagArray766 */ 2234, 0, R"()")
DIAG_ENTRY(anonymous_139 /* private-header */, 16643, /* DiagArray767 */ 2236, 0, R"()")
DIAG_ENTRY(PrivateModule /* private-module */, 16658, /* DiagArray768 */ 2238, 0, R"()")
DIAG_ENTRY(ProfileInstrMissing /* profile-instr-missing */, 16673, /* DiagArray769 */ 2243, 0, R"()")
DIAG_ENTRY(ProfileInstrOutOfDate /* profile-instr-out-of-date */, 16695, /* DiagArray770 */ 2245, 0, R"()")
DIAG_ENTRY(ProfileInstrUnprofiled /* profile-instr-unprofiled */, 16721, /* DiagArray771 */ 2247, 0, R"()")
DIAG_ENTRY(PropertyAccessDotSyntax /* property-access-dot-syntax */, 16746, /* DiagArray772 */ 2249, 0, R"()")
DIAG_ENTRY(PropertyAttr /* property-attribute-mismatch */, 16773, /* DiagArray773 */ 2251, 0, R"()")
DIAG_ENTRY(Protocol /* protocol */, 16801, /* DiagArray774 */ 2256, 0, R"()")
DIAG_ENTRY(anonymous_175 /* protocol-property-synthesis-ambiguity */, 16810, /* DiagArray775 */ 2258, 0, R"()")
DIAG_ENTRY(anonymous_111 /* psabi */, 16848, /* DiagArray776 */ 2260, 0, R"()")
DIAG_ENTRY(PtrAuthNullPointers /* ptrauth-null-pointers */, 16854, /* DiagArray777 */ 2262, 0, R"()")
DIAG_ENTRY(anonymous_244 /* qualified-void-return-type */, 16876, /* DiagArray778 */ 2265, 0, R"()")
DIAG_ENTRY(FrameworkHdrQuotedInclude /* quoted-include-in-framework-header */, 16903, /* DiagArray779 */ 2267, 0, R"()")
DIAG_ENTRY(RangeLoopAnalysis /* range-loop-analysis */, 16938, 0, /* DiagSubGroup780 */ 653, R"()")
DIAG_ENTRY(RangeLoopBindReference /* range-loop-bind-reference */, 16958, /* DiagArray781 */ 2269, 0, R"()")
DIAG_ENTRY(RangeLoopConstruct /* range-loop-construct */, 16984, /* DiagArray782 */ 2271, 0, R"()")
DIAG_ENTRY(ReadOnlyPlacementChecks /* read-only-types */, 17005, /* DiagArray783 */ 2274, 0, R"()")
DIAG_ENTRY(anonymous_185 /* readonly-iboutlet-property */, 17021, /* DiagArray784 */ 2276, 0, R"()")
DIAG_ENTRY(ObjCReceiver /* receiver-expr */, 17048, /* DiagArray785 */ 2278, 0, R"()")
DIAG_ENTRY(ForwardClassReceiver /* receiver-forward-class */, 17062, /* DiagArray786 */ 2280, 0, R"()")
DIAG_ENTRY(RedeclaredClassMember /* redeclared-class-member */, 17085, /* DiagArray787 */ 2283, 0, R"()")
DIAG_ENTRY(anonymous_188 /* redundant-consteval-if */, 17109, /* DiagArray788 */ 2285, 0, R"()")
DIAG_ENTRY(anonymous_41 /* redundant-decls */, 17132, 0, 0, R"()")
DIAG_ENTRY(RedundantMove /* redundant-move */, 17148, /* DiagArray790 */ 2287, 0, R"()")
DIAG_ENTRY(anonymous_163 /* redundant-parens */, 17163, /* DiagArray791 */ 2289, 0, R"()")
DIAG_ENTRY(Register /* register */, 17180, /* DiagArray792 */ 2291, /* DiagSubGroup792 */ 656, R"()")
DIAG_ENTRY(ReinterpretBaseClass /* reinterpret-base-class */, 17189, /* DiagArray793 */ 2293, 0, R"()")
DIAG_ENTRY(RemarkBackendPlugin /* remark-backend-plugin */, 17212, /* DiagArray794 */ 2295, 0, R"()")
DIAG_ENTRY(Reorder /* reorder */, 17234, 0, /* DiagSubGroup795 */ 658, R"()")
DIAG_ENTRY(ReorderCtor /* reorder-ctor */, 17242, /* DiagArray796 */ 2297, 0, R"()")
DIAG_ENTRY(ReorderInitList /* reorder-init-list */, 17255, /* DiagArray797 */ 2300, 0, R"()")
DIAG_ENTRY(anonymous_222 /* requires-super-attribute */, 17273, /* DiagArray798 */ 2302, 0, R"()")
DIAG_ENTRY(ReservedIdAsMacroAlias /* reserved-id-macro */, 17298, 0, /* DiagSubGroup799 */ 661, R"()")
DIAG_ENTRY(ReservedIdentifier /* reserved-identifier */, 17316, /* DiagArray800 */ 2304, /* DiagSubGroup800 */ 663, R"()")
DIAG_ENTRY(ReservedIdAsMacro /* reserved-macro-identifier */, 17336, /* DiagArray801 */ 2306, 0, R"()")
DIAG_ENTRY(ReservedModuleIdentifier /* reserved-module-identifier */, 17362, /* DiagArray802 */ 2308, 0, R"()")
DIAG_ENTRY(ReservedUserDefinedLiteral /* reserved-user-defined-literal */, 17389, /* DiagArray803 */ 2310, /* DiagSubGroup803 */ 667, R"()")
DIAG_ENTRY(RestrictExpansionMacro /* restrict-expansion */, 17419, /* DiagArray804 */ 2313, 0, R"()")
DIAG_ENTRY(anonymous_237 /* retained-language-linkage */, 17438, /* DiagArray805 */ 2315, 0, R"()")
DIAG_ENTRY(anonymous_29 /* return-local-addr */, 17464, 0, /* DiagSubGroup806 */ 669, R"()")
DIAG_ENTRY(ReturnMismatch /* return-mismatch */, 17482, /* DiagArray807 */ 2317, 0, R"()")
DIAG_ENTRY(ReturnStackAddress /* return-stack-address */, 17498, /* DiagArray808 */ 2321, 0, R"()")
DIAG_ENTRY(ReturnStdMove /* return-std-move */, 17519, 0, 0, R"()")
DIAG_ENTRY(ReturnType /* return-type */, 17535, /* DiagArray810 */ 2325, /* DiagSubGroup810 */ 671, R"()")
DIAG_ENTRY(ReturnTypeCLinkage /* return-type-c-linkage */, 17547, /* DiagArray811 */ 2332, 0, R"()")
DIAG_ENTRY(anonymous_224 /* rewrite-not-bool */, 17569, /* DiagArray812 */ 2335, 0, R"()")
DIAG_ENTRY(RoundTripCC1Args /* round-trip-cc1-args */, 17586, /* DiagArray813 */ 2337, 0, R"()")
DIAG_ENTRY(RTTI /* rtti */, 17606, /* DiagArray814 */ 2339, 0, R"()")
DIAG_ENTRY(SanitizeAddressRemarks /* sanitize-address */, 17611, /* DiagArray815 */ 2342, 0, R"()")
DIAG_ENTRY(anonymous_103 /* sarif-format-unstable */, 17628, /* DiagArray816 */ 2345, 0, R"()")
DIAG_ENTRY(UsedSearchPath /* search-path-usage */, 17650, /* DiagArray817 */ 2347, 0, R"()")
DIAG_ENTRY(Section /* section */, 17668, /* DiagArray818 */ 2349, 0, R"()")
DIAG_ENTRY(Selector /* selector */, 17676, /* DiagArray819 */ 2353, /* DiagSubGroup819 */ 674, R"()")
DIAG_ENTRY(SelectorTypeMismatch /* selector-type-mismatch */, 17685, /* DiagArray820 */ 2355, 0, R"()")
DIAG_ENTRY(SelfAssignment /* self-assign */, 17708, /* DiagArray821 */ 2357, /* DiagSubGroup821 */ 676, R"()")
DIAG_ENTRY(SelfAssignmentField /* self-assign-field */, 17720, /* DiagArray822 */ 2359, 0, R"()")
DIAG_ENTRY(SelfAssignmentOverloaded /* self-assign-overloaded */, 17738, /* DiagArray823 */ 2361, 0, R"()")
DIAG_ENTRY(SelfMove /* self-move */, 17761, /* DiagArray824 */ 2363, 0, R"()")
DIAG_ENTRY(SemiBeforeMethodBody /* semicolon-before-method-body */, 17771, /* DiagArray825 */ 2365, 0, R"()")
DIAG_ENTRY(Sentinel /* sentinel */, 17800, /* DiagArray826 */ 2367, 0, R"()")
DIAG_ENTRY(anonymous_44 /* sequence-point */, 17809, 0, /* DiagSubGroup827 */ 679, R"()")
DIAG_ENTRY(SerializedDiagnostics /* serialized-diagnostics */, 17824, /* DiagArray828 */ 2370, 0, R"()")
DIAG_ENTRY(Shadow /* shadow */, 17847, /* DiagArray829 */ 2374, /* DiagSubGroup829 */ 681, R"()")
DIAG_ENTRY(ShadowAll /* shadow-all */, 17854, 0, /* DiagSubGroup830 */ 684, R"()")
DIAG_ENTRY(ShadowField /* shadow-field */, 17865, /* DiagArray831 */ 2376, 0, R"()")
DIAG_ENTRY(ShadowFieldInConstructor /* shadow-field-in-constructor */, 17878, /* DiagArray832 */ 2378, /* DiagSubGroup832 */ 689, R"()")
DIAG_ENTRY(ShadowFieldInConstructorModified /* shadow-field-in-constructor-modified */, 17906, /* DiagArray833 */ 2380, 0, R"()")
DIAG_ENTRY(ShadowIvar /* shadow-ivar */, 17943, /* DiagArray834 */ 2382, 0, R"()")
DIAG_ENTRY(ShadowUncapturedLocal /* shadow-uncaptured-local */, 17955, /* DiagArray835 */ 2384, 0, R"()")
DIAG_ENTRY(anonymous_249 /* shift-count-negative */, 17979, /* DiagArray836 */ 2386, 0, R"()")
DIAG_ENTRY(anonymous_250 /* shift-count-overflow */, 18000, /* DiagArray837 */ 2388, 0, R"()")
DIAG_ENTRY(anonymous_248 /* shift-negative-value */, 18021, /* DiagArray838 */ 2390, 0, R"()")
DIAG_ENTRY(ShiftOpParentheses /* shift-op-parentheses */, 18042, /* DiagArray839 */ 2392, 0, R"()")
DIAG_ENTRY(anonymous_251 /* shift-overflow */, 18063, /* DiagArray840 */ 2394, 0, R"()")
DIAG_ENTRY(anonymous_252 /* shift-sign-overflow */, 18078, /* DiagArray841 */ 2396, 0, R"()")
DIAG_ENTRY(Shorten64To32 /* shorten-64-to-32 */, 18098, /* DiagArray842 */ 2398, 0, R"()")
DIAG_ENTRY(SignCompare /* sign-compare */, 18115, /* DiagArray843 */ 2400, 0, R"()")
DIAG_ENTRY(SignConversion /* sign-conversion */, 18128, /* DiagArray844 */ 2402, 0, R"()")
DIAG_ENTRY(anonymous_42 /* sign-promo */, 18144, 0, 0, R"()")
DIAG_ENTRY(SignedEnumBitfield /* signed-enum-bitfield */, 18155, /* DiagArray846 */ 2406, 0, R"()")
DIAG_ENTRY(anonymous_295 /* signed-unsigned-wchar */, 18176, /* DiagArray847 */ 2408, 0, R"()")
DIAG_ENTRY(SingleBitBitFieldConstantConversion /* single-bit-bitfield-constant-conversion */, 18198, /* DiagArray848 */ 2410, 0, R"()")
DIAG_ENTRY(SizeofArrayArgument /* sizeof-array-argument */, 18238, /* DiagArray849 */ 2412, 0, R"()")
DIAG_ENTRY(SizeofArrayDecay /* sizeof-array-decay */, 18260, /* DiagArray850 */ 2414, 0, R"()")
DIAG_ENTRY(anonymous_218 /* sizeof-array-div */, 18279, /* DiagArray851 */ 2416, 0, R"()")
DIAG_ENTRY(anonymous_217 /* sizeof-pointer-div */, 18296, /* DiagArray852 */ 2418, 0, R"()")
DIAG_ENTRY(SizeofPointerMemaccess /* sizeof-pointer-memaccess */, 18315, /* DiagArray853 */ 2420, 0, R"()")
DIAG_ENTRY(anonymous_99 /* slash-u-filename */, 18340, /* DiagArray854 */ 2423, 0, R"()")
DIAG_ENTRY(anonymous_86 /* slh-asm-goto */, 18357, /* DiagArray855 */ 2425, 0, R"()")
DIAG_ENTRY(anonymous_89 /* sloc-usage */, 18370, /* DiagArray856 */ 2427, 0, R"()")
DIAG_ENTRY(UninitializedSometimes /* sometimes-uninitialized */, 18381, /* DiagArray857 */ 2429, 0, R"()")
DIAG_ENTRY(BackendSourceMgr /* source-mgr */, 18405, /* DiagArray858 */ 2431, 0, R"()")
DIAG_ENTRY(SourceUsesOpenACC /* source-uses-openacc */, 18416, /* DiagArray859 */ 2433, 0, R"()")
DIAG_ENTRY(SourceUsesOpenMP /* source-uses-openmp */, 18436, /* DiagArray860 */ 2437, 0, R"()")
DIAG_ENTRY(SpirCompat /* spir-compat */, 18455, /* DiagArray861 */ 2446, 0, R"()")
DIAG_ENTRY(anonymous_77 /* spirv-compat */, 18467, 0, /* DiagSubGroup862 */ 691, R"()")
DIAG_ENTRY(anonymous_82 /* stack-exhausted */, 18480, /* DiagArray863 */ 2448, 0, R"()")
DIAG_ENTRY(anonymous_85 /* stack-protector */, 18496, /* DiagArray864 */ 2450, 0, R"()")
DIAG_ENTRY(StaticFloatInit /* static-float-init */, 18512, /* DiagArray865 */ 2452, /* DiagSubGroup865 */ 693, R"()")
DIAG_ENTRY(StaticInInline /* static-in-inline */, 18530, /* DiagArray866 */ 2454, 0, R"()")
DIAG_ENTRY(anonymous_156 /* static-inline-explicit-instantiation */, 18547, /* DiagArray867 */ 2457, 0, R"()")
DIAG_ENTRY(StaticLocalInInline /* static-local-in-inline */, 18584, /* DiagArray868 */ 2459, 0, R"()")
DIAG_ENTRY(UninitializedStaticSelfInit /* static-self-init */, 18607, /* DiagArray869 */ 2461, 0, R"()")
DIAG_ENTRY(anonymous_102 /* stdlibcxx-not-found */, 18624, /* DiagArray870 */ 2463, 0, R"()")
DIAG_ENTRY(anonymous_48 /* strict-aliasing */, 18644, 0, 0, R"()")
DIAG_ENTRY(anonymous_45 /* strict-aliasing=0 */, 18660, 0, 0, R"()")
DIAG_ENTRY(anonymous_46 /* strict-aliasing=1 */, 18678, 0, 0, R"()")
DIAG_ENTRY(anonymous_47 /* strict-aliasing=2 */, 18696, 0, 0, R"()")
DIAG_ENTRY(anonymous_55 /* strict-overflow */, 18714, 0, 0, R"()")
DIAG_ENTRY(anonymous_49 /* strict-overflow=0 */, 18730, 0, 0, R"()")
DIAG_ENTRY(anonymous_50 /* strict-overflow=1 */, 18748, 0, 0, R"()")
DIAG_ENTRY(anonymous_51 /* strict-overflow=2 */, 18766, 0, 0, R"()")
DIAG_ENTRY(anonymous_52 /* strict-overflow=3 */, 18784, 0, 0, R"()")
DIAG_ENTRY(anonymous_53 /* strict-overflow=4 */, 18802, 0, 0, R"()")
DIAG_ENTRY(anonymous_54 /* strict-overflow=5 */, 18820, 0, 0, R"()")
DIAG_ENTRY(ObjCStrictPotentiallyDirectSelector /* strict-potentially-direct-selector */, 18838, /* DiagArray882 */ 2465, /* DiagSubGroup882 */ 695, R"()")
DIAG_ENTRY(anonymous_225 /* strict-primary-template-shadow */, 18873, /* DiagArray883 */ 2467, 0, R"()")
DIAG_ENTRY(StrictPrototypes /* strict-prototypes */, 18904, /* DiagArray884 */ 2469, /* DiagSubGroup884 */ 697, R"()")
DIAG_ENTRY(StrictSelector /* strict-selector-match */, 18922, /* DiagArray885 */ 2471, 0, R"()")
DIAG_ENTRY(StringCompare /* string-compare */, 18944, /* DiagArray886 */ 2473, 0, R"()")
DIAG_ENTRY(StringConcatation /* string-concatenation */, 18959, /* DiagArray887 */ 2475, 0, R"()")
DIAG_ENTRY(StringConversion /* string-conversion */, 18980, /* DiagArray888 */ 2477, 0, R"()")
DIAG_ENTRY(StringPlusChar /* string-plus-char */, 18998, /* DiagArray889 */ 2479, 0, R"()")
DIAG_ENTRY(StringPlusInt /* string-plus-int */, 19015, /* DiagArray890 */ 2481, 0, R"()")
DIAG_ENTRY(anonymous_168 /* strlcpy-strlcat-size */, 19031, /* DiagArray891 */ 2483, 0, R"()")
DIAG_ENTRY(StrncatSize /* strncat-size */, 19052, /* DiagArray892 */ 2485, 0, R"()")
DIAG_ENTRY(CXX11WarnSuggestOverrideDestructor /* suggest-destructor-override */, 19065, /* DiagArray893 */ 2489, 0, R"()")
DIAG_ENTRY(CXX11WarnSuggestOverride /* suggest-override */, 19093, /* DiagArray894 */ 2491, 0, R"()")
DIAG_ENTRY(SuperSubClassMismatch /* super-class-method-mismatch */, 19110, /* DiagArray895 */ 2493, 0, R"()")
DIAG_ENTRY(SuspiciousBzero /* suspicious-bzero */, 19138, /* DiagArray896 */ 2495, 0, R"()")
DIAG_ENTRY(SuspiciousMemaccess /* suspicious-memaccess */, 19155, 0, /* DiagSubGroup897 */ 699, R"()")
DIAG_ENTRY(SwiftNameAttribute /* swift-name-attribute */, 19176, /* DiagArray898 */ 2497, 0, R"()")
DIAG_ENTRY(Switch /* switch */, 19197, /* DiagArray899 */ 2511, 0, R"()")
DIAG_ENTRY(SwitchBool /* switch-bool */, 19204, /* DiagArray900 */ 2515, 0, R"()")
DIAG_ENTRY(SwitchDefault /* switch-default */, 19216, /* DiagArray901 */ 2517, 0, R"()")
DIAG_ENTRY(SwitchEnum /* switch-enum */, 19231, /* DiagArray902 */ 2519, 0, R"()")
DIAG_ENTRY(SyncAlignment /* sync-alignment */, 19243, /* DiagArray903 */ 2521, 0, R"()")
DIAG_ENTRY(anonymous_294 /* sync-fetch-and-nand-semantics-changed */, 19258, /* DiagArray904 */ 2523, 0, R"()")
DIAG_ENTRY(anonymous_43 /* synth */, 19296, 0, 0, R"()")
DIAG_ENTRY(TargetClonesMixedSpecifiers /* target-clones-mixed-specifiers */, 19302, /* DiagArray906 */ 2525, 0, R"()")
DIAG_ENTRY(TautologicalBitwiseCompare /* tautological-bitwise-compare */, 19333, /* DiagArray907 */ 2527, 0, R"()")
DIAG_ENTRY(TautologicalCompare /* tautological-compare */, 19362, /* DiagArray908 */ 2530, /* DiagSubGroup908 */ 705, R"()")
DIAG_ENTRY(TautologicalConstantCompare /* tautological-constant-compare */, 19383, /* DiagArray909 */ 2533, /* DiagSubGroup909 */ 713, R"()")
DIAG_ENTRY(TautologicalInRangeCompare /* tautological-constant-in-range-compare */, 19413, 0, /* DiagSubGroup910 */ 715, R"()")
DIAG_ENTRY(TautologicalOutOfRangeCompare /* tautological-constant-out-of-range-compare */, 19452, /* DiagArray911 */ 2537, 0, R"()")
DIAG_ENTRY(TautologicalNegationCompare /* tautological-negation-compare */, 19495, /* DiagArray912 */ 2539, 0, R"()")
DIAG_ENTRY(TautologicalObjCBoolCompare /* tautological-objc-bool-compare */, 19525, /* DiagArray913 */ 2542, 0, R"()")
DIAG_ENTRY(TautologicalOverlapCompare /* tautological-overlap-compare */, 19556, /* DiagArray914 */ 2544, 0, R"()")
DIAG_ENTRY(TautologicalPointerCompare /* tautological-pointer-compare */, 19585, /* DiagArray915 */ 2546, 0, R"()")
DIAG_ENTRY(TautologicalTypeLimitCompare /* tautological-type-limit-compare */, 19614, /* DiagArray916 */ 2549, 0, R"()")
DIAG_ENTRY(TautologicalUndefinedCompare /* tautological-undefined-compare */, 19646, /* DiagArray917 */ 2551, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedCharZeroCompare /* tautological-unsigned-char-zero-compare */, 19677, /* DiagArray918 */ 2554, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedEnumZeroCompare /* tautological-unsigned-enum-zero-compare */, 19717, /* DiagArray919 */ 2556, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedZeroCompare /* tautological-unsigned-zero-compare */, 19757, /* DiagArray920 */ 2558, 0, R"()")
DIAG_ENTRY(TautologicalValueRangeCompare /* tautological-value-range-compare */, 19792, /* DiagArray921 */ 2560, 0, R"()")
DIAG_ENTRY(anonymous_303 /* tcb-enforcement */, 19825, /* DiagArray922 */ 2562, 0, R"()")
DIAG_ENTRY(anonymous_269 /* template-in-declaration-name */, 19841, /* DiagArray923 */ 2564, 0, R"()")
DIAG_ENTRY(anonymous_256 /* tentative-definition-array */, 19870, /* DiagArray924 */ 2566, 0, R"()")
DIAG_ENTRY(anonymous_255 /* tentative-definition-incomplete-type */, 19897, /* DiagArray925 */ 2568, 0, R"()")
DIAG_ENTRY(ThreadSafety /* thread-safety */, 19934, 0, /* DiagSubGroup926 */ 718, R"()")
DIAG_ENTRY(ThreadSafetyAnalysis /* thread-safety-analysis */, 19948, /* DiagArray927 */ 2570, 0, R"()")
DIAG_ENTRY(ThreadSafetyAttributes /* thread-safety-attributes */, 19971, /* DiagArray928 */ 2589, 0, R"()")
DIAG_ENTRY(ThreadSafetyBeta /* thread-safety-beta */, 19996, /* DiagArray929 */ 2596, 0, R"()")
DIAG_ENTRY(ThreadSafetyNegative /* thread-safety-negative */, 20015, /* DiagArray930 */ 2598, 0, R"()")
DIAG_ENTRY(ThreadSafetyPrecise /* thread-safety-precise */, 20038, /* DiagArray931 */ 2600, 0, R"()")
DIAG_ENTRY(ThreadSafetyReference /* thread-safety-reference */, 20060, /* DiagArray932 */ 2604, /* DiagSubGroup932 */ 723, R"()")
DIAG_ENTRY(ThreadSafetyReferenceReturn /* thread-safety-reference-return */, 20084, /* DiagArray933 */ 2607, 0, R"()")
DIAG_ENTRY(ThreadSafetyVerbose /* thread-safety-verbose */, 20115, /* DiagArray934 */ 2610, 0, R"()")
DIAG_ENTRY(Trigraphs /* trigraphs */, 20137, /* DiagArray935 */ 2612, 0, R"()")
DIAG_ENTRY(TypeLimits /* type-limits */, 20147, 0, /* DiagSubGroup936 */ 725, R"()")
DIAG_ENTRY(TypeSafety /* type-safety */, 20159, /* DiagArray937 */ 2617, 0, R"()")
DIAG_ENTRY(anonymous_236 /* typedef-redefinition */, 20171, /* DiagArray938 */ 2621, 0, R"()")
DIAG_ENTRY(anonymous_230 /* typename-missing */, 20192, /* DiagArray939 */ 2623, 0, R"()")
DIAG_ENTRY(anonymous_107 /* unable-to-open-stats-file */, 20209, /* DiagArray940 */ 2625, 0, R"()")
DIAG_ENTRY(UnalignedAccess /* unaligned-access */, 20235, /* DiagArray941 */ 2627, 0, R"()")
DIAG_ENTRY(anonymous_297 /* unaligned-qualifier-implicit-cast */, 20252, /* DiagArray942 */ 2629, 0, R"()")
DIAG_ENTRY(UnavailableDeclarations /* unavailable-declarations */, 20286, /* DiagArray943 */ 2631, 0, R"()")
DIAG_ENTRY(UndeclaredSelector /* undeclared-selector */, 20311, /* DiagArray944 */ 2633, 0, R"()")
DIAG_ENTRY(anonymous_131 /* undef */, 20331, /* DiagArray945 */ 2636, 0, R"()")
DIAG_ENTRY(anonymous_132 /* undef-prefix */, 20337, /* DiagArray946 */ 2638, 0, R"()")
DIAG_ENTRY(anonymous_198 /* undefined-arm-za */, 20350, /* DiagArray947 */ 2640, 0, R"()")
DIAG_ENTRY(anonymous_199 /* undefined-arm-zt0 */, 20367, /* DiagArray948 */ 2642, 0, R"()")
DIAG_ENTRY(UndefinedBoolConversion /* undefined-bool-conversion */, 20385, /* DiagArray949 */ 2644, 0, R"()")
DIAG_ENTRY(UndefinedFuncTemplate /* undefined-func-template */, 20411, /* DiagArray950 */ 2647, 0, R"()")
DIAG_ENTRY(anonymous_235 /* undefined-inline */, 20435, /* DiagArray951 */ 2649, 0, R"()")
DIAG_ENTRY(anonymous_233 /* undefined-internal */, 20452, /* DiagArray952 */ 2651, 0, R"()")
DIAG_ENTRY(anonymous_234 /* undefined-internal-type */, 20471, /* DiagArray953 */ 2653, 0, R"()")
DIAG_ENTRY(UndefinedReinterpretCast /* undefined-reinterpret-cast */, 20495, /* DiagArray954 */ 2655, 0, R"()")
DIAG_ENTRY(UndefinedVarTemplate /* undefined-var-template */, 20522, /* DiagArray955 */ 2658, 0, R"()")
DIAG_ENTRY(UnderalignedExceptionObject /* underaligned-exception-object */, 20545, /* DiagArray956 */ 2660, 0, R"()")
DIAG_ENTRY(UnevaluatedExpression /* unevaluated-expression */, 20575, /* DiagArray957 */ 2662, /* DiagSubGroup957 */ 730, R"()")
DIAG_ENTRY(UnguardedAvailability /* unguarded-availability */, 20598, /* DiagArray958 */ 2664, /* DiagSubGroup958 */ 732, R"()")
DIAG_ENTRY(UnguardedAvailabilityNew /* unguarded-availability-new */, 20621, /* DiagArray959 */ 2667, 0, R"()")
DIAG_ENTRY(Unicode /* unicode */, 20648, /* DiagArray960 */ 2670, 0, R"()")
DIAG_ENTRY(anonymous_117 /* unicode-homoglyph */, 20656, /* DiagArray961 */ 2678, 0, R"()")
DIAG_ENTRY(anonymous_116 /* unicode-whitespace */, 20674, /* DiagArray962 */ 2680, 0, R"()")
DIAG_ENTRY(anonymous_118 /* unicode-zero-width */, 20693, /* DiagArray963 */ 2682, 0, R"()")
DIAG_ENTRY(Uninitialized /* uninitialized */, 20712, /* DiagArray964 */ 2684, /* DiagSubGroup964 */ 734, R"()")
DIAG_ENTRY(UninitializedConstReference /* uninitialized-const-reference */, 20726, /* DiagArray965 */ 2692, 0, R"()")
DIAG_ENTRY(UnknownArgument /* unknown-argument */, 20756, /* DiagArray966 */ 2694, 0, R"()")
DIAG_ENTRY(UnknownAssumption /* unknown-assumption */, 20773, /* DiagArray967 */ 2698, 0, R"()")
DIAG_ENTRY(UnknownAttributes /* unknown-attributes */, 20792, /* DiagArray968 */ 2700, 0, R"()")
DIAG_ENTRY(CudaUnknownVersion /* unknown-cuda-version */, 20811, /* DiagArray969 */ 2702, 0, R"()")
DIAG_ENTRY(anonymous_136 /* unknown-directives */, 20832, /* DiagArray970 */ 2705, 0, R"()")
DIAG_ENTRY(anonymous_121 /* unknown-escape-sequence */, 20851, /* DiagArray971 */ 2707, 0, R"()")
DIAG_ENTRY(UnknownPragmas /* unknown-pragmas */, 20875, /* DiagArray972 */ 2709, 0, R"()")
DIAG_ENTRY(UnknownSanitizers /* unknown-sanitizers */, 20891, /* DiagArray973 */ 2730, 0, R"()")
DIAG_ENTRY(UnknownWarningOption /* unknown-warning-option */, 20910, /* DiagArray974 */ 2732, 0, R"()")
DIAG_ENTRY(UnnamedTypeTemplateArgs /* unnamed-type-template-args */, 20933, /* DiagArray975 */ 2736, /* DiagSubGroup975 */ 738, R"()")
DIAG_ENTRY(UnneededInternalDecl /* unneeded-internal-declaration */, 20960, /* DiagArray976 */ 2738, 0, R"()")
DIAG_ENTRY(UnneededMemberFunction /* unneeded-member-function */, 20990, /* DiagArray977 */ 2741, 0, R"()")
DIAG_ENTRY(anonymous_226 /* unqualified-std-cast-call */, 21015, /* DiagArray978 */ 2743, 0, R"()")
DIAG_ENTRY(UnreachableCode /* unreachable-code */, 21041, /* DiagArray979 */ 2745, /* DiagSubGroup979 */ 740, R"()")
DIAG_ENTRY(UnreachableCodeAggressive /* unreachable-code-aggressive */, 21058, 0, /* DiagSubGroup980 */ 744, R"()")
DIAG_ENTRY(UnreachableCodeBreak /* unreachable-code-break */, 21086, /* DiagArray981 */ 2747, 0, R"()")
DIAG_ENTRY(UnreachableCodeFallthrough /* unreachable-code-fallthrough */, 21109, /* DiagArray982 */ 2749, 0, R"()")
DIAG_ENTRY(UnreachableCodeGenericAssoc /* unreachable-code-generic-assoc */, 21138, /* DiagArray983 */ 2751, 0, R"()")
DIAG_ENTRY(UnreachableCodeLoopIncrement /* unreachable-code-loop-increment */, 21169, /* DiagArray984 */ 2753, 0, R"()")
DIAG_ENTRY(UnreachableCodeReturn /* unreachable-code-return */, 21201, /* DiagArray985 */ 2755, 0, R"()")
DIAG_ENTRY(UnsafeBufferUsage /* unsafe-buffer-usage */, 21225, /* DiagArray986 */ 2757, /* DiagSubGroup986 */ 748, R"()")
DIAG_ENTRY(UnsafeBufferUsageInContainer /* unsafe-buffer-usage-in-container */, 21245, /* DiagArray987 */ 2760, 0, R"()")
DIAG_ENTRY(Unsequenced /* unsequenced */, 21278, /* DiagArray988 */ 2762, 0, R"()")
DIAG_ENTRY(UnsupportedABI /* unsupported-abi */, 21290, /* DiagArray989 */ 2765, 0, R"()")
DIAG_ENTRY(UnsupportedAbs /* unsupported-abs */, 21306, /* DiagArray990 */ 2768, 0, R"()")
DIAG_ENTRY(anonymous_214 /* unsupported-availability-guard */, 21322, /* DiagArray991 */ 2771, 0, R"()")
DIAG_ENTRY(UnsupportedCB /* unsupported-cb */, 21353, /* DiagArray992 */ 2773, 0, R"()")
DIAG_ENTRY(anonymous_210 /* unsupported-dll-base-class-template */, 21368, /* DiagArray993 */ 2775, 0, R"()")
DIAG_ENTRY(UnsupportedFPOpt /* unsupported-floating-point-opt */, 21404, /* DiagArray994 */ 2777, 0, R"()")
DIAG_ENTRY(UnsupportedFriend /* unsupported-friend */, 21435, /* DiagArray995 */ 2780, 0, R"()")
DIAG_ENTRY(UnsupportedGPOpt /* unsupported-gpopt */, 21454, /* DiagArray996 */ 2783, 0, R"()")
DIAG_ENTRY(UnsupportedNan /* unsupported-nan */, 21472, /* DiagArray997 */ 2785, 0, R"()")
DIAG_ENTRY(UnsupportedTargetOpt /* unsupported-target-opt */, 21488, /* DiagArray998 */ 2788, 0, R"()")
DIAG_ENTRY(anonymous_220 /* unsupported-visibility */, 21511, /* DiagArray999 */ 2791, 0, R"()")
DIAG_ENTRY(anonymous_228 /* unusable-partial-specialization */, 21534, /* DiagArray1000 */ 2793, 0, R"()")
DIAG_ENTRY(Unused /* unused */, 21566, 0, /* DiagSubGroup1001 */ 750, R"()")
DIAG_ENTRY(UnusedArgument /* unused-argument */, 21573, 0, 0, R"()")
DIAG_ENTRY(UnusedButSetParameter /* unused-but-set-parameter */, 21589, /* DiagArray1003 */ 2795, 0, R"()")
DIAG_ENTRY(UnusedButSetVariable /* unused-but-set-variable */, 21614, /* DiagArray1004 */ 2797, 0, R"()")
DIAG_ENTRY(UnusedCommandLineArgument /* unused-command-line-argument */, 21638, /* DiagArray1005 */ 2799, 0, R"()")
DIAG_ENTRY(UnusedComparison /* unused-comparison */, 21667, /* DiagArray1006 */ 2814, 0, R"()")
DIAG_ENTRY(UnusedConstVariable /* unused-const-variable */, 21685, /* DiagArray1007 */ 2816, 0, R"()")
DIAG_ENTRY(UnusedExceptionParameter /* unused-exception-parameter */, 21707, /* DiagArray1008 */ 2818, 0, R"()")
DIAG_ENTRY(UnusedFunction /* unused-function */, 21734, /* DiagArray1009 */ 2820, /* DiagSubGroup1009 */ 761, R"()")
DIAG_ENTRY(UnusedGetterReturnValue /* unused-getter-return-value */, 21750, /* DiagArray1010 */ 2822, 0, R"()")
DIAG_ENTRY(UnusedLabel /* unused-label */, 21777, /* DiagArray1011 */ 2824, 0, R"()")
DIAG_ENTRY(UnusedLambdaCapture /* unused-lambda-capture */, 21790, /* DiagArray1012 */ 2826, 0, R"()")
DIAG_ENTRY(UnusedLocalTypedef /* unused-local-typedef */, 21812, /* DiagArray1013 */ 2828, 0, R"()")
DIAG_ENTRY(anonymous_67 /* unused-local-typedefs */, 21833, 0, /* DiagSubGroup1014 */ 763, R"()")
DIAG_ENTRY(anonymous_130 /* unused-macros */, 21855, /* DiagArray1015 */ 2830, 0, R"()")
DIAG_ENTRY(UnusedMemberFunction /* unused-member-function */, 21869, /* DiagArray1016 */ 2832, /* DiagSubGroup1016 */ 765, R"()")
DIAG_ENTRY(UnusedParameter /* unused-parameter */, 21892, /* DiagArray1017 */ 2834, 0, R"()")
DIAG_ENTRY(UnusedPrivateField /* unused-private-field */, 21909, /* DiagArray1018 */ 2836, 0, R"()")
DIAG_ENTRY(UnusedPropertyIvar /* unused-property-ivar */, 21930, /* DiagArray1019 */ 2838, 0, R"()")
DIAG_ENTRY(UnusedResult /* unused-result */, 21951, /* DiagArray1020 */ 2840, 0, R"()")
DIAG_ENTRY(UnusedTemplate /* unused-template */, 21965, /* DiagArray1021 */ 2843, /* DiagSubGroup1021 */ 767, R"()")
DIAG_ENTRY(UnusedValue /* unused-value */, 21981, /* DiagArray1022 */ 2845, /* DiagSubGroup1022 */ 769, R"()")
DIAG_ENTRY(UnusedVariable /* unused-variable */, 21994, /* DiagArray1023 */ 2853, /* DiagSubGroup1023 */ 773, R"()")
DIAG_ENTRY(anonymous_281 /* unused-volatile-lvalue */, 22010, /* DiagArray1024 */ 2855, 0, R"()")
DIAG_ENTRY(UsedButMarkedUnused /* used-but-marked-unused */, 22033, /* DiagArray1025 */ 2857, 0, R"()")
DIAG_ENTRY(UserDefinedLiterals /* user-defined-literals */, 22056, /* DiagArray1026 */ 2859, 0, R"()")
DIAG_ENTRY(UserDefinedWarnings /* user-defined-warnings */, 22078, /* DiagArray1027 */ 2861, 0, R"()")
DIAG_ENTRY(Varargs /* varargs */, 22100, /* DiagArray1028 */ 2863, 0, R"()")
DIAG_ENTRY(VariadicMacros /* variadic-macros */, 22108, /* DiagArray1029 */ 2867, 0, R"()")
DIAG_ENTRY(anonymous_200 /* vec-elem-size */, 22124, /* DiagArray1030 */ 2871, 0, R"()")
DIAG_ENTRY(VectorConversion /* vector-conversion */, 22138, /* DiagArray1031 */ 2873, 0, R"()")
DIAG_ENTRY(anonymous_66 /* vector-conversions */, 22156, 0, /* DiagSubGroup1032 */ 775, R"()")
DIAG_ENTRY(VexingParse /* vexing-parse */, 22175, /* DiagArray1033 */ 2875, 0, R"()")
DIAG_ENTRY(Visibility /* visibility */, 22188, /* DiagArray1034 */ 2879, 0, R"()")
DIAG_ENTRY(VLA /* vla */, 22199, /* DiagArray1035 */ 2882, /* DiagSubGroup1035 */ 777, R"()")
DIAG_ENTRY(VLACxxExtension /* vla-cxx-extension */, 22203, /* DiagArray1036 */ 2884, /* DiagSubGroup1036 */ 779, R"()")
DIAG_ENTRY(VLAExtension /* vla-extension */, 22221, /* DiagArray1037 */ 2887, /* DiagSubGroup1037 */ 781, R"()")
DIAG_ENTRY(VLAUseStaticAssert /* vla-extension-static-assert */, 22235, /* DiagArray1038 */ 2889, 0, R"()")
DIAG_ENTRY(VoidPointerToEnumCast /* void-pointer-to-enum-cast */, 22263, /* DiagArray1039 */ 2892, 0, R"()")
DIAG_ENTRY(VoidPointerToIntCast /* void-pointer-to-int-cast */, 22289, /* DiagArray1040 */ 2894, /* DiagSubGroup1040 */ 783, R"()")
DIAG_ENTRY(VoidPointerDeref /* void-ptr-dereference */, 22314, /* DiagArray1041 */ 2896, 0, R"()")
DIAG_ENTRY(VolatileRegisterVar /* volatile-register-var */, 22335, 0, 0, R"()")
DIAG_ENTRY(WebAssemblyExceptionSpec /* wasm-exception-spec */, 22357, /* DiagArray1043 */ 2898, 0, R"()")
DIAG_ENTRY(anonymous_191 /* weak-template-vtables */, 22377, /* DiagArray1044 */ 2900, 0, R"()")
DIAG_ENTRY(anonymous_190 /* weak-vtables */, 22399, /* DiagArray1045 */ 2902, 0, R"()")
DIAG_ENTRY(WritableStrings /* writable-strings */, 22412, /* DiagArray1046 */ 2904, /* DiagSubGroup1046 */ 785, R"()")
DIAG_ENTRY(GCCWriteStrings /* write-strings */, 22429, 0, /* DiagSubGroup1047 */ 787, R"(**Note:** enabling this warning in C will change the semantic behavior of the
program by treating all string literals as having type ``const char *``
instead of ``char *``. This can cause unexpected behaviors with type-sensitive
constructs like ``_Generic``.)")
DIAG_ENTRY(XorUsedAsPow /* xor-used-as-pow */, 22443, /* DiagArray1048 */ 2906, 0, R"()")
DIAG_ENTRY(anonymous_302 /* zero-as-null-pointer-constant */, 22459, /* DiagArray1049 */ 2910, 0, R"()")
DIAG_ENTRY(ZeroLengthArray /* zero-length-array */, 22489, /* DiagArray1050 */ 2912, 0, R"()")
#endif // DIAG_ENTRY


#ifdef GET_CATEGORY_TABLE
CATEGORY("", DiagCat_None)
CATEGORY("Lexical or Preprocessor Issue", DiagCat_Lexical_or_Preprocessor_Issue)
CATEGORY("Semantic Issue", DiagCat_Semantic_Issue)
CATEGORY("Parse Issue", DiagCat_Parse_Issue)
CATEGORY("Lambda Issue", DiagCat_Lambda_Issue)
CATEGORY("Verification", DiagCat_Verification)
CATEGORY("ARC Semantic Issue", DiagCat_ARC_Semantic_Issue)
CATEGORY("ARC and @properties", DiagCat_ARC_and__properties)
CATEGORY("ARC Casting Rules", DiagCat_ARC_Casting_Rules)
CATEGORY("ARC Parse Issue", DiagCat_ARC_Parse_Issue)
CATEGORY("ARC Weak References", DiagCat_ARC_Weak_References)
CATEGORY("ARC Restrictions", DiagCat_ARC_Restrictions)
CATEGORY("OpenMP Issue", DiagCat_OpenMP_Issue)
CATEGORY("Inline Assembly Issue", DiagCat_Inline_Assembly_Issue)
CATEGORY("AST Deserialization Issue", DiagCat_AST_Deserialization_Issue)
CATEGORY("Modules Issue", DiagCat_Modules_Issue)
CATEGORY("Codegen ABI Check", DiagCat_Codegen_ABI_Check)
CATEGORY("Coroutines Issue", DiagCat_Coroutines_Issue)
CATEGORY("Command line", DiagCat_Command_line)
CATEGORY("Concepts Issue", DiagCat_Concepts_Issue)
CATEGORY("Dependency Directive Source Scanner Issue", DiagCat_Dependency_Directive_Source_Scanner_Issue)
CATEGORY("Backend Issue", DiagCat_Backend_Issue)
CATEGORY("SourceMgr Reported Issue", DiagCat_SourceMgr_Reported_Issue)
CATEGORY("API Notes Issue", DiagCat_API_Notes_Issue)
CATEGORY("Related Result Type Issue", DiagCat_Related_Result_Type_Issue)
CATEGORY("AST Serialization Issue", DiagCat_AST_Serialization_Issue)
CATEGORY("Nullability Issue", DiagCat_Nullability_Issue)
CATEGORY("Generics Issue", DiagCat_Generics_Issue)
CATEGORY("User-Defined Issue", DiagCat_User_Defined_Issue)
CATEGORY("Refactoring Invocation Issue", DiagCat_Refactoring_Invocation_Issue)
CATEGORY("VTable ABI Issue", DiagCat_VTable_ABI_Issue)
CATEGORY("Value Conversion Issue", DiagCat_Value_Conversion_Issue)
CATEGORY("Documentation Issue", DiagCat_Documentation_Issue)
CATEGORY("ARC Retain Cycle", DiagCat_ARC_Retain_Cycle)
CATEGORY("Deprecations", DiagCat_Deprecations)
CATEGORY("Format String Issue", DiagCat_Format_String_Issue)
CATEGORY("Cocoa API Issue", DiagCat_Cocoa_API_Issue)
CATEGORY("#pragma message Directive", DiagCat__pragma_message_Directive)
CATEGORY("Instrumentation Issue", DiagCat_Instrumentation_Issue)
CATEGORY("Unused Entity Issue", DiagCat_Unused_Entity_Issue)
#endif // GET_CATEGORY_TABLE

