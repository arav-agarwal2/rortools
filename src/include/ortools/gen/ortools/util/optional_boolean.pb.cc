// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ortools/util/optional_boolean.proto

#include "ortools/util/optional_boolean.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace operations_research {
}  // namespace operations_research
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_ortools_2futil_2foptional_5fboolean_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_ortools_2futil_2foptional_5fboolean_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ortools_2futil_2foptional_5fboolean_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ortools_2futil_2foptional_5fboolean_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_ortools_2futil_2foptional_5fboolean_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#ortools/util/optional_boolean.proto\022\023o"
  "perations_research*F\n\017OptionalBoolean\022\024\n"
  "\020BOOL_UNSPECIFIED\020\000\022\016\n\nBOOL_FALSE\020\002\022\r\n\tB"
  "OOL_TRUE\020\003B1\n\027com.google.ortools.utilP\001\252"
  "\002\023Google.OrTools.Utilb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ortools_2futil_2foptional_5fboolean_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ortools_2futil_2foptional_5fboolean_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ortools_2futil_2foptional_5fboolean_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ortools_2futil_2foptional_5fboolean_2eproto = {
  false, false, descriptor_table_protodef_ortools_2futil_2foptional_5fboolean_2eproto, "ortools/util/optional_boolean.proto", 189,
  &descriptor_table_ortools_2futil_2foptional_5fboolean_2eproto_once, descriptor_table_ortools_2futil_2foptional_5fboolean_2eproto_sccs, descriptor_table_ortools_2futil_2foptional_5fboolean_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_ortools_2futil_2foptional_5fboolean_2eproto::offsets,
  file_level_metadata_ortools_2futil_2foptional_5fboolean_2eproto, 0, file_level_enum_descriptors_ortools_2futil_2foptional_5fboolean_2eproto, file_level_service_descriptors_ortools_2futil_2foptional_5fboolean_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ortools_2futil_2foptional_5fboolean_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ortools_2futil_2foptional_5fboolean_2eproto)), true);
namespace operations_research {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* OptionalBoolean_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ortools_2futil_2foptional_5fboolean_2eproto);
  return file_level_enum_descriptors_ortools_2futil_2foptional_5fboolean_2eproto[0];
}
bool OptionalBoolean_IsValid(int value) {
  switch (value) {
    case 0:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace operations_research
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
