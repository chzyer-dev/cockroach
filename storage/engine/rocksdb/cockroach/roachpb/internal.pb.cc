// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cockroach/roachpb/internal.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cockroach/roachpb/internal.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cockroach {
namespace roachpb {

namespace {

const ::google::protobuf::Descriptor* InternalTimeSeriesData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InternalTimeSeriesData_reflection_ = NULL;
const ::google::protobuf::Descriptor* InternalTimeSeriesSample_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InternalTimeSeriesSample_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cockroach_2froachpb_2finternal_2eproto() {
  protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cockroach/roachpb/internal.proto");
  GOOGLE_CHECK(file != NULL);
  InternalTimeSeriesData_descriptor_ = file->message_type(0);
  static const int InternalTimeSeriesData_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTimeSeriesData, start_timestamp_nanos_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTimeSeriesData, sample_duration_nanos_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTimeSeriesData, samples_),
  };
  InternalTimeSeriesData_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      InternalTimeSeriesData_descriptor_,
      InternalTimeSeriesData::default_instance_,
      InternalTimeSeriesData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTimeSeriesData, _has_bits_[0]),
      -1,
      -1,
      sizeof(InternalTimeSeriesData),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTimeSeriesData, _internal_metadata_),
      -1);
  InternalTimeSeriesSample_descriptor_ = file->message_type(1);
  static const int InternalTimeSeriesSample_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTimeSeriesSample, offset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTimeSeriesSample, sum_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTimeSeriesSample, count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTimeSeriesSample, max_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTimeSeriesSample, min_),
  };
  InternalTimeSeriesSample_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      InternalTimeSeriesSample_descriptor_,
      InternalTimeSeriesSample::default_instance_,
      InternalTimeSeriesSample_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTimeSeriesSample, _has_bits_[0]),
      -1,
      -1,
      sizeof(InternalTimeSeriesSample),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTimeSeriesSample, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cockroach_2froachpb_2finternal_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      InternalTimeSeriesData_descriptor_, &InternalTimeSeriesData::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      InternalTimeSeriesSample_descriptor_, &InternalTimeSeriesSample::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cockroach_2froachpb_2finternal_2eproto() {
  delete InternalTimeSeriesData::default_instance_;
  delete InternalTimeSeriesData_reflection_;
  delete InternalTimeSeriesSample::default_instance_;
  delete InternalTimeSeriesSample_reflection_;
}

void protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gogoproto::protobuf_AddDesc_gogoproto_2fgogo_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n cockroach/roachpb/internal.proto\022\021cock"
    "roach.roachpb\032\024gogoproto/gogo.proto\"\246\001\n\026"
    "InternalTimeSeriesData\022#\n\025start_timestam"
    "p_nanos\030\001 \001(\003B\004\310\336\037\000\022#\n\025sample_duration_n"
    "anos\030\002 \001(\003B\004\310\336\037\000\022B\n\007samples\030\003 \003(\0132+.cock"
    "roach.roachpb.InternalTimeSeriesSampleB\004"
    "\310\336\037\000\"r\n\030InternalTimeSeriesSample\022\024\n\006offs"
    "et\030\001 \001(\005B\004\310\336\037\000\022\021\n\003sum\030\007 \001(\001B\004\310\336\037\000\022\023\n\005cou"
    "nt\030\006 \001(\rB\004\310\336\037\000\022\013\n\003max\030\010 \001(\001\022\013\n\003min\030\t \001(\001"
    "B\tZ\007roachpbX\000", 373);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cockroach/roachpb/internal.proto", &protobuf_RegisterTypes);
  InternalTimeSeriesData::default_instance_ = new InternalTimeSeriesData();
  InternalTimeSeriesSample::default_instance_ = new InternalTimeSeriesSample();
  InternalTimeSeriesData::default_instance_->InitAsDefaultInstance();
  InternalTimeSeriesSample::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cockroach_2froachpb_2finternal_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cockroach_2froachpb_2finternal_2eproto {
  StaticDescriptorInitializer_cockroach_2froachpb_2finternal_2eproto() {
    protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto();
  }
} static_descriptor_initializer_cockroach_2froachpb_2finternal_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InternalTimeSeriesData::kStartTimestampNanosFieldNumber;
const int InternalTimeSeriesData::kSampleDurationNanosFieldNumber;
const int InternalTimeSeriesData::kSamplesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InternalTimeSeriesData::InternalTimeSeriesData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.roachpb.InternalTimeSeriesData)
}

