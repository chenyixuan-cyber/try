#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rm_referee_msgs__msg__CustomControl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: [u8; 30],

}



impl Default for CustomControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CustomControl::default())
  }
}

impl rosidl_runtime_rs::Message for CustomControl {
  type RmwMsg = super::msg::rmw::CustomControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      data: msg.data,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__CustomRobotData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomRobotData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: [u8; 30],

}



impl Default for CustomRobotData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CustomRobotData::default())
  }
}

impl rosidl_runtime_rs::Message for CustomRobotData {
  type RmwMsg = super::msg::rmw::CustomRobotData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      data: msg.data,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__KeyboardMouseControl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KeyboardMouseControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KeyboardMouseControl::default())
  }
}

impl rosidl_runtime_rs::Message for KeyboardMouseControl {
  type RmwMsg = super::msg::rmw::KeyboardMouseControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        mouse_x: msg.mouse_x,
        mouse_y: msg.mouse_y,
        mouse_z: msg.mouse_z,
        left_button_down: msg.left_button_down,
        right_button_down: msg.right_button_down,
        keyboard_value: msg.keyboard_value,
        mid_button_down: msg.mid_button_down,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      mouse_x: msg.mouse_x,
      mouse_y: msg.mouse_y,
      mouse_z: msg.mouse_z,
      left_button_down: msg.left_button_down,
      right_button_down: msg.right_button_down,
      keyboard_value: msg.keyboard_value,
      mid_button_down: msg.mid_button_down,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      mouse_x: msg.mouse_x,
      mouse_y: msg.mouse_y,
      mouse_z: msg.mouse_z,
      left_button_down: msg.left_button_down,
      right_button_down: msg.right_button_down,
      keyboard_value: msg.keyboard_value,
      mid_button_down: msg.mid_button_down,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__RobotCustomData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotCustomData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: [u8; 30],

}



impl Default for RobotCustomData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotCustomData::default())
  }
}

impl rosidl_runtime_rs::Message for RobotCustomData {
  type RmwMsg = super::msg::rmw::RobotCustomData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      data: msg.data,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__RobotCustomData2

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotCustomData2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [u8; 300],

}



impl Default for RobotCustomData2 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotCustomData2::default())
  }
}

impl rosidl_runtime_rs::Message for RobotCustomData2 {
  type RmwMsg = super::msg::rmw::RobotCustomData2;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      data: msg.data,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__Buff

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Buff {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Buff::default())
  }
}

impl rosidl_runtime_rs::Message for Buff {
  type RmwMsg = super::msg::rmw::Buff;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        recovery_buff: msg.recovery_buff,
        cooling_buff: msg.cooling_buff,
        defence_buff: msg.defence_buff,
        vulnerability_buff: msg.vulnerability_buff,
        attack_buff: msg.attack_buff,
        remaining_energy: msg.remaining_energy,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      recovery_buff: msg.recovery_buff,
      cooling_buff: msg.cooling_buff,
      defence_buff: msg.defence_buff,
      vulnerability_buff: msg.vulnerability_buff,
      attack_buff: msg.attack_buff,
      remaining_energy: msg.remaining_energy,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      recovery_buff: msg.recovery_buff,
      cooling_buff: msg.cooling_buff,
      defence_buff: msg.defence_buff,
      vulnerability_buff: msg.vulnerability_buff,
      attack_buff: msg.attack_buff,
      remaining_energy: msg.remaining_energy,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__DartClientCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DartClientCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DartClientCmd::default())
  }
}

impl rosidl_runtime_rs::Message for DartClientCmd {
  type RmwMsg = super::msg::rmw::DartClientCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        dart_launch_opening_status: msg.dart_launch_opening_status,
        reserved: msg.reserved,
        target_change_time: msg.target_change_time,
        latest_launch_cmd_time: msg.latest_launch_cmd_time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      dart_launch_opening_status: msg.dart_launch_opening_status,
      reserved: msg.reserved,
      target_change_time: msg.target_change_time,
      latest_launch_cmd_time: msg.latest_launch_cmd_time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      dart_launch_opening_status: msg.dart_launch_opening_status,
      reserved: msg.reserved,
      target_change_time: msg.target_change_time,
      latest_launch_cmd_time: msg.latest_launch_cmd_time,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__DartInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DartInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dart_remaining_time: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dart_info: u16,

}



impl Default for DartInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DartInfo::default())
  }
}

impl rosidl_runtime_rs::Message for DartInfo {
  type RmwMsg = super::msg::rmw::DartInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        dart_remaining_time: msg.dart_remaining_time,
        dart_info: msg.dart_info,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      dart_remaining_time: msg.dart_remaining_time,
      dart_info: msg.dart_info,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      dart_remaining_time: msg.dart_remaining_time,
      dart_info: msg.dart_info,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__EventData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EventData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub event_data: u32,

}



