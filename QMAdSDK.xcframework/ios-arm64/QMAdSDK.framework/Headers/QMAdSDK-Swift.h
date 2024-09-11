#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
#ifndef QMADSDK_SWIFT_H
#define QMADSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="QMAdSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class NSString;

SWIFT_CLASS("_TtC7QMAdSDK8QMAdMeta")
@interface QMAdMeta : NSObject
/// 广告唯一id
@property (nonatomic, readonly, copy) NSString * _Nonnull getRequestId;
/// 创意ID
@property (nonatomic, readonly, copy) NSString * _Nonnull getIdeaId;
/// 广告价格(分)
@property (nonatomic, readonly) NSInteger getECPM;
/// 广告标题
@property (nonatomic, readonly, copy) NSString * _Nonnull getTitle;
/// 落地页地址
@property (nonatomic, readonly, copy) NSString * _Nonnull getLandingPageUrl;
/// 广告交互类型
/// 1：落地页类型
/// 2：下载类型（包含拉新和拉活）
/// 3:   小程序
/// 4:   快应用
@property (nonatomic, readonly) NSInteger getInteractionType;
/// 广告图片链接
@property (nonatomic, readonly, copy) NSString * _Nonnull getImageUrls;
/// 广告创意应用logo
@property (nonatomic, readonly, copy) NSString * _Nonnull getAppLogoUrl;
/// 广告创意应用名称
@property (nonatomic, readonly, copy) NSString * _Nonnull getAppName;
/// 广告创意应用包名
@property (nonatomic, readonly, copy) NSString * _Nonnull getAppPackageName;
/// 广告六要素信息
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nonnull getAppInformation;
/// 素材宽高
@property (nonatomic, readonly) CGSize getMediaSize;
/// 广告物料的类型
/// 1：小图
/// 2：大图
/// 3:   组图
/// 4：视频
/// 6:   开屏
/// 12: 激励视频
@property (nonatomic, readonly) NSInteger getMaterialType;
/// 视频播放时长
@property (nonatomic, readonly) NSInteger getVideoDuration;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC7QMAdSDK20QMAdSDKConfiguration")
@interface QMAdSDKConfiguration : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) QMAdSDKConfiguration * _Nonnull shareConfiguration;)
+ (QMAdSDKConfiguration * _Nonnull)shareConfiguration SWIFT_WARN_UNUSED_RESULT;
/// 应用id
@property (nonatomic, copy) NSString * _Nullable appId;
/// 用户id
@property (nonatomic, copy) NSString * _Nullable userId;
/// 自定义IDFA
@property (nonatomic, copy) NSString * _Nullable customIdfa;
/// 广协CAID方案线上算法生成的CAID
@property (nonatomic, copy) NSString * _Nullable caid;
/// 广协CAID方案线上算法的版本
@property (nonatomic, copy) NSString * _Nullable caidVersion;
/// 广切CAID方案历史算法生成的CAID
@property (nonatomic, copy) NSString * _Nullable lastCaid;
/// 广切CAID方案历史算法的版本
@property (nonatomic, copy) NSString * _Nullable lastCaidVersion;
/// 经度
@property (nonatomic, copy) NSString * _Nullable longitude;
/// 纬度
@property (nonatomic, copy) NSString * _Nullable latitude;
/// 是否可以嗅探安装列表 默认 YES
@property (nonatomic) BOOL canSniffingInstalls;
/// 异常保护 默认 YES
@property (nonatomic) BOOL exceptionGuard;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSUInteger, QMAdSDKInitializationState, open) {
  QMAdSDKInitializationStateNotReady = 0,
  QMAdSDKInitializationStateReady = 1,
};