void InternalTimeSeriesData::InitAsDefaultInstance() {
}

InternalTimeSeriesData::InternalTimeSeriesData(const InternalTimeSeriesData& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cockroach.roachpb.InternalTimeSeriesData)
}

void InternalTimeSeriesData::SharedCtor() {
  _cached_size_ = 0;
  start_timestamp_nanos_ = GOOGLE_LONGLONG(0);
  sample_duration_nanos_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

InternalTimeSeriesData::~InternalTimeSeriesData() {
  // @@protoc_insertion_point(destructor:cockroach.roachpb.InternalTimeSeriesData)
  SharedDtor();
}

void InternalTimeSeriesData::SharedDtor() {
  if (this != default_instance_) {
  }
}

void InternalTimeSeriesData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InternalTimeSeriesData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InternalTimeSeriesData_descriptor_;
}

const InternalTimeSeriesData& InternalTimeSeriesData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto();
  return *default_instance_;
}

InternalTimeSeriesData* InternalTimeSeriesData::default_instance_ = NULL;

InternalTimeSeriesData* InternalTimeSeriesData::New(::google::protobuf::Arena* arena) const {
  InternalTimeSeriesData* n = new InternalTimeSeriesData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void InternalTimeSeriesData::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<InternalTimeSeriesData*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(start_timestamp_nanos_, sample_duration_nanos_);

#undef ZR_HELPER_
#undef ZR_

  samples_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool InternalTimeSeriesData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cockroach.roachpb.InternalTimeSeriesData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 start_timestamp_nanos = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &start_timestamp_nanos_)));
          set_has_start_timestamp_nanos();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sample_duration_nanos;
        break;
      }

      // optional int64 sample_duration_nanos = 2;
      case 2: {
        if (tag == 16) {
         parse_sample_duration_nanos:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sample_duration_nanos_)));
          set_has_sample_duration_nanos();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_samples;
        break;
      }

      // repeated .cockroach.roachpb.InternalTimeSeriesSample samples = 3;
      case 3: {
        if (tag == 26) {
         parse_samples:
          DO_(input->IncrementRecursionDepth());
         parse_loop_samples:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_samples()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_loop_samples;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.roachpb.InternalTimeSeriesData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.roachpb.InternalTimeSeriesData)
  return false;
#undef DO_
}

void InternalTimeSeriesData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.roachpb.InternalTimeSeriesData)
  // optional int64 start_timestamp_nanos = 1;
  if (has_start_timestamp_nanos()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->start_timestamp_nanos(), output);
  }

  // optional int64 sample_duration_nanos = 2;
  if (has_sample_duration_nanos()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->sample_duration_nanos(), output);
  }

  // repeated .cockroach.roachpb.InternalTimeSeriesSample samples = 3;
  for (unsigned int i = 0, n = this->samples_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->samples(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cockroach.roachpb.InternalTimeSeriesData)
}

::google::protobuf::uint8* InternalTimeSeriesData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cockroach.roachpb.InternalTimeSeriesData)
  // optional int64 start_timestamp_nanos = 1;
  if (has_start_timestamp_nanos()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->start_timestamp_nanos(), target);
  }

  // optional int64 sample_duration_nanos = 2;
  if (has_sample_duration_nanos()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->sample_duration_nanos(), target);
  }

  // repeated .cockroach.roachpb.InternalTimeSeriesSample samples = 3;
  for (unsigned int i = 0, n = this->samples_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->samples(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cockroach.roachpb.InternalTimeSeriesData)
  return target;
}

