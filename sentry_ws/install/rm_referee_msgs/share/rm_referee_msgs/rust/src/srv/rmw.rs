#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__srv__Tx_Request() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__srv__Tx_Request__init(msg: *mut Tx_Request) -> bool;
    fn rm_referee_msgs__srv__Tx_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tx_Request>, size: usize) -> bool;
    fn rm_referee_msgs__srv__Tx_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tx_Request>);
    fn rm_referee_msgs__srv__Tx_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tx_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Tx_Request>) -> bool;
}

// Corresponds to rm_referee_msgs__srv__Tx_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tx_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for Tx_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__srv__Tx_Request__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__srv__Tx_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tx_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__srv__Tx_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__srv__Tx_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__srv__Tx_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tx_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tx_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/srv/Tx_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__srv__Tx_Request() }
  }
}


#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__srv__Tx_Response() -> *const std::ffi::c_void;
}

#[link(name = "rm_referee_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_referee_msgs__srv__Tx_Response__init(msg: *mut Tx_Response) -> bool;
    fn rm_referee_msgs__srv__Tx_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tx_Response>, size: usize) -> bool;
    fn rm_referee_msgs__srv__Tx_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tx_Response>);
    fn rm_referee_msgs__srv__Tx_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tx_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Tx_Response>) -> bool;
}

// Corresponds to rm_referee_msgs__srv__Tx_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tx_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ok: bool,

}



impl Default for Tx_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_referee_msgs__srv__Tx_Response__init(&mut msg as *mut _) {
        panic!("Call to rm_referee_msgs__srv__Tx_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tx_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__srv__Tx_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__srv__Tx_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_referee_msgs__srv__Tx_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tx_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tx_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rm_referee_msgs/srv/Tx_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_referee_msgs__srv__Tx_Response() }
  }
}






#[link(name = "rm_referee_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rm_referee_msgs__srv__Tx() -> *const std::ffi::c_void;
}

// Corresponds to rm_referee_msgs__srv__Tx
#[allow(missing_docs, non_camel_case_types)]
pub struct Tx;

impl rosidl_runtime_rs::Service for Tx {
    type Request = Tx_Request;
    type Response = Tx_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rm_referee_msgs__srv__Tx() }
    }
}