SWIFT_CLASS("_TtC7QMAdSDK14QMAdSDKManager")
@interface QMAdSDKManager : NSObject
/// 版本号
+ (NSString * _Nonnull)sdkVersion SWIFT_WARN_UNUSED_RESULT;
/// The  initialization state
+ (enum QMAdSDKInitializationState)sdkState SWIFT_WARN_UNUSED_RESULT;
/// The  initialization method
+ (void)setupSDKWith:(QMAdSDKConfiguration * _Nonnull)config;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7QMAdSDK15QMCrashReporter")
@interface QMCrashReporter : NSObject
/// 异常拦截
/// \param reportBlock 异常信息，堆栈信息
///
+ (void)setAbnormalReportCallback:(void (^ _Nonnull)(NSString * _Nonnull, NSArray<NSString *> * _Nonnull))reportBlock;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIView;
@class NSCoder;

SWIFT_CLASS("_TtC7QMAdSDK8QMDialog")
@interface QMDialog : UIControl
@property (nonatomic, weak) UIView * _Nullable container;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end




@class UIViewController;

@interface QMDialog (SWIFT_EXTENSION(QMAdSDK))
- (void)dismissDialog;
- (void)dismissDialogWithView:(UIView * _Nonnull)view;
- (void)dismissDialogWithController:(UIViewController * _Nonnull)controller;
- (void)dismissAllDialog;
@end

@class UIGestureRecognizer;

@interface QMDialog (SWIFT_EXTENSION(QMAdSDK)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end

@protocol QMFeedAdDelegate;

SWIFT_CLASS("_TtC7QMAdSDK8QMFeedAd")
@interface QMFeedAd : NSObject
@property (nonatomic, weak) id <QMFeedAdDelegate> _Nullable delegate;
/// 单位：分
@property (nonatomic, readonly) NSInteger ecpm SWIFT_DEPRECATED_MSG("Use meta.");
@property (nonatomic, strong) QMAdMeta * _Nullable meta;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nonnull metaDic SWIFT_DEPRECATED_MSG("Use meta.");
@property (nonatomic, readonly, copy) NSString * _Nonnull slotID;
@property (nonatomic, readonly, strong) UIView * _Nullable feedView;
/// 获取广告高度
- (CGFloat)handleFeedAdHeight SWIFT_WARN_UNUSED_RESULT;
/// 加载广告
- (void)loadAdData;
- (nonnull instancetype)initWithSlot:(NSString * _Nonnull)slotID OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP7QMAdSDK16QMFeedAdDelegate_")
@protocol QMFeedAdDelegate <NSObject>
/// 信息流广告加载成功
- (void)qm_feedAdLoadSuccess:(QMFeedAd * _Nullable)feedAd;
/// 信息流广告加载失败
- (void)qm_feedAdLoadFail:(QMFeedAd * _Nullable)feedAd error:(NSError * _Nonnull)error;
/// 信息流广告曝光
- (void)qm_feedAdDidShow:(QMFeedAd * _Nullable)feedAd;
/// 信息流广告点击
- (void)qm_feedAdDidClick:(QMFeedAd * _Nullable)feedAd;
/// 信息流广告关闭
- (void)qm_feedAdDidClose:(QMFeedAd * _Nullable)feedAd;
/// 落地页关闭
- (void)qm_feedAdDidCloseOtherController:(QMFeedAd * _Nullable)feedAd;
@end


SWIFT_CLASS("_TtC7QMAdSDK7QMImage")
@interface QMImage : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull url;
@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, readonly) CGFloat height;
/// 视频时长 视频有此字段
@property (nonatomic, readonly) NSInteger duration;
/// 静音播放 默认 YES
@property (nonatomic, readonly) BOOL mute;
/// 自动播放 默认 YES
@property (nonatomic, readonly) BOOL auto_play;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol QMInterstitialAdDelegate;

