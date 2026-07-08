#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to sentry_msgs__msg__Vw

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Vw {
    /// 浮点速度/角速度
    pub vw: f32,

}



impl Default for Vw {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Vw::default())
  }
}

impl rosidl_runtime_rs::Message for Vw {
  type RmwMsg = super::msg::rmw::Vw;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        vw: msg.vw,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      vw: msg.vw,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      vw: msg.vw,
    }
  }
}


// Corresponds to sentry_msgs__msg__ScanMode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScanMode {
    /// 扫描模式:0不扫描 1扫描
    pub scan_mod_type: bool,

}



impl Default for ScanMode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScanMode::default())
  }
}

impl rosidl_runtime_rs::Message for ScanMode {
  type RmwMsg = super::msg::rmw::ScanMode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        scan_mod_type: msg.scan_mod_type,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      scan_mod_type: msg.scan_mod_type,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      scan_mod_type: msg.scan_mod_type,
    }
  }
}


// Corresponds to sentry_msgs__msg__ArmorPresence

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmorPresence {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ArmorPresence::default())
  }
}

impl rosidl_runtime_rs::Message for ArmorPresence {
  type RmwMsg = super::msg::rmw::ArmorPresence;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        left: msg.left,
        behind: msg.behind,
        right: msg.right,
        enemy_color: msg.enemy_color,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      left: msg.left,
      behind: msg.behind,
      right: msg.right,
      enemy_color: msg.enemy_color,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      left: msg.left,
      behind: msg.behind,
      right: msg.right,
      enemy_color: msg.enemy_color,
    }
  }
}


