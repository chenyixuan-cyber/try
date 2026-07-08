#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__CustomControl() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__CustomControl__init(msg: *mut CustomControl) -> bool;
    fn rm_referee_msgs__msg__CustomControl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomControl>, size: usize) -> bool;
    fn rm_referee_msgs__msg__CustomControl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomControl>);
    fn rm_referee_msgs__msg__CustomControl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomControl>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomControl>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__CustomControl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: [u8; 30],

}



impl Default for CustomControl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__CustomControl__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__CustomControl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomControl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__CustomControl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__CustomControl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__CustomControl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomControl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomControl where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/CustomControl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__CustomControl() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__CustomRobotData() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__CustomRobotData__init(msg: *mut CustomRobotData) -> bool;
    fn rm_referee_msgs__msg__CustomRobotData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomRobotData>, size: usize) -> bool;
    fn rm_referee_msgs__msg__CustomRobotData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomRobotData>);
    fn rm_referee_msgs__msg__CustomRobotData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomRobotData>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomRobotData>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__CustomRobotData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomRobotData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: [u8; 30],

}



impl Default for CustomRobotData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__CustomRobotData__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__CustomRobotData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomRobotData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__CustomRobotData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__CustomRobotData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__CustomRobotData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomRobotData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomRobotData where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/CustomRobotData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__CustomRobotData() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__KeyboardMouseControl() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__KeyboardMouseControl__init(msg: *mut KeyboardMouseControl) -> bool;
    fn rm_referee_msgs__msg__KeyboardMouseControl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KeyboardMouseControl>, size: usize) -> bool;
    fn rm_referee_msgs__msg__KeyboardMouseControl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KeyboardMouseControl>);
    fn rm_referee_msgs__msg__KeyboardMouseControl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KeyboardMouseControl>, out_seq: *mut rosidl_runtime_rs::Sequence<KeyboardMouseControl>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__KeyboardMouseControl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KeyboardMouseControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mouse_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mouse_y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mouse_z: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_button_down: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_button_down: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub keyboard_value: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mid_button_down: bool,

}

impl KeyboardMouseControl {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_W: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_S: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_A: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_D: u32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_SHIFT: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_CTRL: u32 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_Q: u32 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_E: u32 = 128;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_R: u32 = 256;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F: u32 = 512;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_G: u32 = 1024;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_Z: u32 = 2048;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_X: u32 = 4096;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_C: u32 = 8192;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_V: u32 = 16384;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_B: u32 = 32768;

}


impl Default for KeyboardMouseControl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__KeyboardMouseControl__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__KeyboardMouseControl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KeyboardMouseControl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__KeyboardMouseControl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__KeyboardMouseControl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__KeyboardMouseControl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KeyboardMouseControl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KeyboardMouseControl where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/KeyboardMouseControl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__KeyboardMouseControl() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RobotCustomData() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__RobotCustomData__init(msg: *mut RobotCustomData) -> bool;
    fn rm_referee_msgs__msg__RobotCustomData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotCustomData>, size: usize) -> bool;
    fn rm_referee_msgs__msg__RobotCustomData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotCustomData>);
    fn rm_referee_msgs__msg__RobotCustomData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotCustomData>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotCustomData>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__RobotCustomData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotCustomData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: [u8; 30],

}



impl Default for RobotCustomData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__RobotCustomData__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__RobotCustomData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotCustomData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RobotCustomData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RobotCustomData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RobotCustomData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotCustomData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotCustomData where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/RobotCustomData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RobotCustomData() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RobotCustomData2() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__RobotCustomData2__init(msg: *mut RobotCustomData2) -> bool;
    fn rm_referee_msgs__msg__RobotCustomData2__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotCustomData2>, size: usize) -> bool;
    fn rm_referee_msgs__msg__RobotCustomData2__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotCustomData2>);
    fn rm_referee_msgs__msg__RobotCustomData2__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotCustomData2>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotCustomData2>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__RobotCustomData2
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotCustomData2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [u8; 300],

}



impl Default for RobotCustomData2 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__RobotCustomData2__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__RobotCustomData2__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotCustomData2 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RobotCustomData2__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RobotCustomData2__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RobotCustomData2__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotCustomData2 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotCustomData2 where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/RobotCustomData2";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RobotCustomData2() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__Buff() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__Buff__init(msg: *mut Buff) -> bool;
    fn rm_referee_msgs__msg__Buff__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Buff>, size: usize) -> bool;
    fn rm_referee_msgs__msg__Buff__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Buff>);
    fn rm_referee_msgs__msg__Buff__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Buff>, out_seq: *mut rosidl_runtime_rs::Sequence<Buff>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__Buff
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Buff {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub recovery_buff: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cooling_buff: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub defence_buff: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vulnerability_buff: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attack_buff: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_energy: u8,

}