SWIFT_CLASS("_TtC7QMAdSDK16QMInterstitialAd")
@interface QMInterstitialAd : NSObject
@property (nonatomic, weak) id <QMInterstitialAdDelegate> _Nullable delegate;
/// 单位：分
@property (nonatomic, readonly) NSInteger ecpm SWIFT_DEPRECATED_MSG("Use meta.");
@property (nonatomic, strong) QMAdMeta * _Nullable meta;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nonnull metaDic SWIFT_DEPRECATED_MSG("Use meta.");
@property (nonatomic, readonly, copy) NSString * _Nonnull slotID;
/// 初始化
/// @param slotID  栏位id
- (nonnull instancetype)initWithSlot:(NSString * _Nonnull)slotID OBJC_DESIGNATED_INITIALIZER;
/// 加载广告
- (void)loadAdData;
/// 展示广告
- (void)showInterstitialViewInRootViewController:(UIViewController * _Nonnull)viewController;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface QMInterstitialAd (SWIFT_EXTENSION(QMAdSDK))
+ (QMInterstitialAd * _Nonnull)loadDataWithSlot:(NSString * _Nonnull)slot registerObserver:(id <QMInterstitialAdDelegate> _Nonnull)registerObserver;
@end


typedef SWIFT_ENUM(NSInteger, QMInterstitialAdCloseType, open) {
  QMInterstitialAdCloseTypeUnknow = 0,
  QMInterstitialAdCloseTypeSkip = 1,
  QMInterstitialAdCloseTypeClickAd = 3,
};


SWIFT_PROTOCOL("_TtP7QMAdSDK24QMInterstitialAdDelegate_")
@protocol QMInterstitialAdDelegate <NSObject>
/// 插屏广告加载成功
- (void)qm_interstitialAdLoadSuccess:(QMInterstitialAd * _Nonnull)interstitialAd;
/// 插屏广告加载失败
- (void)qm_interstitialAdLoadFail:(QMInterstitialAd * _Nonnull)interstitialAd error:(NSError * _Nullable)error;
/// 插屏广告曝光
- (void)qm_interstitialAdDidShow:(QMInterstitialAd * _Nonnull)interstitialAd;
/// 插屏广告点击
- (void)qm_interstitialAdDidClick:(QMInterstitialAd * _Nonnull)interstitialAd;
/// 插屏广告关闭
- (void)qm_interstitialAdDidClose:(QMInterstitialAd * _Nonnull)interstitialAd closeType:(enum QMInterstitialAdCloseType)type;
/// 落地页关闭
- (void)qm_interstitialAdDidCloseOtherController:(QMInterstitialAd * _Nonnull)interstitialAd;
/// 插屏广告视频播放完成
- (void)qm_interstitialAdVideoDidPlayComplection:(QMInterstitialAd * _Nonnull)interstitialAd;
/// 插屏广告视频播放异常
- (void)qm_interstitialAdVideoDidPlayFinished:(QMInterstitialAd * _Nonnull)interstitialAd didFailWithError:(NSError * _Nonnull)error;
@end

typedef SWIFT_ENUM(NSUInteger, QMMaterialType, open) {
  QMMaterialTypeImageSmall = 1,
  QMMaterialTypeImageLarge = 2,
  QMMaterialTypeImageAtlas = 3,
  QMMaterialTypeVideo = 4,
  QMMaterialTypeSplash = 6,
  QMMaterialTypeRewardedVideo = 12,
};

@protocol QMNativeAdDelegate;
@class QMNativeMaterial;