impl Default for EventData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EventData::default())
  }
}

impl rosidl_runtime_rs::Message for EventData {
  type RmwMsg = super::msg::rmw::EventData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        event_data: msg.event_data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      event_data: msg.event_data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      event_data: msg.event_data,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__GameResult

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GameResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub winner: u8,

}



impl Default for GameResult {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GameResult::default())
  }
}

impl rosidl_runtime_rs::Message for GameResult {
  type RmwMsg = super::msg::rmw::GameResult;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        winner: msg.winner,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      winner: msg.winner,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      winner: msg.winner,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__GameRobotHP

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GameRobotHP {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GameRobotHP::default())
  }
}

impl rosidl_runtime_rs::Message for GameRobotHP {
  type RmwMsg = super::msg::rmw::GameRobotHP;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ally_1_robot_hp: msg.ally_1_robot_hp,
        ally_2_robot_hp: msg.ally_2_robot_hp,
        ally_3_robot_hp: msg.ally_3_robot_hp,
        ally_4_robot_hp: msg.ally_4_robot_hp,
        damage_difference: msg.damage_difference,
        ally_7_robot_hp: msg.ally_7_robot_hp,
        ally_outpost_hp: msg.ally_outpost_hp,
        ally_base_hp: msg.ally_base_hp,
        enemy_outpost_hp: msg.enemy_outpost_hp,
        enemy_base_hp: msg.enemy_base_hp,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      ally_1_robot_hp: msg.ally_1_robot_hp,
      ally_2_robot_hp: msg.ally_2_robot_hp,
      ally_3_robot_hp: msg.ally_3_robot_hp,
      ally_4_robot_hp: msg.ally_4_robot_hp,
      damage_difference: msg.damage_difference,
      ally_7_robot_hp: msg.ally_7_robot_hp,
      ally_outpost_hp: msg.ally_outpost_hp,
      ally_base_hp: msg.ally_base_hp,
      enemy_outpost_hp: msg.enemy_outpost_hp,
      enemy_base_hp: msg.enemy_base_hp,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ally_1_robot_hp: msg.ally_1_robot_hp,
      ally_2_robot_hp: msg.ally_2_robot_hp,
      ally_3_robot_hp: msg.ally_3_robot_hp,
      ally_4_robot_hp: msg.ally_4_robot_hp,
      damage_difference: msg.damage_difference,
      ally_7_robot_hp: msg.ally_7_robot_hp,
      ally_outpost_hp: msg.ally_outpost_hp,
      ally_base_hp: msg.ally_base_hp,
      enemy_outpost_hp: msg.enemy_outpost_hp,
      enemy_base_hp: msg.enemy_base_hp,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__GameStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GameStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GameStatus::default())
  }
}

impl rosidl_runtime_rs::Message for GameStatus {
  type RmwMsg = super::msg::rmw::GameStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        game_type: msg.game_type,
        game_progress: msg.game_progress,
        stage_remain_time: msg.stage_remain_time,
        sync_timestamp: msg.sync_timestamp,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      game_type: msg.game_type,
      game_progress: msg.game_progress,
      stage_remain_time: msg.stage_remain_time,
      sync_timestamp: msg.sync_timestamp,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      game_type: msg.game_type,
      game_progress: msg.game_progress,
      stage_remain_time: msg.stage_remain_time,
      sync_timestamp: msg.sync_timestamp,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__GroundRobotPosition

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GroundRobotPosition {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GroundRobotPosition::default())
  }
}

impl rosidl_runtime_rs::Message for GroundRobotPosition {
  type RmwMsg = super::msg::rmw::GroundRobotPosition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hero_x: msg.hero_x,
        hero_y: msg.hero_y,
        engineer_x: msg.engineer_x,
        engineer_y: msg.engineer_y,
        standard_3_x: msg.standard_3_x,
        standard_3_y: msg.standard_3_y,
        standard_4_x: msg.standard_4_x,
        standard_4_y: msg.standard_4_y,
        reserved: msg.reserved,
        reserved_2: msg.reserved_2,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      hero_x: msg.hero_x,
      hero_y: msg.hero_y,
      engineer_x: msg.engineer_x,
      engineer_y: msg.engineer_y,
      standard_3_x: msg.standard_3_x,
      standard_3_y: msg.standard_3_y,
      standard_4_x: msg.standard_4_x,
      standard_4_y: msg.standard_4_y,
      reserved: msg.reserved,
      reserved_2: msg.reserved_2,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hero_x: msg.hero_x,
      hero_y: msg.hero_y,
      engineer_x: msg.engineer_x,
      engineer_y: msg.engineer_y,
      standard_3_x: msg.standard_3_x,
      standard_3_y: msg.standard_3_y,
      standard_4_x: msg.standard_4_x,
      standard_4_y: msg.standard_4_y,
      reserved: msg.reserved,
      reserved_2: msg.reserved_2,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__HurtData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HurtData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub armor_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hp_deduction_reason: u8,

}