impl Default for Buff {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__Buff__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__Buff__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Buff {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__Buff__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__Buff__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__Buff__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Buff {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Buff where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/Buff";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__Buff() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__DartClientCmd() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__DartClientCmd__init(msg: *mut DartClientCmd) -> bool;
    fn rm_referee_msgs__msg__DartClientCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DartClientCmd>, size: usize) -> bool;
    fn rm_referee_msgs__msg__DartClientCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DartClientCmd>);
    fn rm_referee_msgs__msg__DartClientCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DartClientCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<DartClientCmd>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__DartClientCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DartClientCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dart_launch_opening_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_change_time: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latest_launch_cmd_time: u16,

}



impl Default for DartClientCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__DartClientCmd__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__DartClientCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DartClientCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__DartClientCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__DartClientCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__DartClientCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DartClientCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DartClientCmd where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/DartClientCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__DartClientCmd() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__DartInfo() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__DartInfo__init(msg: *mut DartInfo) -> bool;
    fn rm_referee_msgs__msg__DartInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DartInfo>, size: usize) -> bool;
    fn rm_referee_msgs__msg__DartInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DartInfo>);
    fn rm_referee_msgs__msg__DartInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DartInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<DartInfo>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__DartInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DartInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dart_remaining_time: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dart_info: u16,

}



impl Default for DartInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__DartInfo__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__DartInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DartInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__DartInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__DartInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__DartInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DartInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DartInfo where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/DartInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__DartInfo() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__EventData() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__EventData__init(msg: *mut EventData) -> bool;
    fn rm_referee_msgs__msg__EventData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EventData>, size: usize) -> bool;
    fn rm_referee_msgs__msg__EventData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EventData>);
    fn rm_referee_msgs__msg__EventData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EventData>, out_seq: *mut rosidl_runtime_rs::Sequence<EventData>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__EventData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EventData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub event_data: u32,

}



impl Default for EventData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__EventData__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__EventData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EventData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__EventData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__EventData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__EventData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EventData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EventData where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/EventData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__EventData() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__GameResult() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__GameResult__init(msg: *mut GameResult) -> bool;
    fn rm_referee_msgs__msg__GameResult__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GameResult>, size: usize) -> bool;
    fn rm_referee_msgs__msg__GameResult__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GameResult>);
    fn rm_referee_msgs__msg__GameResult__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GameResult>, out_seq: *mut rosidl_runtime_rs::Sequence<GameResult>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__GameResult
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GameResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub winner: u8,

}



impl Default for GameResult {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__GameResult__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__GameResult__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GameResult {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__GameResult__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__GameResult__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__GameResult__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GameResult {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GameResult where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/GameResult";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__GameResult() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__GameRobotHP() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__GameRobotHP__init(msg: *mut GameRobotHP) -> bool;
    fn rm_referee_msgs__msg__GameRobotHP__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GameRobotHP>, size: usize) -> bool;
    fn rm_referee_msgs__msg__GameRobotHP__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GameRobotHP>);
    fn rm_referee_msgs__msg__GameRobotHP__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GameRobotHP>, out_seq: *mut rosidl_runtime_rs::Sequence<GameRobotHP>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__GameRobotHP
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GameRobotHP {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_1_robot_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_2_robot_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_3_robot_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_4_robot_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub damage_difference: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_7_robot_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_outpost_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_base_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_outpost_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_base_hp: u16,

}



impl Default for GameRobotHP {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__GameRobotHP__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__GameRobotHP__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GameRobotHP {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__GameRobotHP__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__GameRobotHP__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__GameRobotHP__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GameRobotHP {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GameRobotHP where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/GameRobotHP";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__GameRobotHP() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__GameStatus() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__GameStatus__init(msg: *mut GameStatus) -> bool;
    fn rm_referee_msgs__msg__GameStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GameStatus>, size: usize) -> bool;
    fn rm_referee_msgs__msg__GameStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GameStatus>);
    fn rm_referee_msgs__msg__GameStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GameStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<GameStatus>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__GameStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GameStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub game_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub game_progress: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stage_remain_time: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sync_timestamp: u64,

}



impl Default for GameStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__GameStatus__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__GameStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GameStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__GameStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__GameStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__GameStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GameStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GameStatus where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/GameStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__GameStatus() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__GroundRobotPosition() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__GroundRobotPosition__init(msg: *mut GroundRobotPosition) -> bool;
    fn rm_referee_msgs__msg__GroundRobotPosition__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GroundRobotPosition>, size: usize) -> bool;
    fn rm_referee_msgs__msg__GroundRobotPosition__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GroundRobotPosition>);
    fn rm_referee_msgs__msg__GroundRobotPosition__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GroundRobotPosition>, out_seq: *mut rosidl_runtime_rs::Sequence<GroundRobotPosition>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__GroundRobotPosition
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GroundRobotPosition {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hero_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hero_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub engineer_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub engineer_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub standard_3_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub standard_3_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub standard_4_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub standard_4_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved_2: f32,

}