int InternalTimeSeriesData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional int64 start_timestamp_nanos = 1;
    if (has_start_timestamp_nanos()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->start_timestamp_nanos());
    }

    // optional int64 sample_duration_nanos = 2;
    if (has_sample_duration_nanos()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->sample_duration_nanos());
    }

  }
  // repeated .cockroach.roachpb.InternalTimeSeriesSample samples = 3;
  total_size += 1 * this->samples_size();
  for (int i = 0; i < this->samples_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->samples(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InternalTimeSeriesData::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const InternalTimeSeriesData* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const InternalTimeSeriesData>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void InternalTimeSeriesData::MergeFrom(const InternalTimeSeriesData& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  samples_.MergeFrom(from.samples_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_start_timestamp_nanos()) {
      set_start_timestamp_nanos(from.start_timestamp_nanos());
    }
    if (from.has_sample_duration_nanos()) {
      set_sample_duration_nanos(from.sample_duration_nanos());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void InternalTimeSeriesData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InternalTimeSeriesData::CopyFrom(const InternalTimeSeriesData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InternalTimeSeriesData::IsInitialized() const {

  return true;
}

void InternalTimeSeriesData::Swap(InternalTimeSeriesData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InternalTimeSeriesData::InternalSwap(InternalTimeSeriesData* other) {
  std::swap(start_timestamp_nanos_, other->start_timestamp_nanos_);
  std::swap(sample_duration_nanos_, other->sample_duration_nanos_);
  samples_.UnsafeArenaSwap(&other->samples_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata InternalTimeSeriesData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InternalTimeSeriesData_descriptor_;
  metadata.reflection = InternalTimeSeriesData_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// InternalTimeSeriesData

// optional int64 start_timestamp_nanos = 1;
bool InternalTimeSeriesData::has_start_timestamp_nanos() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void InternalTimeSeriesData::set_has_start_timestamp_nanos() {
  _has_bits_[0] |= 0x00000001u;
}
void InternalTimeSeriesData::clear_has_start_timestamp_nanos() {
  _has_bits_[0] &= ~0x00000001u;
}
void InternalTimeSeriesData::clear_start_timestamp_nanos() {
  start_timestamp_nanos_ = GOOGLE_LONGLONG(0);
  clear_has_start_timestamp_nanos();
}
 ::google::protobuf::int64 InternalTimeSeriesData::start_timestamp_nanos() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesData.start_timestamp_nanos)
  return start_timestamp_nanos_;
}
 void InternalTimeSeriesData::set_start_timestamp_nanos(::google::protobuf::int64 value) {
  set_has_start_timestamp_nanos();
  start_timestamp_nanos_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesData.start_timestamp_nanos)
}

// optional int64 sample_duration_nanos = 2;
bool InternalTimeSeriesData::has_sample_duration_nanos() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void InternalTimeSeriesData::set_has_sample_duration_nanos() {
  _has_bits_[0] |= 0x00000002u;
}
void InternalTimeSeriesData::clear_has_sample_duration_nanos() {
  _has_bits_[0] &= ~0x00000002u;
}
void InternalTimeSeriesData::clear_sample_duration_nanos() {
  sample_duration_nanos_ = GOOGLE_LONGLONG(0);
  clear_has_sample_duration_nanos();
}
 ::google::protobuf::int64 InternalTimeSeriesData::sample_duration_nanos() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesData.sample_duration_nanos)
  return sample_duration_nanos_;
}
 void InternalTimeSeriesData::set_sample_duration_nanos(::google::protobuf::int64 value) {
  set_has_sample_duration_nanos();
  sample_duration_nanos_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesData.sample_duration_nanos)
}

// repeated .cockroach.roachpb.InternalTimeSeriesSample samples = 3;
int InternalTimeSeriesData::samples_size() const {
  return samples_.size();
}
void InternalTimeSeriesData::clear_samples() {
  samples_.Clear();
}
const ::cockroach::roachpb::InternalTimeSeriesSample& InternalTimeSeriesData::samples(int index) const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_.Get(index);
}
::cockroach::roachpb::InternalTimeSeriesSample* InternalTimeSeriesData::mutable_samples(int index) {
  // @@protoc_insertion_point(field_mutable:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_.Mutable(index);
}
::cockroach::roachpb::InternalTimeSeriesSample* InternalTimeSeriesData::add_samples() {
  // @@protoc_insertion_point(field_add:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_.Add();
}
::google::protobuf::RepeatedPtrField< ::cockroach::roachpb::InternalTimeSeriesSample >*
InternalTimeSeriesData::mutable_samples() {
  // @@protoc_insertion_point(field_mutable_list:cockroach.roachpb.InternalTimeSeriesData.samples)
  return &samples_;
}
const ::google::protobuf::RepeatedPtrField< ::cockroach::roachpb::InternalTimeSeriesSample >&
InternalTimeSeriesData::samples() const {
  // @@protoc_insertion_point(field_list:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InternalTimeSeriesSample::kOffsetFieldNumber;
const int InternalTimeSeriesSample::kSumFieldNumber;
const int InternalTimeSeriesSample::kCountFieldNumber;
const int InternalTimeSeriesSample::kMaxFieldNumber;
const int InternalTimeSeriesSample::kMinFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InternalTimeSeriesSample::InternalTimeSeriesSample()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.roachpb.InternalTimeSeriesSample)
}