impl Default for HurtData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HurtData::default())
  }
}

impl rosidl_runtime_rs::Message for HurtData {
  type RmwMsg = super::msg::rmw::HurtData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        armor_id: msg.armor_id,
        hp_deduction_reason: msg.hp_deduction_reason,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      armor_id: msg.armor_id,
      hp_deduction_reason: msg.hp_deduction_reason,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      armor_id: msg.armor_id,
      hp_deduction_reason: msg.hp_deduction_reason,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__MapCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MapCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MapCommand::default())
  }
}

impl rosidl_runtime_rs::Message for MapCommand {
  type RmwMsg = super::msg::rmw::MapCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        target_position_x: msg.target_position_x,
        target_position_y: msg.target_position_y,
        cmd_keyboard: msg.cmd_keyboard,
        target_robot_id: msg.target_robot_id,
        cmd_source: msg.cmd_source,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      target_position_x: msg.target_position_x,
      target_position_y: msg.target_position_y,
      cmd_keyboard: msg.cmd_keyboard,
      target_robot_id: msg.target_robot_id,
      cmd_source: msg.cmd_source,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      target_position_x: msg.target_position_x,
      target_position_y: msg.target_position_y,
      cmd_keyboard: msg.cmd_keyboard,
      target_robot_id: msg.target_robot_id,
      cmd_source: msg.cmd_source,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__PowerHeatData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerHeatData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PowerHeatData::default())
  }
}

impl rosidl_runtime_rs::Message for PowerHeatData {
  type RmwMsg = super::msg::rmw::PowerHeatData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        reserved: msg.reserved,
        reserved_2: msg.reserved_2,
        reserved_3: msg.reserved_3,
        buffer_energy: msg.buffer_energy,
        shooter_17mm_1_barrel_heat: msg.shooter_17mm_1_barrel_heat,
        shooter_42mm_barrel_heat: msg.shooter_42mm_barrel_heat,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      reserved: msg.reserved,
      reserved_2: msg.reserved_2,
      reserved_3: msg.reserved_3,
      buffer_energy: msg.buffer_energy,
      shooter_17mm_1_barrel_heat: msg.shooter_17mm_1_barrel_heat,
      shooter_42mm_barrel_heat: msg.shooter_42mm_barrel_heat,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      reserved: msg.reserved,
      reserved_2: msg.reserved_2,
      reserved_3: msg.reserved_3,
      buffer_energy: msg.buffer_energy,
      shooter_17mm_1_barrel_heat: msg.shooter_17mm_1_barrel_heat,
      shooter_42mm_barrel_heat: msg.shooter_42mm_barrel_heat,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__ProjectileAllowance

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProjectileAllowance {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ProjectileAllowance::default())
  }
}

impl rosidl_runtime_rs::Message for ProjectileAllowance {
  type RmwMsg = super::msg::rmw::ProjectileAllowance;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        projectile_allowance_17mm: msg.projectile_allowance_17mm,
        projectile_allowance_42mm: msg.projectile_allowance_42mm,
        remaining_gold_coin: msg.remaining_gold_coin,
        projectile_allowance_fortress: msg.projectile_allowance_fortress,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      projectile_allowance_17mm: msg.projectile_allowance_17mm,
      projectile_allowance_42mm: msg.projectile_allowance_42mm,
      remaining_gold_coin: msg.remaining_gold_coin,
      projectile_allowance_fortress: msg.projectile_allowance_fortress,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      projectile_allowance_17mm: msg.projectile_allowance_17mm,
      projectile_allowance_42mm: msg.projectile_allowance_42mm,
      remaining_gold_coin: msg.remaining_gold_coin,
      projectile_allowance_fortress: msg.projectile_allowance_fortress,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__RFIDStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RFIDStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rfid_status: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rfid_status_2: u8,

}



impl Default for RFIDStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RFIDStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RFIDStatus {
  type RmwMsg = super::msg::rmw::RFIDStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        rfid_status: msg.rfid_status,
        rfid_status_2: msg.rfid_status_2,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      rfid_status: msg.rfid_status,
      rfid_status_2: msg.rfid_status_2,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      rfid_status: msg.rfid_status,
      rfid_status_2: msg.rfid_status_2,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__RadarInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub radar_info: u8,

}



impl Default for RadarInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RadarInfo::default())
  }
}

impl rosidl_runtime_rs::Message for RadarInfo {
  type RmwMsg = super::msg::rmw::RadarInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        radar_info: msg.radar_info,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      radar_info: msg.radar_info,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      radar_info: msg.radar_info,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__RadarMarkData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarMarkData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mark_progress: u16,

}



