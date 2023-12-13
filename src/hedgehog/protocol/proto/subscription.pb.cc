// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hedgehog/protocol/proto/subscription.proto

#include "hedgehog/protocol/proto/subscription.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace hedgehog {
namespace protocol {
namespace proto {

inline constexpr Subscription::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : subscribe_{false},
        timeout_{0u},
        granularity_timeout_{0u},
        granularity_{},
        _cached_size_{0},
        _oneof_case_{} {}

template <typename>
PROTOBUF_CONSTEXPR Subscription::Subscription(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct SubscriptionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SubscriptionDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SubscriptionDefaultTypeInternal() {}
  union {
    Subscription _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SubscriptionDefaultTypeInternal _Subscription_default_instance_;
}  // namespace proto
}  // namespace protocol
}  // namespace hedgehog
static ::_pb::Metadata file_level_metadata_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto = nullptr;
const ::uint32_t TableStruct_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::hedgehog::protocol::proto::Subscription, _internal_metadata_),
    ~0u,  // no _extensions_
    PROTOBUF_FIELD_OFFSET(::hedgehog::protocol::proto::Subscription, _impl_._oneof_case_[0]),
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::hedgehog::protocol::proto::Subscription, _impl_.subscribe_),
    PROTOBUF_FIELD_OFFSET(::hedgehog::protocol::proto::Subscription, _impl_.timeout_),
    PROTOBUF_FIELD_OFFSET(::hedgehog::protocol::proto::Subscription, _impl_.granularity_timeout_),
    ::_pbi::kInvalidFieldOffsetTag,
    PROTOBUF_FIELD_OFFSET(::hedgehog::protocol::proto::Subscription, _impl_.granularity_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::hedgehog::protocol::proto::Subscription)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::hedgehog::protocol::proto::_Subscription_default_instance_._instance,
};
const char descriptor_table_protodef_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n*hedgehog/protocol/proto/subscription.p"
    "roto\022\027hedgehog.protocol.proto\"y\n\014Subscri"
    "ption\022\021\n\tsubscribe\030\001 \001(\010\022\017\n\007timeout\030\002 \001("
    "\r\022\033\n\023granularity_timeout\030\003 \001(\r\022\031\n\017int_gr"
    "anularity\030\004 \001(\rH\000B\r\n\013granularityB0\n\037at.p"
    "ria.hedgehog.protocol.protoB\rSubscriptio"
    "nPb\006proto3"
};
static ::absl::once_flag descriptor_table_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto = {
    false,
    false,
    250,
    descriptor_table_protodef_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto,
    "hedgehog/protocol/proto/subscription.proto",
    &descriptor_table_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto::offsets,
    file_level_metadata_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto,
    file_level_enum_descriptors_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto,
    file_level_service_descriptors_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto_getter() {
  return &descriptor_table_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto(&descriptor_table_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto);
namespace hedgehog {
namespace protocol {
namespace proto {
// ===================================================================

class Subscription::_Internal {
 public:
  static constexpr ::int32_t kOneofCaseOffset =
    PROTOBUF_FIELD_OFFSET(::hedgehog::protocol::proto::Subscription, _impl_._oneof_case_);
};

Subscription::Subscription(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:hedgehog.protocol.proto.Subscription)
}
inline PROTOBUF_NDEBUG_INLINE Subscription::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : granularity_{},
        _cached_size_{0},
        _oneof_case_{from._oneof_case_[0]} {}

Subscription::Subscription(
    ::google::protobuf::Arena* arena,
    const Subscription& from)
    : ::google::protobuf::Message(arena) {
  Subscription* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, subscribe_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, subscribe_),
           offsetof(Impl_, granularity_timeout_) -
               offsetof(Impl_, subscribe_) +
               sizeof(Impl_::granularity_timeout_));
  switch (granularity_case()) {
    case GRANULARITY_NOT_SET:
      break;
      case kIntGranularity:
        _impl_.granularity_.int_granularity_ = from._impl_.granularity_.int_granularity_;
        break;
  }

  // @@protoc_insertion_point(copy_constructor:hedgehog.protocol.proto.Subscription)
}
inline PROTOBUF_NDEBUG_INLINE Subscription::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : granularity_{},
        _cached_size_{0},
        _oneof_case_{} {}

inline void Subscription::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, subscribe_),
           0,
           offsetof(Impl_, granularity_timeout_) -
               offsetof(Impl_, subscribe_) +
               sizeof(Impl_::granularity_timeout_));
}
Subscription::~Subscription() {
  // @@protoc_insertion_point(destructor:hedgehog.protocol.proto.Subscription)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Subscription::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  if (has_granularity()) {
    clear_granularity();
  }
  _impl_.~Impl_();
}