void InternalTimeSeriesSample::InitAsDefaultInstance() {
}

InternalTimeSeriesSample::InternalTimeSeriesSample(const InternalTimeSeriesSample& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cockroach.roachpb.InternalTimeSeriesSample)
}

void InternalTimeSeriesSample::SharedCtor() {
  _cached_size_ = 0;
  offset_ = 0;
  sum_ = 0;
  count_ = 0u;
  max_ = 0;
  min_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

InternalTimeSeriesSample::~InternalTimeSeriesSample() {
  // @@protoc_insertion_point(destructor:cockroach.roachpb.InternalTimeSeriesSample)
  SharedDtor();
}

void InternalTimeSeriesSample::SharedDtor() {
  if (this != default_instance_) {
  }
}

void InternalTimeSeriesSample::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InternalTimeSeriesSample::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InternalTimeSeriesSample_descriptor_;
}

const InternalTimeSeriesSample& InternalTimeSeriesSample::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto();
  return *default_instance_;
}

InternalTimeSeriesSample* InternalTimeSeriesSample::default_instance_ = NULL;

InternalTimeSeriesSample* InternalTimeSeriesSample::New(::google::protobuf::Arena* arena) const {
  InternalTimeSeriesSample* n = new InternalTimeSeriesSample;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void InternalTimeSeriesSample::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<InternalTimeSeriesSample*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 31u) {
    ZR_(sum_, min_);
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool InternalTimeSeriesSample::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cockroach.roachpb.InternalTimeSeriesSample)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 offset = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &offset_)));
          set_has_offset();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_count;
        break;
      }

      // optional uint32 count = 6;
      case 6: {
        if (tag == 48) {
         parse_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &count_)));
          set_has_count();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(57)) goto parse_sum;
        break;
      }

      // optional double sum = 7;
      case 7: {
        if (tag == 57) {
         parse_sum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &sum_)));
          set_has_sum();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(65)) goto parse_max;
        break;
      }

      // optional double max = 8;
      case 8: {
        if (tag == 65) {
         parse_max:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &max_)));
          set_has_max();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(73)) goto parse_min;
        break;
      }

      // optional double min = 9;
      case 9: {
        if (tag == 73) {
         parse_min:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &min_)));
          set_has_min();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.roachpb.InternalTimeSeriesSample)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.roachpb.InternalTimeSeriesSample)
  return false;
#undef DO_
}

void InternalTimeSeriesSample::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.roachpb.InternalTimeSeriesSample)
  // optional int32 offset = 1;
  if (has_offset()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->offset(), output);
  }

  // optional uint32 count = 6;
  if (has_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->count(), output);
  }

  // optional double sum = 7;
  if (has_sum()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->sum(), output);
  }

  // optional double max = 8;
  if (has_max()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->max(), output);
  }

  // optional double min = 9;
  if (has_min()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->min(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cockroach.roachpb.InternalTimeSeriesSample)
}

::google::protobuf::uint8* InternalTimeSeriesSample::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cockroach.roachpb.InternalTimeSeriesSample)
  // optional int32 offset = 1;
  if (has_offset()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->offset(), target);
  }

  // optional uint32 count = 6;
  if (has_count()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->count(), target);
  }

  // optional double sum = 7;
  if (has_sum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->sum(), target);
  }

  // optional double max = 8;
  if (has_max()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->max(), target);
  }

  // optional double min = 9;
  if (has_min()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->min(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cockroach.roachpb.InternalTimeSeriesSample)
  return target;
}