impl Default for RadarMarkData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RadarMarkData::default())
  }
}

impl rosidl_runtime_rs::Message for RadarMarkData {
  type RmwMsg = super::msg::rmw::RadarMarkData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        mark_progress: msg.mark_progress,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      mark_progress: msg.mark_progress,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      mark_progress: msg.mark_progress,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__RefereeWarning

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RefereeWarning {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RefereeWarning::default())
  }
}

impl rosidl_runtime_rs::Message for RefereeWarning {
  type RmwMsg = super::msg::rmw::RefereeWarning;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        level: msg.level,
        offending_robot_id: msg.offending_robot_id,
        count: msg.count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      level: msg.level,
      offending_robot_id: msg.offending_robot_id,
      count: msg.count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      level: msg.level,
      offending_robot_id: msg.offending_robot_id,
      count: msg.count,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__RobotPos

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotPos {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotPos::default())
  }
}

impl rosidl_runtime_rs::Message for RobotPos {
  type RmwMsg = super::msg::rmw::RobotPos;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        x: msg.x,
        y: msg.y,
        angle: msg.angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      x: msg.x,
      y: msg.y,
      angle: msg.angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      x: msg.x,
      y: msg.y,
      angle: msg.angle,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__RobotStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = super::msg::rmw::RobotStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robot_id: msg.robot_id,
        robot_level: msg.robot_level,
        current_hp: msg.current_hp,
        maximum_hp: msg.maximum_hp,
        shooter_barrel_cooling_value: msg.shooter_barrel_cooling_value,
        shooter_barrel_heat_limit: msg.shooter_barrel_heat_limit,
        chassis_power_limit: msg.chassis_power_limit,
        bullet_speed_limit: msg.bullet_speed_limit,
        power_management_gimbal_output: msg.power_management_gimbal_output,
        power_management_chassis_output: msg.power_management_chassis_output,
        power_management_shooter_output: msg.power_management_shooter_output,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      robot_id: msg.robot_id,
      robot_level: msg.robot_level,
      current_hp: msg.current_hp,
      maximum_hp: msg.maximum_hp,
      shooter_barrel_cooling_value: msg.shooter_barrel_cooling_value,
      shooter_barrel_heat_limit: msg.shooter_barrel_heat_limit,
      chassis_power_limit: msg.chassis_power_limit,
      bullet_speed_limit: msg.bullet_speed_limit,
      power_management_gimbal_output: msg.power_management_gimbal_output,
      power_management_chassis_output: msg.power_management_chassis_output,
      power_management_shooter_output: msg.power_management_shooter_output,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robot_id: msg.robot_id,
      robot_level: msg.robot_level,
      current_hp: msg.current_hp,
      maximum_hp: msg.maximum_hp,
      shooter_barrel_cooling_value: msg.shooter_barrel_cooling_value,
      shooter_barrel_heat_limit: msg.shooter_barrel_heat_limit,
      chassis_power_limit: msg.chassis_power_limit,
      bullet_speed_limit: msg.bullet_speed_limit,
      power_management_gimbal_output: msg.power_management_gimbal_output,
      power_management_chassis_output: msg.power_management_chassis_output,
      power_management_shooter_output: msg.power_management_shooter_output,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__SentryInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SentryInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SentryInfo::default())
  }
}

impl rosidl_runtime_rs::Message for SentryInfo {
  type RmwMsg = super::msg::rmw::SentryInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        sentry_info: msg.sentry_info,
        sentry_info_2: msg.sentry_info_2,
        sentry_info_3: msg.sentry_info_3,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      sentry_info: msg.sentry_info,
      sentry_info_2: msg.sentry_info_2,
      sentry_info_3: msg.sentry_info_3,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      sentry_info: msg.sentry_info,
      sentry_info_2: msg.sentry_info_2,
      sentry_info_3: msg.sentry_info_3,
    }
  }
}


// Corresponds to rm_referee_msgs__msg__ShootData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ShootData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ShootData::default())
  }
}

impl rosidl_runtime_rs::Message for ShootData {
  type RmwMsg = super::msg::rmw::ShootData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bullet_type: msg.bullet_type,
        shooter_number: msg.shooter_number,
        launching_frequency: msg.launching_frequency,
        initial_speed: msg.initial_speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bullet_type: msg.bullet_type,
      shooter_number: msg.shooter_number,
      launching_frequency: msg.launching_frequency,
      initial_speed: msg.initial_speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bullet_type: msg.bullet_type,
      shooter_number: msg.shooter_number,
      launching_frequency: msg.launching_frequency,
      initial_speed: msg.initial_speed,
    }
  }
}