SWIFT_CLASS("_TtC7QMAdSDK10QMNativeAd")
@interface QMNativeAd : NSObject
@property (nonatomic, weak) id <QMNativeAdDelegate> _Nullable delegate;
/// 单位：分
@property (nonatomic, readonly) NSInteger ecpm SWIFT_DEPRECATED_MSG("Use meta.");
@property (nonatomic, strong) QMAdMeta * _Nullable meta;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nonnull metaDic SWIFT_DEPRECATED_MSG("Use meta.");
@property (nonatomic, readonly, copy) NSString * _Nonnull slotID;
@property (nonatomic, readonly, strong) QMNativeMaterial * _Nullable materialMeta SWIFT_DEPRECATED_MSG("Use meta.");
/// 初始化
/// @param slotID  栏位id
- (nonnull instancetype)initWithSlot:(NSString * _Nonnull)slotID OBJC_DESIGNATED_INITIALIZER;
/// 加载广告
- (void)loadAdData;
/// 注册可点击区域
/// @param containerView :  requried  广告展示区域
/// @param clickableViews : optional  其他可点击区域
- (void)registerContainer:(UIView * _Nonnull)containerView withClickableViews:(NSArray<UIView *> * _Nullable)clickableViews;
/// Unregister ad view from the native ad.
- (void)unregisterView;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP7QMAdSDK18QMNativeAdDelegate_")
@protocol QMNativeAdDelegate <NSObject>
/// 信息流广告加载成功
- (void)qm_nativeAdLoadSuccess:(QMNativeAd * _Nonnull)nativeAd;
/// 信息流广告加载失败
- (void)qm_nativeAdLoadFail:(QMNativeAd * _Nonnull)nativeAd error:(NSError * _Nonnull)error;
/// 信息流广告曝光
- (void)qm_nativeAdDidShow:(QMNativeAd * _Nonnull)nativeAd;
/// 信息流广告点击
- (void)qm_nativeAdDidClick:(QMNativeAd * _Nonnull)nativeAd;
/// 落地页关闭
- (void)qm_nativeAdDidCloseOtherController:(QMNativeAd * _Nonnull)nativeAd;
@end

@class UILabel;
@class QMSplashNativeAd;

SWIFT_CLASS("_TtC7QMAdSDK21QMNativeAdRelatedView")
@interface QMNativeAdRelatedView : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// 标题
@property (nonatomic, readonly, strong) UILabel * _Nullable adLabel;
/// 视频
@property (nonatomic, readonly, strong) UIView * _Nullable videoAdView;
/// Refresh the data every time you get new datas in order to show ad perfectly.
- (void)refreshData:(QMNativeAd * _Nonnull)nativeAd;
- (void)refreshDataWithSplashNativeAd:(QMSplashNativeAd * _Nonnull)splashNativeAd;
@end


SWIFT_CLASS("_TtC7QMAdSDK16QMNativeMaterial")
@interface QMNativeMaterial : NSObject
/// 广告类型
@property (nonatomic, readonly) enum QMMaterialType type;
/// 广告标题
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
/// 广告描述
@property (nonatomic, readonly, copy) NSString * _Nonnull desc;
/// 视频或者单图的媒体信息
@property (nonatomic, strong) QMImage * _Nonnull qmMedia;
/// 组图
@property (nonatomic, copy) NSArray<QMImage *> * _Nonnull atlasImage;
/// 广告按钮标题
@property (nonatomic, readonly, copy) NSString * _Nonnull interactionTitle;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol QMRewardedVideoAdDelegate;

SWIFT_CLASS("_TtC7QMAdSDK17QMRewardedVideoAd")
@interface QMRewardedVideoAd : NSObject
@property (nonatomic, weak) id <QMRewardedVideoAdDelegate> _Nullable delegate;
/// 单位：分
@property (nonatomic, readonly) NSInteger ecpm SWIFT_DEPRECATED_MSG("Use meta.");
@property (nonatomic, strong) QMAdMeta * _Nullable meta;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nonnull metaDic SWIFT_DEPRECATED_MSG("Use meta.");
@property (nonatomic, readonly, copy) NSString * _Nonnull slotID;
/// 初始化
/// @param slotID  栏位id
- (nonnull instancetype)initWithSlot:(NSString * _Nonnull)slotID OBJC_DESIGNATED_INITIALIZER;
/// 加载广告
- (void)loadAdData;
/// 展示广告
- (void)showRewardedVideoViewInRootViewController:(UIViewController * _Nonnull)viewController;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface QMRewardedVideoAd (SWIFT_EXTENSION(QMAdSDK))
+ (QMRewardedVideoAd * _Nonnull)loadDataWithSlot:(NSString * _Nonnull)slot registerObserver:(id <QMRewardedVideoAdDelegate> _Nonnull)registerObserver;
@end