int InternalTimeSeriesSample::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & 31u) {
    // optional int32 offset = 1;
    if (has_offset()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->offset());
    }

    // optional double sum = 7;
    if (has_sum()) {
      total_size += 1 + 8;
    }

    // optional uint32 count = 6;
    if (has_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->count());
    }

    // optional double max = 8;
    if (has_max()) {
      total_size += 1 + 8;
    }

    // optional double min = 9;
    if (has_min()) {
      total_size += 1 + 8;
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InternalTimeSeriesSample::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const InternalTimeSeriesSample* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const InternalTimeSeriesSample>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void InternalTimeSeriesSample::MergeFrom(const InternalTimeSeriesSample& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_offset()) {
      set_offset(from.offset());
    }
    if (from.has_sum()) {
      set_sum(from.sum());
    }
    if (from.has_count()) {
      set_count(from.count());
    }
    if (from.has_max()) {
      set_max(from.max());
    }
    if (from.has_min()) {
      set_min(from.min());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void InternalTimeSeriesSample::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InternalTimeSeriesSample::CopyFrom(const InternalTimeSeriesSample& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InternalTimeSeriesSample::IsInitialized() const {

  return true;
}

void InternalTimeSeriesSample::Swap(InternalTimeSeriesSample* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InternalTimeSeriesSample::InternalSwap(InternalTimeSeriesSample* other) {
  std::swap(offset_, other->offset_);
  std::swap(sum_, other->sum_);
  std::swap(count_, other->count_);
  std::swap(max_, other->max_);
  std::swap(min_, other->min_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata InternalTimeSeriesSample::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InternalTimeSeriesSample_descriptor_;
  metadata.reflection = InternalTimeSeriesSample_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// InternalTimeSeriesSample

// optional int32 offset = 1;
bool InternalTimeSeriesSample::has_offset() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void InternalTimeSeriesSample::set_has_offset() {
  _has_bits_[0] |= 0x00000001u;
}
void InternalTimeSeriesSample::clear_has_offset() {
  _has_bits_[0] &= ~0x00000001u;
}
void InternalTimeSeriesSample::clear_offset() {
  offset_ = 0;
  clear_has_offset();
}
 ::google::protobuf::int32 InternalTimeSeriesSample::offset() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.offset)
  return offset_;
}
 void InternalTimeSeriesSample::set_offset(::google::protobuf::int32 value) {
  set_has_offset();
  offset_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.offset)
}

// optional double sum = 7;
bool InternalTimeSeriesSample::has_sum() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void InternalTimeSeriesSample::set_has_sum() {
  _has_bits_[0] |= 0x00000002u;
}
void InternalTimeSeriesSample::clear_has_sum() {
  _has_bits_[0] &= ~0x00000002u;
}
void InternalTimeSeriesSample::clear_sum() {
  sum_ = 0;
  clear_has_sum();
}
 double InternalTimeSeriesSample::sum() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.sum)
  return sum_;
}
 void InternalTimeSeriesSample::set_sum(double value) {
  set_has_sum();
  sum_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.sum)
}

// optional uint32 count = 6;
bool InternalTimeSeriesSample::has_count() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void InternalTimeSeriesSample::set_has_count() {
  _has_bits_[0] |= 0x00000004u;
}
void InternalTimeSeriesSample::clear_has_count() {
  _has_bits_[0] &= ~0x00000004u;
}
void InternalTimeSeriesSample::clear_count() {
  count_ = 0u;
  clear_has_count();
}
 ::google::protobuf::uint32 InternalTimeSeriesSample::count() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.count)
  return count_;
}
 void InternalTimeSeriesSample::set_count(::google::protobuf::uint32 value) {
  set_has_count();
  count_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.count)
}

// optional double max = 8;
bool InternalTimeSeriesSample::has_max() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void InternalTimeSeriesSample::set_has_max() {
  _has_bits_[0] |= 0x00000008u;
}
void InternalTimeSeriesSample::clear_has_max() {
  _has_bits_[0] &= ~0x00000008u;
}
void InternalTimeSeriesSample::clear_max() {
  max_ = 0;
  clear_has_max();
}
 double InternalTimeSeriesSample::max() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.max)
  return max_;
}
 void InternalTimeSeriesSample::set_max(double value) {
  set_has_max();
  max_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.max)
}

// optional double min = 9;
bool InternalTimeSeriesSample::has_min() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void InternalTimeSeriesSample::set_has_min() {
  _has_bits_[0] |= 0x00000010u;
}
void InternalTimeSeriesSample::clear_has_min() {
  _has_bits_[0] &= ~0x00000010u;
}
void InternalTimeSeriesSample::clear_min() {
  min_ = 0;
  clear_has_min();
}
 double InternalTimeSeriesSample::min() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.min)
  return min_;
}
 void InternalTimeSeriesSample::set_min(double value) {
  set_has_min();
  min_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.min)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace roachpb
}  // namespace cockroach

// @@protoc_insertion_point(global_scope)