impl Default for GroundRobotPosition {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__GroundRobotPosition__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__GroundRobotPosition__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GroundRobotPosition {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__GroundRobotPosition__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__GroundRobotPosition__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__GroundRobotPosition__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GroundRobotPosition {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GroundRobotPosition where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/GroundRobotPosition";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__GroundRobotPosition() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__HurtData() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__HurtData__init(msg: *mut HurtData) -> bool;
    fn rm_referee_msgs__msg__HurtData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HurtData>, size: usize) -> bool;
    fn rm_referee_msgs__msg__HurtData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HurtData>);
    fn rm_referee_msgs__msg__HurtData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HurtData>, out_seq: *mut rosidl_runtime_rs::Sequence<HurtData>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__HurtData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HurtData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub armor_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hp_deduction_reason: u8,

}



impl Default for HurtData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__HurtData__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__HurtData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HurtData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__HurtData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__HurtData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__HurtData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HurtData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HurtData where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/HurtData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__HurtData() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__MapCommand() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__MapCommand__init(msg: *mut MapCommand) -> bool;
    fn rm_referee_msgs__msg__MapCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MapCommand>, size: usize) -> bool;
    fn rm_referee_msgs__msg__MapCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MapCommand>);
    fn rm_referee_msgs__msg__MapCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MapCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<MapCommand>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__MapCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MapCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_position_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_position_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd_keyboard: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_robot_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd_source: u16,

}



impl Default for MapCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__MapCommand__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__MapCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MapCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__MapCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__MapCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__MapCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MapCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MapCommand where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/MapCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__MapCommand() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__PowerHeatData() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__PowerHeatData__init(msg: *mut PowerHeatData) -> bool;
    fn rm_referee_msgs__msg__PowerHeatData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PowerHeatData>, size: usize) -> bool;
    fn rm_referee_msgs__msg__PowerHeatData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PowerHeatData>);
    fn rm_referee_msgs__msg__PowerHeatData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PowerHeatData>, out_seq: *mut rosidl_runtime_rs::Sequence<PowerHeatData>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__PowerHeatData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerHeatData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved_2: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved_3: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub buffer_energy: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shooter_17mm_1_barrel_heat: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shooter_42mm_barrel_heat: u16,

}



impl Default for PowerHeatData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__PowerHeatData__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__PowerHeatData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PowerHeatData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__PowerHeatData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__PowerHeatData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__PowerHeatData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PowerHeatData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PowerHeatData where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/PowerHeatData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__PowerHeatData() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__ProjectileAllowance() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__ProjectileAllowance__init(msg: *mut ProjectileAllowance) -> bool;
    fn rm_referee_msgs__msg__ProjectileAllowance__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ProjectileAllowance>, size: usize) -> bool;
    fn rm_referee_msgs__msg__ProjectileAllowance__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ProjectileAllowance>);
    fn rm_referee_msgs__msg__ProjectileAllowance__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ProjectileAllowance>, out_seq: *mut rosidl_runtime_rs::Sequence<ProjectileAllowance>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__ProjectileAllowance
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProjectileAllowance {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub projectile_allowance_17mm: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub projectile_allowance_42mm: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_gold_coin: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub projectile_allowance_fortress: u16,

}



impl Default for ProjectileAllowance {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__ProjectileAllowance__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__ProjectileAllowance__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ProjectileAllowance {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__ProjectileAllowance__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__ProjectileAllowance__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__ProjectileAllowance__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ProjectileAllowance {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ProjectileAllowance where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/ProjectileAllowance";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__ProjectileAllowance() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RFIDStatus() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__RFIDStatus__init(msg: *mut RFIDStatus) -> bool;
    fn rm_referee_msgs__msg__RFIDStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RFIDStatus>, size: usize) -> bool;
    fn rm_referee_msgs__msg__RFIDStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RFIDStatus>);
    fn rm_referee_msgs__msg__RFIDStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RFIDStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<RFIDStatus>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__RFIDStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RFIDStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rfid_status: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rfid_status_2: u8,

}



impl Default for RFIDStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__RFIDStatus__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__RFIDStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RFIDStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RFIDStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RFIDStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RFIDStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RFIDStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RFIDStatus where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/RFIDStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RFIDStatus() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RadarInfo() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__RadarInfo__init(msg: *mut RadarInfo) -> bool;
    fn rm_referee_msgs__msg__RadarInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RadarInfo>, size: usize) -> bool;
    fn rm_referee_msgs__msg__RadarInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RadarInfo>);
    fn rm_referee_msgs__msg__RadarInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RadarInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<RadarInfo>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__RadarInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub radar_info: u8,

}



