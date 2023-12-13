// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hedgehog/protocol/proto/emergency.proto

#include "hedgehog/protocol/proto/emergency.pb.h"

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

inline constexpr EmergencyAction::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : activate_{false},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR EmergencyAction::EmergencyAction(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct EmergencyActionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EmergencyActionDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~EmergencyActionDefaultTypeInternal() {}
  union {
    EmergencyAction _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EmergencyActionDefaultTypeInternal _EmergencyAction_default_instance_;

inline constexpr EmergencyMessage::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        subscription_{nullptr},
        active_{false} {}

template <typename>
PROTOBUF_CONSTEXPR EmergencyMessage::EmergencyMessage(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct EmergencyMessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EmergencyMessageDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~EmergencyMessageDefaultTypeInternal() {}
  union {
    EmergencyMessage _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EmergencyMessageDefaultTypeInternal _EmergencyMessage_default_instance_;
}  // namespace proto
}  // namespace protocol
}  // namespace hedgehog
static ::_pb::Metadata file_level_metadata_hedgehog_2fprotocol_2fproto_2femergency_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_hedgehog_2fprotocol_2fproto_2femergency_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_hedgehog_2fprotocol_2fproto_2femergency_2eproto = nullptr;
const ::uint32_t TableStruct_hedgehog_2fprotocol_2fproto_2femergency_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::hedgehog::protocol::proto::EmergencyAction, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::hedgehog::protocol::proto::EmergencyAction, _impl_.activate_),
    PROTOBUF_FIELD_OFFSET(::hedgehog::protocol::proto::EmergencyMessage, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::hedgehog::protocol::proto::EmergencyMessage, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::hedgehog::protocol::proto::EmergencyMessage, _impl_.active_),
    PROTOBUF_FIELD_OFFSET(::hedgehog::protocol::proto::EmergencyMessage, _impl_.subscription_),
    ~0u,
    0,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::hedgehog::protocol::proto::EmergencyAction)},
        {9, 19, -1, sizeof(::hedgehog::protocol::proto::EmergencyMessage)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::hedgehog::protocol::proto::_EmergencyAction_default_instance_._instance,
    &::hedgehog::protocol::proto::_EmergencyMessage_default_instance_._instance,
};
const char descriptor_table_protodef_hedgehog_2fprotocol_2fproto_2femergency_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\'hedgehog/protocol/proto/emergency.prot"
    "o\022\027hedgehog.protocol.proto\032*hedgehog/pro"
    "tocol/proto/subscription.proto\"#\n\017Emerge"
    "ncyAction\022\020\n\010activate\030\001 \001(\010\"_\n\020Emergency"
    "Message\022\016\n\006active\030\001 \001(\010\022;\n\014subscription\030"
    "\002 \001(\0132%.hedgehog.protocol.proto.Subscrip"
    "tionB-\n\037at.pria.hedgehog.protocol.protoB"
    "\nEmergencyPb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_hedgehog_2fprotocol_2fproto_2femergency_2eproto_deps[1] =
    {
        &::descriptor_table_hedgehog_2fprotocol_2fproto_2fsubscription_2eproto,
};
static ::absl::once_flag descriptor_table_hedgehog_2fprotocol_2fproto_2femergency_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_hedgehog_2fprotocol_2fproto_2femergency_2eproto = {
    false,
    false,
    299,
    descriptor_table_protodef_hedgehog_2fprotocol_2fproto_2femergency_2eproto,
    "hedgehog/protocol/proto/emergency.proto",
    &descriptor_table_hedgehog_2fprotocol_2fproto_2femergency_2eproto_once,
    descriptor_table_hedgehog_2fprotocol_2fproto_2femergency_2eproto_deps,
    1,
    2,
    schemas,
    file_default_instances,
    TableStruct_hedgehog_2fprotocol_2fproto_2femergency_2eproto::offsets,
    file_level_metadata_hedgehog_2fprotocol_2fproto_2femergency_2eproto,
    file_level_enum_descriptors_hedgehog_2fprotocol_2fproto_2femergency_2eproto,
    file_level_service_descriptors_hedgehog_2fprotocol_2fproto_2femergency_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_hedgehog_2fprotocol_2fproto_2femergency_2eproto_getter() {
  return &descriptor_table_hedgehog_2fprotocol_2fproto_2femergency_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_hedgehog_2fprotocol_2fproto_2femergency_2eproto(&descriptor_table_hedgehog_2fprotocol_2fproto_2femergency_2eproto);
namespace hedgehog {
namespace protocol {
namespace proto {
// ===================================================================

class EmergencyAction::_Internal {
 public:
};

EmergencyAction::EmergencyAction(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:hedgehog.protocol.proto.EmergencyAction)
}
EmergencyAction::EmergencyAction(
    ::google::protobuf::Arena* arena, const EmergencyAction& from)
    : EmergencyAction(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE EmergencyAction::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void EmergencyAction::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.activate_ = {};
}
EmergencyAction::~EmergencyAction() {
  // @@protoc_insertion_point(destructor:hedgehog.protocol.proto.EmergencyAction)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void EmergencyAction::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void EmergencyAction::Clear() {
// @@protoc_insertion_point(message_clear_start:hedgehog.protocol.proto.EmergencyAction)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.activate_ = false;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* EmergencyAction::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> EmergencyAction::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_EmergencyAction_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // bool activate = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<bool, offsetof(EmergencyAction, _impl_.activate_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(EmergencyAction, _impl_.activate_)}},
  }}, {{
    65535, 65535
  }}, {{
    // bool activate = 1;
    {PROTOBUF_FIELD_OFFSET(EmergencyAction, _impl_.activate_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBool)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* EmergencyAction::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hedgehog.protocol.proto.EmergencyAction)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // bool activate = 1;
  if (this->_internal_activate() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        1, this->_internal_activate(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hedgehog.protocol.proto.EmergencyAction)
  return target;
}

::size_t EmergencyAction::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hedgehog.protocol.proto.EmergencyAction)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool activate = 1;
  if (this->_internal_activate() != 0) {
    total_size += 2;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData EmergencyAction::_class_data_ = {
    EmergencyAction::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* EmergencyAction::GetClassData() const {
  return &_class_data_;
}

void EmergencyAction::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<EmergencyAction*>(&to_msg);
  auto& from = static_cast<const EmergencyAction&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hedgehog.protocol.proto.EmergencyAction)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_activate() != 0) {
    _this->_internal_set_activate(from._internal_activate());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void EmergencyAction::CopyFrom(const EmergencyAction& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hedgehog.protocol.proto.EmergencyAction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool EmergencyAction::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* EmergencyAction::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void EmergencyAction::InternalSwap(EmergencyAction* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        swap(_impl_.activate_, other->_impl_.activate_);
}

::google::protobuf::Metadata EmergencyAction::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_hedgehog_2fprotocol_2fproto_2femergency_2eproto_getter, &descriptor_table_hedgehog_2fprotocol_2fproto_2femergency_2eproto_once,
      file_level_metadata_hedgehog_2fprotocol_2fproto_2femergency_2eproto[0]);
}
// ===================================================================

class EmergencyMessage::_Internal {
 public:
  using HasBits = decltype(std::declval<EmergencyMessage>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(EmergencyMessage, _impl_._has_bits_);
  static const ::hedgehog::protocol::proto::Subscription& subscription(const EmergencyMessage* msg);
  static void set_has_subscription(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::hedgehog::protocol::proto::Subscription& EmergencyMessage::_Internal::subscription(const EmergencyMessage* msg) {
  return *msg->_impl_.subscription_;
}
void EmergencyMessage::clear_subscription() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (_impl_.subscription_ != nullptr) _impl_.subscription_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
EmergencyMessage::EmergencyMessage(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:hedgehog.protocol.proto.EmergencyMessage)
}
inline PROTOBUF_NDEBUG_INLINE EmergencyMessage::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : _has_bits_{from._has_bits_},
        _cached_size_{0} {}

EmergencyMessage::EmergencyMessage(
    ::google::protobuf::Arena* arena,
    const EmergencyMessage& from)
    : ::google::protobuf::Message(arena) {
  EmergencyMessage* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.subscription_ = (cached_has_bits & 0x00000001u)
                ? CreateMaybeMessage<::hedgehog::protocol::proto::Subscription>(arena, *from._impl_.subscription_)
                : nullptr;
  _impl_.active_ = from._impl_.active_;

  // @@protoc_insertion_point(copy_constructor:hedgehog.protocol.proto.EmergencyMessage)
}
inline PROTOBUF_NDEBUG_INLINE EmergencyMessage::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void EmergencyMessage::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, subscription_),
           0,
           offsetof(Impl_, active_) -
               offsetof(Impl_, subscription_) +
               sizeof(Impl_::active_));
}
EmergencyMessage::~EmergencyMessage() {
  // @@protoc_insertion_point(destructor:hedgehog.protocol.proto.EmergencyMessage)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void EmergencyMessage::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  delete _impl_.subscription_;
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void EmergencyMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:hedgehog.protocol.proto.EmergencyMessage)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.subscription_ != nullptr);
    _impl_.subscription_->Clear();
  }
  _impl_.active_ = false;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* EmergencyMessage::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 1, 0, 2> EmergencyMessage::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(EmergencyMessage, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_EmergencyMessage_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // .hedgehog.protocol.proto.Subscription subscription = 2;
    {::_pbi::TcParser::FastMtS1,
     {18, 0, 0, PROTOBUF_FIELD_OFFSET(EmergencyMessage, _impl_.subscription_)}},
    // bool active = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<bool, offsetof(EmergencyMessage, _impl_.active_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(EmergencyMessage, _impl_.active_)}},
  }}, {{
    65535, 65535
  }}, {{
    // bool active = 1;
    {PROTOBUF_FIELD_OFFSET(EmergencyMessage, _impl_.active_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBool)},
    // .hedgehog.protocol.proto.Subscription subscription = 2;
    {PROTOBUF_FIELD_OFFSET(EmergencyMessage, _impl_.subscription_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::hedgehog::protocol::proto::Subscription>()},
  }}, {{
  }},
};

