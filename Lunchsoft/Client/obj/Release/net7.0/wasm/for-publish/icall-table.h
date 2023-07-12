#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
181,
189,
190,
191,
192,
193,
194,
195,
196,
197,
200,
201,
365,
366,
368,
396,
397,
398,
418,
419,
420,
421,
519,
520,
521,
524,
558,
559,
561,
563,
565,
567,
572,
580,
581,
582,
583,
584,
585,
586,
587,
588,
589,
590,
591,
592,
593,
594,
595,
596,
598,
599,
600,
601,
602,
603,
604,
692,
693,
694,
695,
696,
697,
698,
699,
700,
701,
702,
703,
704,
705,
706,
707,
708,
710,
711,
712,
713,
714,
715,
716,
840,
848,
851,
853,
858,
859,
861,
862,
866,
867,
869,
870,
873,
874,
875,
878,
880,
883,
885,
887,
957,
959,
961,
970,
971,
972,
973,
975,
982,
983,
984,
985,
986,
994,
995,
996,
1000,
1001,
1003,
1005,
1202,
1378,
1379,
8128,
8129,
8131,
8132,
8133,
8134,
8135,
8137,
8139,
8141,
8142,
8151,
8153,
8159,
8160,
8162,
8164,
8166,
8177,
8186,
8187,
8189,
8190,
8191,
8192,
8193,
8195,
8197,
9166,
9170,
9172,
9173,
9174,
9175,
9311,
9312,
9313,
9314,
9334,
9335,
9336,
9338,
9381,
9432,
9434,
9445,
9446,
9447,
9706,
9707,
9709,
9710,
9739,
9758,
9764,
9771,
9781,
9784,
9860,
9862,
9873,
9875,
9876,
9877,
9884,
9897,
9917,
9918,
9926,
9928,
9935,
9936,
9939,
9941,
9946,
9952,
9953,
9960,
9962,
9974,
9977,
9978,
9979,
9990,
9999,
10005,
10006,
10007,
10009,
10010,
10028,
10030,
10044,
10067,
10068,
10088,
10118,
10119,
10510,
10511,
10652,
10889,
10890,
10896,
10897,
10898,
10903,
10964,
11243,
11244,
12272,
12293,
12300,
12302,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
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
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
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
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
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
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
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
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
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
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 181,
ves_icall_System_Array_InternalCreate,
// token 189,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 190,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 191,
ves_icall_System_Array_CanChangePrimitive,
// token 192,
ves_icall_System_Array_FastCopy_raw,
// token 193,
ves_icall_System_Array_GetLength_raw,
// token 194,
ves_icall_System_Array_GetLowerBound_raw,
// token 195,
ves_icall_System_Array_GetGenericValue_icall,
// token 196,
ves_icall_System_Array_GetValueImpl_raw,
// token 197,
ves_icall_System_Array_SetGenericValue_icall,
// token 200,
ves_icall_System_Array_SetValueImpl_raw,
// token 201,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 365,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 366,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 368,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 396,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 397,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 398,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 418,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 419,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 420,
ves_icall_System_Enum_InternalGetCorElementType,
// token 421,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 519,
ves_icall_System_Environment_get_ProcessorCount,
// token 520,
ves_icall_System_Environment_get_TickCount,
// token 521,
ves_icall_System_Environment_get_TickCount64,
// token 524,
ves_icall_System_Environment_FailFast_raw,
// token 558,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 559,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 561,
ves_icall_System_GC_SuppressFinalize_raw,
// token 563,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 565,
ves_icall_System_GC_GetGCMemoryInfo,
// token 567,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 572,
ves_icall_System_Object_MemberwiseClone_raw,
// token 580,
ves_icall_System_Math_Acos,
// token 581,
ves_icall_System_Math_Acosh,
// token 582,
ves_icall_System_Math_Asin,
// token 583,
ves_icall_System_Math_Asinh,
// token 584,
ves_icall_System_Math_Atan,
// token 585,
ves_icall_System_Math_Atan2,
// token 586,
ves_icall_System_Math_Atanh,
// token 587,
ves_icall_System_Math_Cbrt,
// token 588,
ves_icall_System_Math_Ceiling,
// token 589,
ves_icall_System_Math_Cos,
// token 590,
ves_icall_System_Math_Cosh,
// token 591,
ves_icall_System_Math_Exp,
// token 592,
ves_icall_System_Math_Floor,
// token 593,
ves_icall_System_Math_Log,
// token 594,
ves_icall_System_Math_Log10,
// token 595,
ves_icall_System_Math_Pow,
// token 596,
ves_icall_System_Math_Sin,
// token 598,
ves_icall_System_Math_Sinh,
// token 599,
ves_icall_System_Math_Sqrt,
// token 600,
ves_icall_System_Math_Tan,
// token 601,
ves_icall_System_Math_Tanh,
// token 602,
ves_icall_System_Math_FusedMultiplyAdd,
// token 603,
ves_icall_System_Math_Log2,
// token 604,
ves_icall_System_Math_ModF,
// token 692,
ves_icall_System_MathF_Acos,
// token 693,
ves_icall_System_MathF_Acosh,
// token 694,
ves_icall_System_MathF_Asin,
// token 695,
ves_icall_System_MathF_Asinh,
// token 696,
ves_icall_System_MathF_Atan,
// token 697,
ves_icall_System_MathF_Atan2,
// token 698,
ves_icall_System_MathF_Atanh,
// token 699,
ves_icall_System_MathF_Cbrt,
// token 700,
ves_icall_System_MathF_Ceiling,
// token 701,
ves_icall_System_MathF_Cos,
// token 702,
ves_icall_System_MathF_Cosh,
// token 703,
ves_icall_System_MathF_Exp,
// token 704,
ves_icall_System_MathF_Floor,
// token 705,
ves_icall_System_MathF_Log,
// token 706,
ves_icall_System_MathF_Log10,
// token 707,
ves_icall_System_MathF_Pow,
// token 708,
ves_icall_System_MathF_Sin,
// token 710,
ves_icall_System_MathF_Sinh,
// token 711,
ves_icall_System_MathF_Sqrt,
// token 712,
ves_icall_System_MathF_Tan,
// token 713,
ves_icall_System_MathF_Tanh,
// token 714,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 715,
ves_icall_System_MathF_Log2,
// token 716,
ves_icall_System_MathF_ModF,
// token 840,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 848,
ves_icall_RuntimeType_make_array_type_raw,
// token 851,
ves_icall_RuntimeType_make_byref_type_raw,
// token 853,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 858,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 859,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 861,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 862,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 866,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 867,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 869,
ves_icall_System_RuntimeType_getFullName_raw,
// token 870,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 873,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 874,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 875,
ves_icall_RuntimeType_GetFields_native_raw,
// token 878,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 880,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 883,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 885,
ves_icall_RuntimeType_GetName_raw,
// token 887,
ves_icall_RuntimeType_GetNamespace_raw,
// token 957,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 959,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 961,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 970,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 971,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 972,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 973,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 975,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 982,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 983,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 984,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 985,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 986,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 994,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 995,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 996,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1000,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1001,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1003,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1005,
ves_icall_System_String_FastAllocateString_raw,
// token 1202,
ves_icall_System_Type_internal_from_handle_raw,
// token 1378,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1379,
ves_icall_System_ValueType_Equals_raw,
// token 8128,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8129,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8131,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8132,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8133,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8134,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8135,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8137,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8139,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8141,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 8142,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8151,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8153,
mono_monitor_exit_icall_raw,
// token 8159,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 8160,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8162,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8164,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8166,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8177,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 8186,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8187,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8189,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8190,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8191,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8192,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8193,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8195,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8197,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9166,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9170,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9172,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9173,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9174,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9175,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9311,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9312,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9313,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9314,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9334,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9335,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9336,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9338,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 9381,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9432,
mono_object_hash_icall_raw,
// token 9434,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9445,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9446,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9447,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9706,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9707,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9709,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9710,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9739,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9758,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9764,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9771,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9781,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9784,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9860,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9862,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9873,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9875,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9876,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9877,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9884,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9897,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9917,
ves_icall_reflection_get_token_raw,
// token 9918,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9926,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9928,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9935,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9936,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9939,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9941,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9946,
ves_icall_reflection_get_token_raw,
// token 9952,
ves_icall_get_method_info_raw,
// token 9953,
ves_icall_get_method_attributes,
// token 9960,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9962,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9974,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9977,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9978,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9979,
ves_icall_reflection_get_token_raw,
// token 9990,
ves_icall_InternalInvoke_raw,
// token 9999,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10005,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10006,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10007,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10009,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10010,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10028,
ves_icall_InvokeClassConstructor_raw,
// token 10030,
ves_icall_InternalInvoke_raw,
// token 10044,
ves_icall_reflection_get_token_raw,
// token 10067,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 10068,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10088,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10118,
ves_icall_reflection_get_token_raw,
// token 10119,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10510,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 10511,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10652,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10889,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10890,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10896,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10897,
ves_icall_ModuleBuilder_getToken_raw,
// token 10898,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10903,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10964,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11243,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11244,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 12272,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12293,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12300,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12302,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
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
1,
0,
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
0,
0,
0,
0,
};
