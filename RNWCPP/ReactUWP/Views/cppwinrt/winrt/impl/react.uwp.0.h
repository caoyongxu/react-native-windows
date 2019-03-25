﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct FrameworkElement;

}

WINRT_EXPORT namespace winrt::react::uwp {

struct IDynamicAutomationPeer;
struct IDynamicAutomationPeerFactory;
struct DynamicAutomationPeer;

}

namespace winrt::impl {

template <> struct category<react::uwp::IDynamicAutomationPeer>{ using type = interface_category; };
template <> struct category<react::uwp::IDynamicAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<react::uwp::DynamicAutomationPeer>{ using type = class_category; };
template <> struct name<react::uwp::IDynamicAutomationPeer>{ static constexpr auto & value{ L"react.uwp.IDynamicAutomationPeer" }; };
template <> struct name<react::uwp::IDynamicAutomationPeerFactory>{ static constexpr auto & value{ L"react.uwp.IDynamicAutomationPeerFactory" }; };
template <> struct name<react::uwp::DynamicAutomationPeer>{ static constexpr auto & value{ L"react.uwp.DynamicAutomationPeer" }; };
template <> struct guid_storage<react::uwp::IDynamicAutomationPeer>{ static constexpr guid value{ 0x96D2FA46,0xD93B,0x5EB4,{ 0x9E,0xD8,0xFC,0x60,0x2C,0xB5,0xB7,0x8F } }; };
template <> struct guid_storage<react::uwp::IDynamicAutomationPeerFactory>{ static constexpr guid value{ 0x0F0A64B1,0xCCEF,0x54F1,{ 0xB9,0x05,0x0C,0x58,0x26,0xCB,0x6C,0xC4 } }; };
template <> struct default_interface<react::uwp::DynamicAutomationPeer>{ using type = react::uwp::IDynamicAutomationPeer; };

template <> struct abi<react::uwp::IDynamicAutomationPeer>{ struct type : IInspectable
{
};};

template <> struct abi<react::uwp::IDynamicAutomationPeerFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateInstance(void* owner, void** value) noexcept = 0;
};};

template <typename D>
struct consume_react_uwp_IDynamicAutomationPeer
{
};
template <> struct consume<react::uwp::IDynamicAutomationPeer> { template <typename D> using type = consume_react_uwp_IDynamicAutomationPeer<D>; };

template <typename D>
struct consume_react_uwp_IDynamicAutomationPeerFactory
{
    react::uwp::DynamicAutomationPeer CreateInstance(Windows::UI::Xaml::FrameworkElement const& owner) const;
};
template <> struct consume<react::uwp::IDynamicAutomationPeerFactory> { template <typename D> using type = consume_react_uwp_IDynamicAutomationPeerFactory<D>; };

}