typedef SWIFT_ENUM(NSUInteger, QMRewardedVideoAdCloseType, open) {
  QMRewardedVideoAdCloseTypeUnknow = 0,
  QMRewardedVideoAdCloseTypeSkip = 1,
  QMRewardedVideoAdCloseTypeClickAd = 3,
};


SWIFT_PROTOCOL("_TtP7QMAdSDK25QMRewardedVideoAdDelegate_")
@protocol QMRewardedVideoAdDelegate <NSObject>
/// 激励视频广告加载成功
- (void)qm_rewardedVideoAdLoadSuccess:(QMRewardedVideoAd * _Nonnull)rewardedVideoAd;
/// 激励视频广告加载失败
- (void)qm_rewardedVideoAdLoadFail:(QMRewardedVideoAd * _Nonnull)rewardedVideoAd error:(NSError * _Nullable)error;
/// 激励视频广告曝光
- (void)qm_rewardedVideoAdDidShow:(QMRewardedVideoAd * _Nonnull)rewardedVideoAd;
/// 激励视频广告点击
- (void)qm_rewardedVideoAdDidClick:(QMRewardedVideoAd * _Nonnull)rewardedVideoAd;
/// 激励视频广告关闭
- (void)qm_rewardedVideoAdDidClose:(QMRewardedVideoAd * _Nonnull)rewardedVideoAd closeType:(enum QMRewardedVideoAdCloseType)type;
/// 落地页关闭
- (void)qm_rewardedVideoAdDidCloseOtherController:(QMRewardedVideoAd * _Nonnull)rewardedVideoAd;
/// 激励视频广告激励完成
- (void)qm_rewardedVideoAdDidRewarded:(QMRewardedVideoAd * _Nonnull)rewardedVideoAd;
/// 激励视频广告视频播放完成
- (void)qm_rewardedVideoAdVideoDidPlayComplection:(QMRewardedVideoAd * _Nonnull)rewardedVideoAd rewarded:(BOOL)isRewarded;
/// 激励视频广告视频播放结束
- (void)qm_rewardedVideoAdVideoDidPlayFinished:(QMRewardedVideoAd * _Nonnull)rewardedVideoAd didFailWithError:(NSError * _Nonnull)error rewarded:(BOOL)isRewarded;
@end

@protocol QMSplashAdDelegate;

SWIFT_CLASS("_TtC7QMAdSDK10QMSplashAd")
@interface QMSplashAd : NSObject
@property (nonatomic, weak) id <QMSplashAdDelegate> _Nullable delegate;
/// 单位：分
@property (nonatomic, readonly) NSInteger ecpm SWIFT_DEPRECATED_MSG("Use meta.");
@property (nonatomic, strong) QMAdMeta * _Nullable meta;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nonnull metaDic SWIFT_DEPRECATED_MSG("Use meta.");
@property (nonatomic, readonly, copy) NSString * _Nonnull slotID;
/// 初始化
/// @param slotID  栏位id
- (nonnull instancetype)initWithSlot:(NSString * _Nonnull)slotID OBJC_DESIGNATED_INITIALIZER;
- (void)loadAdData;
/// <h2>展示开屏广告，自定义底部logo</h2>
/// | splashview                        |
/// |                                           |
/// |                                           |
/// |                                           |
/// |                                           |
/// |                                           |
/// |                                           |
/// |————————————|
/// |            bottom view            |
/// |                                           |
/// |————————————|
- (void)showSplashViewController:(UIViewController * _Nonnull)controller winthBottomView:(UIView * _Nonnull)bottomView;
/// 展示开屏广告
- (void)showSplashViewController:(UIViewController * _Nonnull)controller;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface QMSplashAd (SWIFT_EXTENSION(QMAdSDK))
+ (QMSplashAd * _Nonnull)loadDataWithSlot:(NSString * _Nonnull)slot registerObserver:(id <QMSplashAdDelegate> _Nonnull)registerObserver;
@end