impl Default for RadarInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__RadarInfo__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__RadarInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RadarInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RadarInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RadarInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RadarInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RadarInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RadarInfo where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/RadarInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RadarInfo() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RadarMarkData() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__RadarMarkData__init(msg: *mut RadarMarkData) -> bool;
    fn rm_referee_msgs__msg__RadarMarkData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RadarMarkData>, size: usize) -> bool;
    fn rm_referee_msgs__msg__RadarMarkData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RadarMarkData>);
    fn rm_referee_msgs__msg__RadarMarkData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RadarMarkData>, out_seq: *mut rosidl_runtime_rs::Sequence<RadarMarkData>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__RadarMarkData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarMarkData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mark_progress: u16,

}



impl Default for RadarMarkData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__RadarMarkData__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__RadarMarkData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RadarMarkData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RadarMarkData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RadarMarkData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RadarMarkData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RadarMarkData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RadarMarkData where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/RadarMarkData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RadarMarkData() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RefereeWarning() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__RefereeWarning__init(msg: *mut RefereeWarning) -> bool;
    fn rm_referee_msgs__msg__RefereeWarning__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RefereeWarning>, size: usize) -> bool;
    fn rm_referee_msgs__msg__RefereeWarning__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RefereeWarning>);
    fn rm_referee_msgs__msg__RefereeWarning__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RefereeWarning>, out_seq: *mut rosidl_runtime_rs::Sequence<RefereeWarning>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__RefereeWarning
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RefereeWarning {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub level: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub offending_robot_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub count: u8,

}



impl Default for RefereeWarning {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__RefereeWarning__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__RefereeWarning__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RefereeWarning {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RefereeWarning__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RefereeWarning__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RefereeWarning__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RefereeWarning {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RefereeWarning where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/RefereeWarning";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RefereeWarning() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RobotPos() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__RobotPos__init(msg: *mut RobotPos) -> bool;
    fn rm_referee_msgs__msg__RobotPos__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotPos>, size: usize) -> bool;
    fn rm_referee_msgs__msg__RobotPos__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotPos>);
    fn rm_referee_msgs__msg__RobotPos__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotPos>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotPos>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__RobotPos
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotPos {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: f32,

}



impl Default for RobotPos {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__RobotPos__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__RobotPos__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotPos {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RobotPos__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RobotPos__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RobotPos__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotPos {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotPos where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/RobotPos";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RobotPos() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RobotStatus() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__RobotStatus__init(msg: *mut RobotStatus) -> bool;
    fn rm_referee_msgs__msg__RobotStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>, size: usize) -> bool;
    fn rm_referee_msgs__msg__RobotStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>);
    fn rm_referee_msgs__msg__RobotStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__RobotStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_level: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub maximum_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shooter_barrel_cooling_value: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shooter_barrel_heat_limit: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub chassis_power_limit: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bullet_speed_limit: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub power_management_gimbal_output: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub power_management_chassis_output: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub power_management_shooter_output: bool,

}



impl Default for RobotStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__RobotStatus__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__RobotStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RobotStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RobotStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__RobotStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotStatus where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/RobotStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__RobotStatus() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__SentryInfo() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__SentryInfo__init(msg: *mut SentryInfo) -> bool;
    fn rm_referee_msgs__msg__SentryInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SentryInfo>, size: usize) -> bool;
    fn rm_referee_msgs__msg__SentryInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SentryInfo>);
    fn rm_referee_msgs__msg__SentryInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SentryInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<SentryInfo>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__SentryInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SentryInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sentry_info: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sentry_info_2: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sentry_info_3: u64,

}



impl Default for SentryInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__SentryInfo__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__SentryInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SentryInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__SentryInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__SentryInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__SentryInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SentryInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SentryInfo where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/SentryInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__SentryInfo() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__ShootData() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__msg__ShootData__init(msg: *mut ShootData) -> bool;
    fn rm_referee_msgs__msg__ShootData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ShootData>, size: usize) -> bool;
    fn rm_referee_msgs__msg__ShootData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ShootData>);
    fn rm_referee_msgs__msg__ShootData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ShootData>, out_seq: *mut rosidl_runtime_rs::Sequence<ShootData>) -> bool;
}

// Corresponds to rm_referee_msgs__msg__ShootData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ShootData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bullet_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shooter_number: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub launching_frequency: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub initial_speed: f32,

}



impl Default for ShootData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__msg__ShootData__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__msg__ShootData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ShootData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__ShootData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__ShootData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__msg__ShootData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ShootData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ShootData where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/msg/ShootData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__msg__ShootData() }
  }
}