::uint8_t* EmergencyMessage::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hedgehog.protocol.proto.EmergencyMessage)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // bool active = 1;
  if (this->_internal_active() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        1, this->_internal_active(), target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // .hedgehog.protocol.proto.Subscription subscription = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        2, _Internal::subscription(this),
        _Internal::subscription(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hedgehog.protocol.proto.EmergencyMessage)
  return target;
}

::size_t EmergencyMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hedgehog.protocol.proto.EmergencyMessage)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .hedgehog.protocol.proto.Subscription subscription = 2;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size +=
        1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.subscription_);
  }

  // bool active = 1;
  if (this->_internal_active() != 0) {
    total_size += 2;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData EmergencyMessage::_class_data_ = {
    EmergencyMessage::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* EmergencyMessage::GetClassData() const {
  return &_class_data_;
}

void EmergencyMessage::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<EmergencyMessage*>(&to_msg);
  auto& from = static_cast<const EmergencyMessage&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hedgehog.protocol.proto.EmergencyMessage)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_subscription()->::hedgehog::protocol::proto::Subscription::MergeFrom(
        from._internal_subscription());
  }
  if (from._internal_active() != 0) {
    _this->_internal_set_active(from._internal_active());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void EmergencyMessage::CopyFrom(const EmergencyMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hedgehog.protocol.proto.EmergencyMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool EmergencyMessage::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* EmergencyMessage::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void EmergencyMessage::InternalSwap(EmergencyMessage* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(EmergencyMessage, _impl_.active_)
      + sizeof(EmergencyMessage::_impl_.active_)
      - PROTOBUF_FIELD_OFFSET(EmergencyMessage, _impl_.subscription_)>(
          reinterpret_cast<char*>(&_impl_.subscription_),
          reinterpret_cast<char*>(&other->_impl_.subscription_));
}

::google::protobuf::Metadata EmergencyMessage::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_hedgehog_2fprotocol_2fproto_2femergency_2eproto_getter, &descriptor_table_hedgehog_2fprotocol_2fproto_2femergency_2eproto_once,
      file_level_metadata_hedgehog_2fprotocol_2fproto_2femergency_2eproto[1]);
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