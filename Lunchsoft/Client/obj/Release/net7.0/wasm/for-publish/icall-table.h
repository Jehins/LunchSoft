#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
179,
184,
185,
186,
187,
188,
189,
190,
192,
193,
240,
241,
243,
266,
267,
268,
278,
279,
280,
281,
354,
355,
356,
359,
388,
389,
391,
393,
395,
397,
402,
410,
411,
412,
413,
414,
415,
416,
417,
418,
520,
528,
531,
533,
538,
539,
541,
542,
546,
547,
549,
550,
553,
554,
555,
558,
561,
563,
565,
626,
628,
630,
639,
640,
641,
643,
649,
650,
651,
652,
653,
661,
662,
663,
667,
668,
670,
672,
854,
995,
996,
5404,
5405,
5407,
5408,
5409,
5410,
5411,
5413,
5415,
5417,
5423,
5425,
5431,
5432,
5434,
5436,
5438,
5449,
5458,
5459,
5461,
5462,
5463,
5464,
5465,
5467,
5469,
6365,
6369,
6371,
6372,
6373,
6374,
6479,
6480,
6481,
6482,
6500,
6501,
6502,
6504,
6544,
6593,
6604,
6605,
6606,
6847,
6849,
6850,
6876,
6894,
6900,
6907,
6917,
6920,
6994,
7004,
7006,
7007,
7013,
7026,
7046,
7047,
7055,
7057,
7064,
7065,
7068,
7070,
7075,
7081,
7082,
7089,
7091,
7103,
7106,
7107,
7108,
7119,
7128,
7134,
7135,
7136,
7138,
7139,
7157,
7159,
7173,
7196,
7197,
7217,
7241,
7242,
7601,
7602,
7733,
7908,
7909,
7912,
7915,
7965,
8224,
8225,
8934,
8955,
8962,
8964,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 179,
ves_icall_System_Array_InternalCreate,
// token 184,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 185,
ves_icall_System_Array_CanChangePrimitive,
// token 186,
ves_icall_System_Array_FastCopy_raw,
// token 187,
ves_icall_System_Array_GetLength_raw,
// token 188,
ves_icall_System_Array_GetLowerBound_raw,
// token 189,
ves_icall_System_Array_GetGenericValue_icall,
// token 190,
ves_icall_System_Array_GetValueImpl_raw,
// token 192,
ves_icall_System_Array_SetValueImpl_raw,
// token 193,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 240,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 241,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 243,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 266,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 267,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 268,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 278,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 279,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 280,
ves_icall_System_Enum_InternalGetCorElementType,
// token 281,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 354,
ves_icall_System_Environment_get_ProcessorCount,
// token 355,
ves_icall_System_Environment_get_TickCount,
// token 356,
ves_icall_System_Environment_get_TickCount64,
// token 359,
ves_icall_System_Environment_FailFast_raw,
// token 388,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 389,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 391,
ves_icall_System_GC_SuppressFinalize_raw,
// token 393,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 395,
ves_icall_System_GC_GetGCMemoryInfo,
// token 397,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 402,
ves_icall_System_Object_MemberwiseClone_raw,
// token 410,
ves_icall_System_Math_Ceiling,
// token 411,
ves_icall_System_Math_Cos,
// token 412,
ves_icall_System_Math_Floor,
// token 413,
ves_icall_System_Math_Log10,
// token 414,
ves_icall_System_Math_Pow,
// token 415,
ves_icall_System_Math_Sin,
// token 416,
ves_icall_System_Math_Sqrt,
// token 417,
ves_icall_System_Math_Tan,
// token 418,
ves_icall_System_Math_ModF,
// token 520,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 528,
ves_icall_RuntimeType_make_array_type_raw,
// token 531,
ves_icall_RuntimeType_make_byref_type_raw,
// token 533,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 538,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 539,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 541,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 542,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 546,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 547,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 549,
ves_icall_System_RuntimeType_getFullName_raw,
// token 550,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 553,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 554,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 555,
ves_icall_RuntimeType_GetFields_native_raw,
// token 558,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 561,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 563,
ves_icall_RuntimeType_GetName_raw,
// token 565,
ves_icall_RuntimeType_GetNamespace_raw,
// token 626,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 628,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 630,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 639,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 640,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 641,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 643,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 649,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 650,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 651,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 652,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 653,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 661,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 662,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 663,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 667,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 668,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 670,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 672,
ves_icall_System_String_FastAllocateString_raw,
// token 854,
ves_icall_System_Type_internal_from_handle_raw,
// token 995,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 996,
ves_icall_System_ValueType_Equals_raw,
// token 5404,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5405,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5407,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5408,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5409,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5410,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5411,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5413,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5415,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5417,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5423,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5425,
mono_monitor_exit_icall_raw,
// token 5431,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5432,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5434,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5436,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5438,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5449,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5458,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5459,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5461,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5462,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5463,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5464,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5465,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5467,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5469,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6365,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6369,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6371,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6372,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6373,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6374,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6479,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6480,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6481,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6482,
ves_icall_System_GCHandle_InternalSet_raw,
// token 6500,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6501,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6502,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6504,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 6544,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6593,
mono_object_hash_icall_raw,
// token 6604,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6605,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6606,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6847,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6849,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6850,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6876,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6894,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6900,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6907,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6917,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6920,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6994,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7004,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 7006,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7007,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 7013,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7026,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7046,
ves_icall_reflection_get_token_raw,
// token 7047,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7055,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7057,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7064,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7065,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7068,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7070,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7075,
ves_icall_reflection_get_token_raw,
// token 7081,
ves_icall_get_method_info_raw,
// token 7082,
ves_icall_get_method_attributes,
// token 7089,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7091,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7103,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7106,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7107,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7108,
ves_icall_reflection_get_token_raw,
// token 7119,
ves_icall_InternalInvoke_raw,
// token 7128,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7134,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7135,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7136,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7138,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7139,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7157,
ves_icall_InvokeClassConstructor_raw,
// token 7159,
ves_icall_InternalInvoke_raw,
// token 7173,
ves_icall_reflection_get_token_raw,
// token 7196,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 7197,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7217,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7241,
ves_icall_reflection_get_token_raw,
// token 7242,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7601,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 7602,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7733,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7908,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7909,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7912,
ves_icall_ModuleBuilder_getToken_raw,
// token 7915,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7965,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8224,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8225,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 8934,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8955,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8962,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8964,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
};