typedef SWIFT_ENUM(NSUInteger, QMSplashAdCloseType, open) {
  QMSplashAdCloseTypeUnknow = 0,
  QMSplashAdCloseTypeSkip = 1,
  QMSplashAdCloseTypeCountdown = 2,
  QMSplashAdCloseTypeClickAd = 3,
};


SWIFT_PROTOCOL("_TtP7QMAdSDK18QMSplashAdDelegate_")
@protocol QMSplashAdDelegate <NSObject>
/// 开屏广告加载成功
- (void)qm_splashAdLoadSuccess:(QMSplashAd * _Nonnull)splashAd;
/// 开屏广告加载失败
- (void)qm_splashAdLoadFail:(QMSplashAd * _Nonnull)splashAd error:(NSError * _Nullable)error;
/// 开屏广告曝光
- (void)qm_splashAdDidShow:(QMSplashAd * _Nonnull)splashAd;
/// 开屏广告点击
- (void)qm_splashAdDidClick:(QMSplashAd * _Nonnull)splashAd;
/// 开屏广告关闭
- (void)qm_splashAdDidClose:(QMSplashAd * _Nonnull)splashAd closeType:(enum QMSplashAdCloseType)type;
/// 开屏广告视频播放结束回调
- (void)qm_splashAdVideoDidPlayFinished:(QMSplashAd * _Nonnull)splashAd didFailWithError:(NSError * _Nonnull)error;
@end

@protocol QMSplashNativeAdDelegate;

SWIFT_CLASS("_TtC7QMAdSDK16QMSplashNativeAd")
@interface QMSplashNativeAd : NSObject
@property (nonatomic, weak) id <QMSplashNativeAdDelegate> _Nullable delegate;
@property (nonatomic, strong) QMAdMeta * _Nullable meta;
/// 初始化
/// @param slotID  栏位id
- (nonnull instancetype)initWithSlot:(NSString * _Nonnull)slotID OBJC_DESIGNATED_INITIALIZER;
/// 加载广告
- (void)loadAdData;
/// 注册可点击区域
/// @param containerView :  requried  广告展示区域
/// @param clickableViews : optional  其他可点击区域
- (void)registerContainer:(UIView * _Nonnull)containerView withClickableViews:(NSArray<UIView *> * _Nullable)clickableViews;
/// Unregister ad view from the native ad.
- (void)unregisterView;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface QMSplashNativeAd (SWIFT_EXTENSION(QMAdSDK)) <QMNativeAdDelegate>
- (void)qm_nativeAdLoadSuccess:(QMNativeAd * _Nonnull)nativeAd;
- (void)qm_nativeAdLoadFail:(QMNativeAd * _Nonnull)nativeAd error:(NSError * _Nonnull)error;
- (void)qm_nativeAdDidShow:(QMNativeAd * _Nonnull)nativeAd;
- (void)qm_nativeAdDidClick:(QMNativeAd * _Nonnull)nativeAd;
- (void)qm_nativeAdDidCloseOtherController:(QMNativeAd * _Nonnull)nativeAd;
@end


SWIFT_PROTOCOL("_TtP7QMAdSDK24QMSplashNativeAdDelegate_")
@protocol QMSplashNativeAdDelegate <NSObject>
/// 开屏广告加载成功
- (void)qm_splashAdLoadSuccess:(QMSplashNativeAd * _Nonnull)splashAd;
/// 开屏广告加载失败
- (void)qm_splashAdLoadFail:(QMSplashNativeAd * _Nonnull)splashAd error:(NSError * _Nullable)error;
/// 开屏广告曝光
- (void)qm_splashAdDidShow:(QMSplashNativeAd * _Nonnull)splashAd;
/// 开屏广告点击
- (void)qm_splashAdDidClick:(QMSplashNativeAd * _Nonnull)splashAd;
/// 开屏广告关闭
- (void)qm_splashAdDidClose:(QMSplashNativeAd * _Nonnull)splashAd closeType:(enum QMSplashAdCloseType)type;
@end










#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
