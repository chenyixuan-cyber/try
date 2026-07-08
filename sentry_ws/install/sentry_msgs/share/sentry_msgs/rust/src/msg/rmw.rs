#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "sentry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sentry_msgs__msg__Vw() -> *const std::ffi::c_void;
}

#[link(name = "sentry_msgs__rosidl_generator_c")]
extern "C" {
    fn sentry_msgs__msg__Vw__init(msg: *mut Vw) -> bool;
    fn sentry_msgs__msg__Vw__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Vw>, size: usize) -> bool;
    fn sentry_msgs__msg__Vw__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Vw>);
    fn sentry_msgs__msg__Vw__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Vw>, out_seq: *mut rosidl_runtime_rs::Sequence<Vw>) -> bool;
}

// Corresponds to sentry_msgs__msg__Vw
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Vw {
    /// 浮点速度/角速度
    pub vw: f32,

}



impl Default for Vw {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sentry_msgs__msg__Vw__init(&mut msg as *mut _) {
        panic!("Call to sentry_msgs__msg__Vw__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Vw {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sentry_msgs__msg__Vw__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sentry_msgs__msg__Vw__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sentry_msgs__msg__Vw__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Vw {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Vw where Self: Sized {
  const TYPE_NAME: &'static str = "sentry_msgs/msg/Vw";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sentry_msgs__msg__Vw() }
  }
}


#[link(name = "sentry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sentry_msgs__msg__ScanMode() -> *const std::ffi::c_void;
}

#[link(name = "sentry_msgs__rosidl_generator_c")]
extern "C" {
    fn sentry_msgs__msg__ScanMode__init(msg: *mut ScanMode) -> bool;
    fn sentry_msgs__msg__ScanMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScanMode>, size: usize) -> bool;
    fn sentry_msgs__msg__ScanMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScanMode>);
    fn sentry_msgs__msg__ScanMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScanMode>, out_seq: *mut rosidl_runtime_rs::Sequence<ScanMode>) -> bool;
}

// Corresponds to sentry_msgs__msg__ScanMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScanMode {
    /// 扫描模式:0不扫描 1扫描
    pub scan_mod_type: bool,

}



impl Default for ScanMode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sentry_msgs__msg__ScanMode__init(&mut msg as *mut _) {
        panic!("Call to sentry_msgs__msg__ScanMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScanMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sentry_msgs__msg__ScanMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sentry_msgs__msg__ScanMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sentry_msgs__msg__ScanMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScanMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScanMode where Self: Sized {
  const TYPE_NAME: &'static str = "sentry_msgs/msg/ScanMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sentry_msgs__msg__ScanMode() }
  }
}


#[link(name = "sentry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sentry_msgs__msg__ArmorPresence() -> *const std::ffi::c_void;
}

#[link(name = "sentry_msgs__rosidl_generator_c")]
extern "C" {
    fn sentry_msgs__msg__ArmorPresence__init(msg: *mut ArmorPresence) -> bool;
    fn sentry_msgs__msg__ArmorPresence__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArmorPresence>, size: usize) -> bool;
    fn sentry_msgs__msg__ArmorPresence__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArmorPresence>);
    fn sentry_msgs__msg__ArmorPresence__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArmorPresence>, out_seq: *mut rosidl_runtime_rs::Sequence<ArmorPresence>) -> bool;
}

// Corresponds to sentry_msgs__msg__ArmorPresence
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmorPresence {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 左方向是否有装甲板：0=无，1=有
    pub left: u8,

    /// 后方向是否有装甲板：0=无，1=有
    pub behind: u8,

    /// 右方向是否有装甲板：0=无，1=有
    pub right: u8,

    /// 0=红 1=蓝
    pub enemy_color: u8,

}



impl Default for ArmorPresence {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sentry_msgs__msg__ArmorPresence__init(&mut msg as *mut _) {
        panic!("Call to sentry_msgs__msg__ArmorPresence__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArmorPresence {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sentry_msgs__msg__ArmorPresence__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sentry_msgs__msg__ArmorPresence__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sentry_msgs__msg__ArmorPresence__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArmorPresence {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArmorPresence where Self: Sized {
  const TYPE_NAME: &'static str = "sentry_msgs/msg/ArmorPresence";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sentry_msgs__msg__ArmorPresence() }
  }
}