void Subscription::clear_granularity() {
// @@protoc_insertion_point(one_of_clear_start:hedgehog.protocol.proto.Subscription)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  switch (granularity_case()) {
    case kIntGranularity: {
      // No need to clear
      break;
    }
    case GRANULARITY_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = GRANULARITY_NOT_SET;
}


PROTOBUF_NOINLINE void Subscription::Clear() {
// @@protoc_insertion_point(message_clear_start:hedgehog.protocol.proto.Subscription)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.subscribe_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.granularity_timeout_) -
      reinterpret_cast<char*>(&_impl_.subscribe_)) + sizeof(_impl_.granularity_timeout_));
  clear_granularity();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Subscription::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 4, 0, 0, 2> Subscription::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    4, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967280,  // skipmap
    offsetof(decltype(_table_), field_entries),
    4,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Subscription_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // bool subscribe = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<bool, offsetof(Subscription, _impl_.subscribe_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(Subscription, _impl_.subscribe_)}},
    // uint32 timeout = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Subscription, _impl_.timeout_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(Subscription, _impl_.timeout_)}},
    // uint32 granularity_timeout = 3;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Subscription, _impl_.granularity_timeout_), 63>(),
     {24, 63, 0, PROTOBUF_FIELD_OFFSET(Subscription, _impl_.granularity_timeout_)}},
  }}, {{
    65535, 65535
  }}, {{
    // bool subscribe = 1;
    {PROTOBUF_FIELD_OFFSET(Subscription, _impl_.subscribe_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBool)},
    // uint32 timeout = 2;
    {PROTOBUF_FIELD_OFFSET(Subscription, _impl_.timeout_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // uint32 granularity_timeout = 3;
    {PROTOBUF_FIELD_OFFSET(Subscription, _impl_.granularity_timeout_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // uint32 int_granularity = 4;
    {PROTOBUF_FIELD_OFFSET(Subscription, _impl_.granularity_.int_granularity_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kUInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* Subscription::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hedgehog.protocol.proto.Subscription)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // bool subscribe = 1;
  if (this->_internal_subscribe() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        1, this->_internal_subscribe(), target);
  }

  // uint32 timeout = 2;
  if (this->_internal_timeout() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        2, this->_internal_timeout(), target);
  }

  // uint32 granularity_timeout = 3;
  if (this->_internal_granularity_timeout() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        3, this->_internal_granularity_timeout(), target);
  }

  // uint32 int_granularity = 4;
  if (granularity_case() == kIntGranularity) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        4, this->_internal_int_granularity(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hedgehog.protocol.proto.Subscription)
  return target;
}

::size_t Subscription::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hedgehog.protocol.proto.Subscription)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool subscribe = 1;
  if (this->_internal_subscribe() != 0) {
    total_size += 2;
  }

  // uint32 timeout = 2;
  if (this->_internal_timeout() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_timeout());
  }

  // uint32 granularity_timeout = 3;
  if (this->_internal_granularity_timeout() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_granularity_timeout());
  }

  switch (granularity_case()) {
    // uint32 int_granularity = 4;
    case kIntGranularity: {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_int_granularity());
      break;
    }
    case GRANULARITY_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Subscription::_class_data_ = {
    Subscription::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Subscription::GetClassData() const {
  return &_class_data_;
}

void Subscription::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Subscription*>(&to_msg);
  auto& from = static_cast<const Subscription&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hedgehog.protocol.proto.Subscription)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_subscribe() != 0) {
    _this->_internal_set_subscribe(from._internal_subscribe());
  }
  if (from._internal_timeout() != 0) {
    _this->_internal_set_timeout(from._internal_timeout());
  }
  if (from._internal_granularity_timeout() != 0) {
    _this->_internal_set_granularity_timeout(from._internal_granularity_timeout());
  }
  switch (from.granularity_case()) {
    case kIntGranularity: {
      _this->_internal_set_int_granularity(from._internal_int_granularity());
      break;
    }
    case GRANULARITY_NOT_SET: {
      break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Subscription::CopyFrom(const Subscription& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hedgehog.protocol.proto.Subscription)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Subscription::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Subscription::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Subscription::InternalSwap(Subscription* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Subscription, _impl_.granularity_timeout_)
      + sizeof(Subscription::_impl_.granularity_timeout_)
      - PROTOBUF_FIELD_OFFSET(Subscription, _impl_.subscribe_)>(
          reinterpret_cast<char*>(&_impl_.subscribe_),
          reinterpret_cast<char*>(&other->_impl_.subscribe_));
  swap(_impl_.granularity_, other->_impl_.granularity_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::google::protobuf::Metadata Subscription::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto_getter, &descriptor_table_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto_once,
      file_level_metadata_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace protocol
}  // namespace hedgehog
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"