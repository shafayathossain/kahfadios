#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ComposeAppAdConfig, ComposeAppAdImpressionListener, ComposeAppAdPlacementId, ComposeAppAdPlacementIdEpom, ComposeAppAdPlacementIdEthical, ComposeAppAdRequest, ComposeAppAdResponse, ComposeAppAdResult, ComposeAppAdResultError, ComposeAppAdResultSuccess, ComposeAppAdSize, ComposeAppAdSizeCompanion, ComposeAppAdType, ComposeAppAdViewConfig, ComposeAppBannerAdSize, ComposeAppBannerAdType, ComposeAppBannerAdUiModel, ComposeAppEpomImageAdResponse, ComposeAppEpomImageAdResponseCompanion, ComposeAppEpomNativeAdResponse, ComposeAppEpomNativeAdResponseAsset, ComposeAppEpomNativeAdResponseAssetCompanion, ComposeAppEpomNativeAdResponseBeacon, ComposeAppEpomNativeAdResponseBeaconCompanion, ComposeAppEpomNativeAdResponseCompanion, ComposeAppEpomNativeAdResponseCustomization, ComposeAppEpomNativeAdResponseCustomizationCompanion, ComposeAppErrorType, ComposeAppEthicalAdResponse, ComposeAppEthicalAdResponseCompanion, ComposeAppEthicalAdResponseCopy, ComposeAppEthicalAdResponseCopyCompanion, ComposeAppFullScreenImageAdUiModel, ComposeAppKahfAdSdk, ComposeAppKahfAdSdkKahfAdSdkCompanion, ComposeAppKotlinAbstractCoroutineContextElement, ComposeAppKotlinAbstractCoroutineContextKey<B, E>, ComposeAppKotlinArray<T>, ComposeAppKotlinByteArray, ComposeAppKotlinByteIterator, ComposeAppKotlinCancellationException, ComposeAppKotlinEnum<E>, ComposeAppKotlinEnumCompanion, ComposeAppKotlinException, ComposeAppKotlinFloatArray, ComposeAppKotlinFloatIterator, ComposeAppKotlinIllegalStateException, ComposeAppKotlinIntArray, ComposeAppKotlinIntIterator, ComposeAppKotlinIntProgression, ComposeAppKotlinIntProgressionCompanion, ComposeAppKotlinIntRange, ComposeAppKotlinIntRangeCompanion, ComposeAppKotlinKTypeProjection, ComposeAppKotlinKTypeProjectionCompanion, ComposeAppKotlinKVariance, ComposeAppKotlinMatchGroup, ComposeAppKotlinMatchResultDestructured, ComposeAppKotlinNothing, ComposeAppKotlinPair<__covariant A, __covariant B>, ComposeAppKotlinRegex, ComposeAppKotlinRegexCompanion, ComposeAppKotlinRegexOption, ComposeAppKotlinRuntimeException, ComposeAppKotlinShortArray, ComposeAppKotlinShortIterator, ComposeAppKotlinThrowable, ComposeAppKotlinUnit, ComposeAppKotlinx_coroutines_coreCoroutineDispatcher, ComposeAppKotlinx_coroutines_coreCoroutineDispatcherKey, ComposeAppKotlinx_io_coreBuffer, ComposeAppKotlinx_serialization_coreSerialKind, ComposeAppKotlinx_serialization_coreSerializersModule, ComposeAppKtor_client_coreHttpClient, ComposeAppKtor_client_coreHttpClientCall, ComposeAppKtor_client_coreHttpClientCallCompanion, ComposeAppKtor_client_coreHttpClientConfig<T>, ComposeAppKtor_client_coreHttpClientEngineConfig, ComposeAppKtor_client_coreHttpReceivePipeline, ComposeAppKtor_client_coreHttpReceivePipelinePhases, ComposeAppKtor_client_coreHttpRequestBuilder, ComposeAppKtor_client_coreHttpRequestBuilderCompanion, ComposeAppKtor_client_coreHttpRequestData, ComposeAppKtor_client_coreHttpRequestPipeline, ComposeAppKtor_client_coreHttpRequestPipelinePhases, ComposeAppKtor_client_coreHttpResponse, ComposeAppKtor_client_coreHttpResponseContainer, ComposeAppKtor_client_coreHttpResponseData, ComposeAppKtor_client_coreHttpResponsePipeline, ComposeAppKtor_client_coreHttpResponsePipelinePhases, ComposeAppKtor_client_coreHttpSendPipeline, ComposeAppKtor_client_coreHttpSendPipelinePhases, ComposeAppKtor_client_coreProxyConfig, ComposeAppKtor_eventsEventDefinition<T>, ComposeAppKtor_eventsEvents, ComposeAppKtor_httpContentType, ComposeAppKtor_httpContentTypeCompanion, ComposeAppKtor_httpHeaderValueParam, ComposeAppKtor_httpHeaderValueWithParameters, ComposeAppKtor_httpHeaderValueWithParametersCompanion, ComposeAppKtor_httpHeadersBuilder, ComposeAppKtor_httpHttpMethod, ComposeAppKtor_httpHttpMethodCompanion, ComposeAppKtor_httpHttpProtocolVersion, ComposeAppKtor_httpHttpProtocolVersionCompanion, ComposeAppKtor_httpHttpStatusCode, ComposeAppKtor_httpHttpStatusCodeCompanion, ComposeAppKtor_httpOutgoingContent, ComposeAppKtor_httpURLBuilder, ComposeAppKtor_httpURLBuilderCompanion, ComposeAppKtor_httpURLProtocol, ComposeAppKtor_httpURLProtocolCompanion, ComposeAppKtor_httpUrl, ComposeAppKtor_httpUrlCompanion, ComposeAppKtor_utilsAttributeKey<T>, ComposeAppKtor_utilsGMTDate, ComposeAppKtor_utilsGMTDateCompanion, ComposeAppKtor_utilsMonth, ComposeAppKtor_utilsMonthCompanion, ComposeAppKtor_utilsPipeline<TSubject, TContext>, ComposeAppKtor_utilsPipelinePhase, ComposeAppKtor_utilsStringValuesBuilderImpl, ComposeAppKtor_utilsTypeInfo, ComposeAppKtor_utilsWeekDay, ComposeAppKtor_utilsWeekDayCompanion, ComposeAppPlatformInfo, ComposeAppProviderRegistry, ComposeAppProviderRegistryProviderType, ComposeAppSkikoBackendRenderTarget, ComposeAppSkikoBackendRenderTargetCompanion, ComposeAppSkikoBitmap, ComposeAppSkikoBitmapCompanion, ComposeAppSkikoBlendMode, ComposeAppSkikoCanvas, ComposeAppSkikoCanvasCompanion, ComposeAppSkikoCanvasSaveLayerFlags, ComposeAppSkikoCanvasSaveLayerFlagsSet, ComposeAppSkikoCanvasSaveLayerRec, ComposeAppSkikoClipMode, ComposeAppSkikoColor4f, ComposeAppSkikoColor4fCompanion, ComposeAppSkikoColorAlphaType, ComposeAppSkikoColorChannel, ComposeAppSkikoColorFilter, ComposeAppSkikoColorFilterCompanion, ComposeAppSkikoColorInfo, ComposeAppSkikoColorInfoCompanion, ComposeAppSkikoColorMatrix, ComposeAppSkikoColorSpace, ComposeAppSkikoColorSpaceCompanion, ComposeAppSkikoColorType, ComposeAppSkikoColorTypeCompanion, ComposeAppSkikoContentChangeMode, ComposeAppSkikoData, ComposeAppSkikoDataCompanion, ComposeAppSkikoDirectContext, ComposeAppSkikoDirectContextCompanion, ComposeAppSkikoDrawable, ComposeAppSkikoDrawableCompanion, ComposeAppSkikoEncodedImageFormat, ComposeAppSkikoFilterBlurMode, ComposeAppSkikoFilterMode, ComposeAppSkikoFilterTileMode, ComposeAppSkikoFont, ComposeAppSkikoFontCompanion, ComposeAppSkikoFontEdging, ComposeAppSkikoFontFamilyName, ComposeAppSkikoFontFeature, ComposeAppSkikoFontFeatureCompanion, ComposeAppSkikoFontHinting, ComposeAppSkikoFontMetrics, ComposeAppSkikoFontMetricsCompanion, ComposeAppSkikoFontMgr, ComposeAppSkikoFontMgrCompanion, ComposeAppSkikoFontSlant, ComposeAppSkikoFontStyle, ComposeAppSkikoFontStyleCompanion, ComposeAppSkikoFontStyleSet, ComposeAppSkikoFontStyleSetCompanion, ComposeAppSkikoFontVariation, ComposeAppSkikoFontVariationAxis, ComposeAppSkikoFontVariationCompanion, ComposeAppSkikoGLBackendState, ComposeAppSkikoGradientStyle, ComposeAppSkikoGradientStyleCompanion, ComposeAppSkikoIPoint, ComposeAppSkikoIPointCompanion, ComposeAppSkikoIRect, ComposeAppSkikoIRectCompanion, ComposeAppSkikoISize, ComposeAppSkikoISizeCompanion, ComposeAppSkikoImage, ComposeAppSkikoImageCompanion, ComposeAppSkikoImageFilter, ComposeAppSkikoImageFilterCompanion, ComposeAppSkikoImageInfo, ComposeAppSkikoImageInfoCompanion, ComposeAppSkikoInversionMode, ComposeAppSkikoManaged, ComposeAppSkikoMaskFilter, ComposeAppSkikoMaskFilterCompanion, ComposeAppSkikoMatcher, ComposeAppSkikoMatrix22, ComposeAppSkikoMatrix22Companion, ComposeAppSkikoMatrix33, ComposeAppSkikoMatrix33Companion, ComposeAppSkikoMatrix44, ComposeAppSkikoMatrix44Companion, ComposeAppSkikoNative, ComposeAppSkikoNativeCompanion, ComposeAppSkikoPaint, ComposeAppSkikoPaintCompanion, ComposeAppSkikoPaintMode, ComposeAppSkikoPaintStrokeCap, ComposeAppSkikoPaintStrokeJoin, ComposeAppSkikoPath, ComposeAppSkikoPathCompanion, ComposeAppSkikoPathDirection, ComposeAppSkikoPathEffect, ComposeAppSkikoPathEffectCompanion, ComposeAppSkikoPathEffectStyle, ComposeAppSkikoPathEllipseArc, ComposeAppSkikoPathFillMode, ComposeAppSkikoPathOp, ComposeAppSkikoPathSegment, ComposeAppSkikoPathSegmentIterator, ComposeAppSkikoPathSegmentIteratorCompanion, ComposeAppSkikoPathVerb, ComposeAppSkikoPattern, ComposeAppSkikoPicture, ComposeAppSkikoPictureCompanion, ComposeAppSkikoPixelGeometry, ComposeAppSkikoPixelRef, ComposeAppSkikoPixelRefCompanion, ComposeAppSkikoPixmap, ComposeAppSkikoPixmapCompanion, ComposeAppSkikoPoint, ComposeAppSkikoPointCompanion, ComposeAppSkikoRRect, ComposeAppSkikoRRectCompanion, ComposeAppSkikoRSXform, ComposeAppSkikoRSXformCompanion, ComposeAppSkikoRect, ComposeAppSkikoRectCompanion, ComposeAppSkikoRefCnt, ComposeAppSkikoRegion, ComposeAppSkikoRegionCompanion, ComposeAppSkikoRegionOp, ComposeAppSkikoRegionOpCompanion, ComposeAppSkikoRuntimeEffect, ComposeAppSkikoRuntimeEffectCompanion, ComposeAppSkikoRuntimeShaderBuilder, ComposeAppSkikoRuntimeShaderBuilderCompanion, ComposeAppSkikoShader, ComposeAppSkikoShaderCompanion, ComposeAppSkikoShapingOptions, ComposeAppSkikoShapingOptionsCompanion, ComposeAppSkikoSurface, ComposeAppSkikoSurfaceColorFormat, ComposeAppSkikoSurfaceCompanion, ComposeAppSkikoSurfaceOrigin, ComposeAppSkikoSurfaceProps, ComposeAppSkikoTextBlob, ComposeAppSkikoTextBlobCompanion, ComposeAppSkikoTextLine, ComposeAppSkikoTextLineCompanion, ComposeAppSkikoTypeface, ComposeAppSkikoTypefaceCompanion, ComposeAppSkikoVertexMode, ComposeAppTrackingBeacon, ComposeAppUi_geometryRect, ComposeAppUi_geometryRectCompanion, ComposeAppUi_geometryRoundRect, ComposeAppUi_geometryRoundRectCompanion, ComposeAppUi_graphicsBrush, ComposeAppUi_graphicsBrushCompanion, ComposeAppUi_graphicsColorFilter, ComposeAppUi_graphicsColorFilterCompanion, ComposeAppUi_graphicsColorSpace, ComposeAppUi_graphicsDrawStyle, ComposeAppUi_graphicsGraphicsLayer, ComposeAppUi_graphicsOutline, ComposeAppUi_graphicsPainter, ComposeAppUi_graphicsPathDirection, ComposeAppUi_graphicsPathIteratorConicEvaluation, ComposeAppUi_graphicsPathSegmentType, ComposeAppUi_graphicsRenderEffect, ComposeAppUi_graphicsVertices, ComposeAppUi_unitDpRect, ComposeAppUi_unitDpRectCompanion, ComposeAppUi_unitLayoutDirection, UIViewController;

@protocol ComposeAppAdController, ComposeAppAdProvider, ComposeAppKotlinAnnotation, ComposeAppKotlinAutoCloseable, ComposeAppKotlinClosedRange, ComposeAppKotlinCollection, ComposeAppKotlinComparable, ComposeAppKotlinContinuation, ComposeAppKotlinContinuationInterceptor, ComposeAppKotlinCoroutineContext, ComposeAppKotlinCoroutineContextElement, ComposeAppKotlinCoroutineContextKey, ComposeAppKotlinFunction, ComposeAppKotlinIterable, ComposeAppKotlinIterator, ComposeAppKotlinKAnnotatedElement, ComposeAppKotlinKClass, ComposeAppKotlinKClassifier, ComposeAppKotlinKDeclarationContainer, ComposeAppKotlinKType, ComposeAppKotlinMapEntry, ComposeAppKotlinMatchGroupCollection, ComposeAppKotlinMatchResult, ComposeAppKotlinMutableIterator, ComposeAppKotlinOpenEndRange, ComposeAppKotlinSequence, ComposeAppKotlinSuspendFunction2, ComposeAppKotlinx_coroutines_coreChildHandle, ComposeAppKotlinx_coroutines_coreChildJob, ComposeAppKotlinx_coroutines_coreCoroutineScope, ComposeAppKotlinx_coroutines_coreDisposableHandle, ComposeAppKotlinx_coroutines_coreJob, ComposeAppKotlinx_coroutines_coreParentJob, ComposeAppKotlinx_coroutines_coreRunnable, ComposeAppKotlinx_coroutines_coreSelectClause, ComposeAppKotlinx_coroutines_coreSelectClause0, ComposeAppKotlinx_coroutines_coreSelectInstance, ComposeAppKotlinx_io_coreRawSink, ComposeAppKotlinx_io_coreRawSource, ComposeAppKotlinx_io_coreSink, ComposeAppKotlinx_io_coreSource, ComposeAppKotlinx_serialization_coreCompositeDecoder, ComposeAppKotlinx_serialization_coreCompositeEncoder, ComposeAppKotlinx_serialization_coreDecoder, ComposeAppKotlinx_serialization_coreDeserializationStrategy, ComposeAppKotlinx_serialization_coreEncoder, ComposeAppKotlinx_serialization_coreKSerializer, ComposeAppKotlinx_serialization_coreSerialDescriptor, ComposeAppKotlinx_serialization_coreSerializationStrategy, ComposeAppKotlinx_serialization_coreSerializersModuleCollector, ComposeAppKtor_client_coreHttpClientEngine, ComposeAppKtor_client_coreHttpClientEngineCapability, ComposeAppKtor_client_coreHttpClientPlugin, ComposeAppKtor_client_coreHttpRequest, ComposeAppKtor_httpHeaders, ComposeAppKtor_httpHttpMessage, ComposeAppKtor_httpHttpMessageBuilder, ComposeAppKtor_httpParameters, ComposeAppKtor_httpParametersBuilder, ComposeAppKtor_ioByteReadChannel, ComposeAppKtor_ioCloseable, ComposeAppKtor_ioJvmSerializable, ComposeAppKtor_utilsAttributes, ComposeAppKtor_utilsStringValues, ComposeAppKtor_utilsStringValuesBuilder, ComposeAppPlatform, ComposeAppRuntimeState, ComposeAppSkikoIHasImageInfo, ComposeAppSkikoSamplingMode, ComposeAppUi_graphicsCanvas, ComposeAppUi_graphicsDrawContext, ComposeAppUi_graphicsDrawScope, ComposeAppUi_graphicsDrawTransform, ComposeAppUi_graphicsImageBitmap, ComposeAppUi_graphicsPaint, ComposeAppUi_graphicsPath, ComposeAppUi_graphicsPathEffect, ComposeAppUi_graphicsPathIterator, ComposeAppUi_unitDensity, ComposeAppUi_unitFontScalingLinear;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface ComposeAppBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface ComposeAppBase (ComposeAppBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface ComposeAppMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface ComposeAppMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorComposeAppKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface ComposeAppNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface ComposeAppByte : ComposeAppNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface ComposeAppUByte : ComposeAppNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface ComposeAppShort : ComposeAppNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface ComposeAppUShort : ComposeAppNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface ComposeAppInt : ComposeAppNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface ComposeAppUInt : ComposeAppNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface ComposeAppLong : ComposeAppNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface ComposeAppULong : ComposeAppNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface ComposeAppFloat : ComposeAppNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface ComposeAppDouble : ComposeAppNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface ComposeAppBoolean : ComposeAppNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("AdImpressionListener")))
@interface ComposeAppAdImpressionListener : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onAdClicked __attribute__((swift_name("onAdClicked()")));
- (void)onAdFailedToLoadError:(ComposeAppKotlinThrowable *)error __attribute__((swift_name("onAdFailedToLoad(error:)")));
- (void)onAdLoaded __attribute__((swift_name("onAdLoaded()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface ComposeAppGreeting : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol ComposeAppPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface ComposeAppIOSPlatform : ComposeAppBase <ComposeAppPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KahfAdSdk")))
@interface ComposeAppKahfAdSdk : ComposeAppBase
@property (class, readonly, getter=companion) ComposeAppKahfAdSdkKahfAdSdkCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)getAppName __attribute__((swift_name("getAppName()")));
- (NSString *)getAppVersion __attribute__((swift_name("getAppVersion()")));
- (NSString *)getApplicationId __attribute__((swift_name("getApplicationId()")));
- (ComposeAppAdConfig *)getConfig __attribute__((swift_name("getConfig()")));
- (NSString *)getDeviceManufacturer __attribute__((swift_name("getDeviceManufacturer()")));
- (NSString *)getDeviceModel __attribute__((swift_name("getDeviceModel()")));
- (NSString *)getOsVersion __attribute__((swift_name("getOsVersion()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KahfAdSdk.KahfAdSdkCompanion")))
@interface ComposeAppKahfAdSdkKahfAdSdkCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kahfAdSdkCompanion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKahfAdSdkKahfAdSdkCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKahfAdSdk *)getInstance __attribute__((swift_name("getInstance()")));
- (void)initializeConfig:(ComposeAppAdConfig *)config platformInfo:(ComposeAppPlatformInfo *)platformInfo __attribute__((swift_name("initialize(config:platformInfo:)")));
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformInfo")))
@interface ComposeAppPlatformInfo : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getAppName __attribute__((swift_name("getAppName()")));
- (NSString *)getAppVersion __attribute__((swift_name("getAppVersion()")));
- (NSString *)getApplicationId __attribute__((swift_name("getApplicationId()")));
- (NSString *)getDeviceManufacturer __attribute__((swift_name("getDeviceManufacturer()")));
- (NSString *)getDeviceModel __attribute__((swift_name("getDeviceModel()")));
- (NSString *)getOsVersion __attribute__((swift_name("getOsVersion()")));
@end

__attribute__((swift_name("BannerAdCallbacks")))
@protocol ComposeAppBannerAdCallbacks
@required
- (void)onAdClick __attribute__((swift_name("onAdClick()")));
- (void)onAdClosed __attribute__((swift_name("onAdClosed()")));
- (void)onImpression __attribute__((swift_name("onImpression()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol ComposeAppKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface ComposeAppKotlinEnum<E> : ComposeAppBase <ComposeAppKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BannerAdSize")))
@interface ComposeAppBannerAdSize : ComposeAppKotlinEnum<ComposeAppBannerAdSize *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppBannerAdSize *small __attribute__((swift_name("small")));
@property (class, readonly) ComposeAppBannerAdSize *medium __attribute__((swift_name("medium")));
@property (class, readonly) ComposeAppBannerAdSize *large __attribute__((swift_name("large")));
+ (ComposeAppKotlinArray<ComposeAppBannerAdSize *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppBannerAdSize *> *entries __attribute__((swift_name("entries")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BannerAdType")))
@interface ComposeAppBannerAdType : ComposeAppKotlinEnum<ComposeAppBannerAdType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppBannerAdType *native __attribute__((swift_name("native")));
@property (class, readonly) ComposeAppBannerAdType *imageOnly __attribute__((swift_name("imageOnly")));
+ (ComposeAppKotlinArray<ComposeAppBannerAdType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppBannerAdType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BannerAdUiModel")))
@interface ComposeAppBannerAdUiModel : ComposeAppBase
- (instancetype)initWithImageUrl:(NSString *)imageUrl headline:(NSString *)headline description:(NSString * _Nullable)description companyName:(NSString * _Nullable)companyName companyLogoUrl:(NSString * _Nullable)companyLogoUrl ctaText:(NSString *)ctaText ctaUrl:(NSString * _Nullable)ctaUrl backgroundColor:(uint64_t)backgroundColor adSize:(ComposeAppBannerAdSize *)adSize adType:(ComposeAppBannerAdType *)adType __attribute__((swift_name("init(imageUrl:headline:description:companyName:companyLogoUrl:ctaText:ctaUrl:backgroundColor:adSize:adType:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppBannerAdUiModel *)doCopyImageUrl:(NSString *)imageUrl headline:(NSString *)headline description:(NSString * _Nullable)description companyName:(NSString * _Nullable)companyName companyLogoUrl:(NSString * _Nullable)companyLogoUrl ctaText:(NSString *)ctaText ctaUrl:(NSString * _Nullable)ctaUrl backgroundColor:(uint64_t)backgroundColor adSize:(ComposeAppBannerAdSize *)adSize adType:(ComposeAppBannerAdType *)adType __attribute__((swift_name("doCopy(imageUrl:headline:description:companyName:companyLogoUrl:ctaText:ctaUrl:backgroundColor:adSize:adType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppBannerAdSize *adSize __attribute__((swift_name("adSize")));
@property (readonly) ComposeAppBannerAdType *adType __attribute__((swift_name("adType")));
@property (readonly) uint64_t backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) NSString * _Nullable companyLogoUrl __attribute__((swift_name("companyLogoUrl")));
@property (readonly) NSString * _Nullable companyName __attribute__((swift_name("companyName")));
@property (readonly) NSString *ctaText __attribute__((swift_name("ctaText")));
@property (readonly) NSString * _Nullable ctaUrl __attribute__((swift_name("ctaUrl")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *headline __attribute__((swift_name("headline")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FullScreenImageAdUiModel")))
@interface ComposeAppFullScreenImageAdUiModel : ComposeAppBase
- (instancetype)initWithImageUrl:(NSString *)imageUrl companyLogoUrl:(NSString * _Nullable)companyLogoUrl title:(NSString * _Nullable)title companyName:(NSString * _Nullable)companyName buttonText:(NSString * _Nullable)buttonText buttonUrl:(NSString * _Nullable)buttonUrl __attribute__((swift_name("init(imageUrl:companyLogoUrl:title:companyName:buttonText:buttonUrl:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppFullScreenImageAdUiModel *)doCopyImageUrl:(NSString *)imageUrl companyLogoUrl:(NSString * _Nullable)companyLogoUrl title:(NSString * _Nullable)title companyName:(NSString * _Nullable)companyName buttonText:(NSString * _Nullable)buttonText buttonUrl:(NSString * _Nullable)buttonUrl __attribute__((swift_name("doCopy(imageUrl:companyLogoUrl:title:companyName:buttonText:buttonUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable buttonText __attribute__((swift_name("buttonText")));
@property (readonly) NSString * _Nullable buttonUrl __attribute__((swift_name("buttonUrl")));
@property (readonly) NSString * _Nullable companyLogoUrl __attribute__((swift_name("companyLogoUrl")));
@property (readonly) NSString * _Nullable companyName __attribute__((swift_name("companyName")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((swift_name("KahfAdApi")))
@interface ComposeAppKahfAdApi : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchAdRequest:(ComposeAppAdRequest *)request completionHandler:(void (^)(ComposeAppAdResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchAd(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)triggerGetRequestUrl:(NSString * _Nullable)url completionHandler:(void (^)(ComposeAppBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("triggerGetRequest(url:completionHandler:)")));
@end

__attribute__((swift_name("AdProvider")))
@protocol ComposeAppAdProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchImageAdRequest:(ComposeAppAdRequest *)request completionHandler:(void (^)(ComposeAppAdResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchImageAd(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchNativeAdRequest:(ComposeAppAdRequest *)request completionHandler:(void (^)(ComposeAppAdResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchNativeAd(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)triggerTrackingUrl:(NSString *)url completionHandler:(void (^)(ComposeAppBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("triggerTracking(url:completionHandler:)")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) ComposeAppKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderRegistry")))
@interface ComposeAppProviderRegistry : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<ComposeAppAdProvider>)getProviderType:(ComposeAppProviderRegistryProviderType *)type __attribute__((swift_name("getProvider(type:)")));
- (id<ComposeAppAdProvider>)getProviderForRequestRequest:(ComposeAppAdRequest *)request __attribute__((swift_name("getProviderForRequest(request:)")));
- (void)registerProviderType:(ComposeAppProviderRegistryProviderType *)type provider:(id<ComposeAppAdProvider>)provider __attribute__((swift_name("registerProvider(type:provider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderRegistry.ProviderType")))
@interface ComposeAppProviderRegistryProviderType : ComposeAppKotlinEnum<ComposeAppProviderRegistryProviderType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppProviderRegistryProviderType *ethicalAds __attribute__((swift_name("ethicalAds")));
@property (class, readonly) ComposeAppProviderRegistryProviderType *epom __attribute__((swift_name("epom")));
+ (ComposeAppKotlinArray<ComposeAppProviderRegistryProviderType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppProviderRegistryProviderType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EpomImageAdResponse")))
@interface ComposeAppEpomImageAdResponse : ComposeAppBase
- (instancetype)initWithSuccess:(BOOL)success creative:(NSString * _Nullable)creative click:(NSString * _Nullable)click beacon:(NSString * _Nullable)beacon code:(NSString * _Nullable)code directFileDownload:(BOOL)directFileDownload __attribute__((swift_name("init(success:creative:click:beacon:code:directFileDownload:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppEpomImageAdResponseCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppEpomImageAdResponse *)doCopySuccess:(BOOL)success creative:(NSString * _Nullable)creative click:(NSString * _Nullable)click beacon:(NSString * _Nullable)beacon code:(NSString * _Nullable)code directFileDownload:(BOOL)directFileDownload __attribute__((swift_name("doCopy(success:creative:click:beacon:code:directFileDownload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (ComposeAppAdResponse *)toCommonResponse __attribute__((swift_name("toCommonResponse()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="beacon")
*/
@property (readonly) NSString * _Nullable beacon __attribute__((swift_name("beacon")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="click")
*/
@property (readonly) NSString * _Nullable click __attribute__((swift_name("click")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="code")
*/
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="creative")
*/
@property (readonly) NSString * _Nullable creative __attribute__((swift_name("creative")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="directFileDownload")
*/
@property (readonly) BOOL directFileDownload __attribute__((swift_name("directFileDownload")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="success")
*/
@property (readonly) BOOL success __attribute__((swift_name("success")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EpomImageAdResponse.Companion")))
@interface ComposeAppEpomImageAdResponseCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppEpomImageAdResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EpomNativeAdResponse")))
@interface ComposeAppEpomNativeAdResponse : ComposeAppBase
- (instancetype)initWithType:(NSString * _Nullable)type version:(NSString * _Nullable)version beacons:(NSArray<ComposeAppEpomNativeAdResponseBeacon *> * _Nullable)beacons bannerId:(ComposeAppInt * _Nullable)bannerId placementId:(ComposeAppInt * _Nullable)placementId customization:(ComposeAppEpomNativeAdResponseCustomization * _Nullable)customization title:(NSString * _Nullable)title subtitle:(NSString * _Nullable)subtitle description:(NSString * _Nullable)description ctaText:(NSString * _Nullable)ctaText advertiser:(NSString * _Nullable)advertiser rating:(ComposeAppDouble * _Nullable)rating icons:(NSArray<ComposeAppEpomNativeAdResponseAsset *> * _Nullable)icons images:(NSArray<ComposeAppEpomNativeAdResponseAsset *> * _Nullable)images videos:(NSArray<ComposeAppEpomNativeAdResponseAsset *> * _Nullable)videos clickUrl:(NSString * _Nullable)clickUrl refreshInterval:(NSString * _Nullable)refreshInterval __attribute__((swift_name("init(type:version:beacons:bannerId:placementId:customization:title:subtitle:description:ctaText:advertiser:rating:icons:images:videos:clickUrl:refreshInterval:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppEpomNativeAdResponseCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppEpomNativeAdResponse *)doCopyType:(NSString * _Nullable)type version:(NSString * _Nullable)version beacons:(NSArray<ComposeAppEpomNativeAdResponseBeacon *> * _Nullable)beacons bannerId:(ComposeAppInt * _Nullable)bannerId placementId:(ComposeAppInt * _Nullable)placementId customization:(ComposeAppEpomNativeAdResponseCustomization * _Nullable)customization title:(NSString * _Nullable)title subtitle:(NSString * _Nullable)subtitle description:(NSString * _Nullable)description ctaText:(NSString * _Nullable)ctaText advertiser:(NSString * _Nullable)advertiser rating:(ComposeAppDouble * _Nullable)rating icons:(NSArray<ComposeAppEpomNativeAdResponseAsset *> * _Nullable)icons images:(NSArray<ComposeAppEpomNativeAdResponseAsset *> * _Nullable)images videos:(NSArray<ComposeAppEpomNativeAdResponseAsset *> * _Nullable)videos clickUrl:(NSString * _Nullable)clickUrl refreshInterval:(NSString * _Nullable)refreshInterval __attribute__((swift_name("doCopy(type:version:beacons:bannerId:placementId:customization:title:subtitle:description:ctaText:advertiser:rating:icons:images:videos:clickUrl:refreshInterval:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (ComposeAppAdResponse *)toCommonResponse __attribute__((swift_name("toCommonResponse()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="advertiser")
*/
@property (readonly) NSString * _Nullable advertiser __attribute__((swift_name("advertiser")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bannerId")
*/
@property (readonly) ComposeAppInt * _Nullable bannerId __attribute__((swift_name("bannerId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="beacons")
*/
@property (readonly) NSArray<ComposeAppEpomNativeAdResponseBeacon *> * _Nullable beacons __attribute__((swift_name("beacons")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="clickUrl")
*/
@property (readonly) NSString * _Nullable clickUrl __attribute__((swift_name("clickUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ctaText")
*/
@property (readonly) NSString * _Nullable ctaText __attribute__((swift_name("ctaText")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="customization")
*/
@property (readonly) ComposeAppEpomNativeAdResponseCustomization * _Nullable customization __attribute__((swift_name("customization")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="icons")
*/
@property (readonly) NSArray<ComposeAppEpomNativeAdResponseAsset *> * _Nullable icons __attribute__((swift_name("icons")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="images")
*/
@property (readonly) NSArray<ComposeAppEpomNativeAdResponseAsset *> * _Nullable images __attribute__((swift_name("images")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="placementId")
*/
@property (readonly) ComposeAppInt * _Nullable placementId __attribute__((swift_name("placementId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rating")
*/
@property (readonly) ComposeAppDouble * _Nullable rating __attribute__((swift_name("rating")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="refreshInterval")
*/
@property (readonly) NSString * _Nullable refreshInterval __attribute__((swift_name("refreshInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="subtitle")
*/
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="version")
*/
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="videos")
*/
@property (readonly) NSArray<ComposeAppEpomNativeAdResponseAsset *> * _Nullable videos __attribute__((swift_name("videos")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EpomNativeAdResponse.Asset")))
@interface ComposeAppEpomNativeAdResponseAsset : ComposeAppBase
- (instancetype)initWithWidth:(ComposeAppInt * _Nullable)width height:(ComposeAppInt * _Nullable)height url:(NSString * _Nullable)url __attribute__((swift_name("init(width:height:url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppEpomNativeAdResponseAssetCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppEpomNativeAdResponseAsset *)doCopyWidth:(ComposeAppInt * _Nullable)width height:(ComposeAppInt * _Nullable)height url:(NSString * _Nullable)url __attribute__((swift_name("doCopy(width:height:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/
@property (readonly) ComposeAppInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@property (readonly) ComposeAppInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EpomNativeAdResponse.AssetCompanion")))
@interface ComposeAppEpomNativeAdResponseAssetCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppEpomNativeAdResponseAssetCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EpomNativeAdResponse.Beacon")))
@interface ComposeAppEpomNativeAdResponseBeacon : ComposeAppBase
- (instancetype)initWithType:(NSString * _Nullable)type url:(NSString * _Nullable)url __attribute__((swift_name("init(type:url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppEpomNativeAdResponseBeaconCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppEpomNativeAdResponseBeacon *)doCopyType:(NSString * _Nullable)type url:(NSString * _Nullable)url __attribute__((swift_name("doCopy(type:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EpomNativeAdResponse.BeaconCompanion")))
@interface ComposeAppEpomNativeAdResponseBeaconCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppEpomNativeAdResponseBeaconCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EpomNativeAdResponse.Companion")))
@interface ComposeAppEpomNativeAdResponseCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppEpomNativeAdResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EpomNativeAdResponse.Customization")))
@interface ComposeAppEpomNativeAdResponseCustomization : ComposeAppBase
- (instancetype)initWithSponsoredIndication:(NSString * _Nullable)sponsoredIndication nativeAdType:(NSString * _Nullable)nativeAdType brandName:(NSString * _Nullable)brandName logo:(NSString * _Nullable)logo __attribute__((swift_name("init(sponsoredIndication:nativeAdType:brandName:logo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppEpomNativeAdResponseCustomizationCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppEpomNativeAdResponseCustomization *)doCopySponsoredIndication:(NSString * _Nullable)sponsoredIndication nativeAdType:(NSString * _Nullable)nativeAdType brandName:(NSString * _Nullable)brandName logo:(NSString * _Nullable)logo __attribute__((swift_name("doCopy(sponsoredIndication:nativeAdType:brandName:logo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="brand_name")
*/
@property (readonly) NSString * _Nullable brandName __attribute__((swift_name("brandName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="logo")
*/
@property (readonly) NSString * _Nullable logo __attribute__((swift_name("logo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="native_ad_type")
*/
@property (readonly) NSString * _Nullable nativeAdType __attribute__((swift_name("nativeAdType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sponsored_indication")
*/
@property (readonly) NSString * _Nullable sponsoredIndication __attribute__((swift_name("sponsoredIndication")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EpomNativeAdResponse.CustomizationCompanion")))
@interface ComposeAppEpomNativeAdResponseCustomizationCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppEpomNativeAdResponseCustomizationCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EpomProvider")))
@interface ComposeAppEpomProvider : ComposeAppBase <ComposeAppAdProvider>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchImageAdRequest:(ComposeAppAdRequest *)request completionHandler:(void (^)(ComposeAppAdResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchImageAd(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchNativeAdRequest:(ComposeAppAdRequest *)request completionHandler:(void (^)(ComposeAppAdResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchNativeAd(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)triggerTrackingUrl:(NSString *)url completionHandler:(void (^)(ComposeAppBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("triggerTracking(url:completionHandler:)")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) ComposeAppKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EthicalAdResponse")))
@interface ComposeAppEthicalAdResponse : ComposeAppBase
- (instancetype)initWithId:(NSString * _Nullable)id text:(NSString * _Nullable)text body:(NSString * _Nullable)body html:(NSString * _Nullable)html copy:(ComposeAppEthicalAdResponseCopy * _Nullable)copy image:(NSString * _Nullable)image video:(NSString * _Nullable)video link:(NSString * _Nullable)link viewUrl:(NSString * _Nullable)viewUrl viewTimeUrl:(NSString * _Nullable)viewTimeUrl nonce:(NSString * _Nullable)nonce displayType:(NSString * _Nullable)displayType campaignType:(NSString * _Nullable)campaignType divId:(NSString * _Nullable)divId __attribute__((swift_name("init(id:text:body:html:copy:image:video:link:viewUrl:viewTimeUrl:nonce:displayType:campaignType:divId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppEthicalAdResponseCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppEthicalAdResponse *)doCopyId:(NSString * _Nullable)id text:(NSString * _Nullable)text body:(NSString * _Nullable)body html:(NSString * _Nullable)html copy:(ComposeAppEthicalAdResponseCopy * _Nullable)copy image:(NSString * _Nullable)image video:(NSString * _Nullable)video link:(NSString * _Nullable)link viewUrl:(NSString * _Nullable)viewUrl viewTimeUrl:(NSString * _Nullable)viewTimeUrl nonce:(NSString * _Nullable)nonce displayType:(NSString * _Nullable)displayType campaignType:(NSString * _Nullable)campaignType divId:(NSString * _Nullable)divId __attribute__((swift_name("doCopy(id:text:body:html:copy:image:video:link:viewUrl:viewTimeUrl:nonce:displayType:campaignType:divId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (ComposeAppAdResponse *)toCommonResponse __attribute__((swift_name("toCommonResponse()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="body")
*/
@property (readonly) NSString * _Nullable body __attribute__((swift_name("body")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="campaign_type")
*/
@property (readonly) NSString * _Nullable campaignType __attribute__((swift_name("campaignType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="copy")
*/
@property (readonly, getter=doCopy) ComposeAppEthicalAdResponseCopy * _Nullable copy __attribute__((swift_name("copy")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_type")
*/
@property (readonly) NSString * _Nullable displayType __attribute__((swift_name("displayType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="div_id")
*/
@property (readonly) NSString * _Nullable divId __attribute__((swift_name("divId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="html")
*/
@property (readonly) NSString * _Nullable html __attribute__((swift_name("html")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image")
*/
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="link")
*/
@property (readonly) NSString * _Nullable link __attribute__((swift_name("link")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nonce")
*/
@property (readonly) NSString * _Nullable nonce __attribute__((swift_name("nonce")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video")
*/
@property (readonly) NSString * _Nullable video __attribute__((swift_name("video")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="view_time_url")
*/
@property (readonly) NSString * _Nullable viewTimeUrl __attribute__((swift_name("viewTimeUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="view_url")
*/
@property (readonly) NSString * _Nullable viewUrl __attribute__((swift_name("viewUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EthicalAdResponse.Companion")))
@interface ComposeAppEthicalAdResponseCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppEthicalAdResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EthicalAdResponse.Copy")))
@interface ComposeAppEthicalAdResponseCopy : ComposeAppBase
- (instancetype)initWithHeadline:(NSString * _Nullable)headline cta:(NSString * _Nullable)cta content:(NSString * _Nullable)content __attribute__((swift_name("init(headline:cta:content:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppEthicalAdResponseCopyCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppEthicalAdResponseCopy *)doCopyHeadline:(NSString * _Nullable)headline cta:(NSString * _Nullable)cta content:(NSString * _Nullable)content __attribute__((swift_name("doCopy(headline:cta:content:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property (readonly) NSString * _Nullable content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cta")
*/
@property (readonly) NSString * _Nullable cta __attribute__((swift_name("cta")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="headline")
*/
@property (readonly) NSString * _Nullable headline __attribute__((swift_name("headline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EthicalAdResponse.CopyCompanion")))
@interface ComposeAppEthicalAdResponseCopyCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppEthicalAdResponseCopyCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EthicalAdsProvider")))
@interface ComposeAppEthicalAdsProvider : ComposeAppBase <ComposeAppAdProvider>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchImageAdRequest:(ComposeAppAdRequest *)request completionHandler:(void (^)(ComposeAppAdResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchImageAd(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchNativeAdRequest:(ComposeAppAdRequest *)request completionHandler:(void (^)(ComposeAppAdResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchNativeAd(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)triggerTrackingUrl:(NSString *)url completionHandler:(void (^)(ComposeAppBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("triggerTracking(url:completionHandler:)")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) ComposeAppKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@end

__attribute__((swift_name("AdController")))
@protocol ComposeAppAdController
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBannerAdConfig:(ComposeAppAdViewConfig *)config rotation:(int32_t)rotation completionHandler:(void (^)(ComposeAppBannerAdUiModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getBannerAd(config:rotation:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFullScreenAdConfig:(ComposeAppAdViewConfig *)config completionHandler:(void (^)(ComposeAppFullScreenImageAdUiModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFullScreenAd(config:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdControllerImpl")))
@interface ComposeAppAdControllerImpl : ComposeAppBase <ComposeAppAdController>
- (instancetype)initWithProviderRegistry:(ComposeAppProviderRegistry *)providerRegistry __attribute__((swift_name("init(providerRegistry:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBannerAdConfig:(ComposeAppAdViewConfig *)config rotation:(int32_t)rotation completionHandler:(void (^)(ComposeAppBannerAdUiModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getBannerAd(config:rotation:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFullScreenAdConfig:(ComposeAppAdViewConfig *)config completionHandler:(void (^)(ComposeAppFullScreenImageAdUiModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFullScreenAd(config:completionHandler:)")));
@property (readonly) id<ComposeAppRuntimeState> bannerAdUiModelState __attribute__((swift_name("bannerAdUiModelState")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface ComposeAppKotlinThrowable : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (ComposeAppKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface ComposeAppKotlinException : ComposeAppKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdFetchException")))
@interface ComposeAppAdFetchException : ComposeAppKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdConfig")))
@interface ComposeAppAdConfig : ComposeAppBase
- (instancetype)initWithPublisherId:(NSString *)publisherId campaignTypes:(NSString *)campaignTypes format:(NSString *)format __attribute__((swift_name("init(publisherId:campaignTypes:format:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppAdConfig *)doCopyPublisherId:(NSString *)publisherId campaignTypes:(NSString *)campaignTypes format:(NSString *)format __attribute__((swift_name("doCopy(publisherId:campaignTypes:format:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *campaignTypes __attribute__((swift_name("campaignTypes")));
@property (readonly) NSString *format __attribute__((swift_name("format")));
@property (readonly) NSString *publisherId __attribute__((swift_name("publisherId")));
@end

__attribute__((swift_name("AdPlacementId")))
@interface ComposeAppAdPlacementId : ComposeAppBase
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdPlacementId.Epom")))
@interface ComposeAppAdPlacementIdEpom : ComposeAppAdPlacementId
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppAdPlacementIdEpom *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdPlacementId.Ethical")))
@interface ComposeAppAdPlacementIdEthical : ComposeAppAdPlacementId
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppAdPlacementIdEthical *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdRequest")))
@interface ComposeAppAdRequest : ComposeAppBase
- (instancetype)initWithPublisherId:(NSString *)publisherId adType:(NSString *)adType campaignTypes:(NSString *)campaignTypes format:(NSString *)format adSize:(ComposeAppAdSize *)adSize divId:(NSString *)divId rotation:(int32_t)rotation additionalParams:(NSDictionary<NSString *, NSString *> *)additionalParams providerType:(ComposeAppProviderRegistryProviderType * _Nullable)providerType __attribute__((swift_name("init(publisherId:adType:campaignTypes:format:adSize:divId:rotation:additionalParams:providerType:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppAdRequest *)doCopyPublisherId:(NSString *)publisherId adType:(NSString *)adType campaignTypes:(NSString *)campaignTypes format:(NSString *)format adSize:(ComposeAppAdSize *)adSize divId:(NSString *)divId rotation:(int32_t)rotation additionalParams:(NSDictionary<NSString *, NSString *> *)additionalParams providerType:(ComposeAppProviderRegistryProviderType * _Nullable)providerType __attribute__((swift_name("doCopy(publisherId:adType:campaignTypes:format:adSize:divId:rotation:additionalParams:providerType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppAdSize *adSize __attribute__((swift_name("adSize")));
@property (readonly) NSString *adType __attribute__((swift_name("adType")));
@property (readonly) NSDictionary<NSString *, NSString *> *additionalParams __attribute__((swift_name("additionalParams")));
@property (readonly) NSString *campaignTypes __attribute__((swift_name("campaignTypes")));
@property (readonly) NSString *divId __attribute__((swift_name("divId")));
@property (readonly) NSString *format __attribute__((swift_name("format")));
@property (readonly) ComposeAppProviderRegistryProviderType * _Nullable providerType __attribute__((swift_name("providerType")));
@property (readonly) NSString *publisherId __attribute__((swift_name("publisherId")));
@property (readonly) int32_t rotation __attribute__((swift_name("rotation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdResponse")))
@interface ComposeAppAdResponse : ComposeAppBase
- (instancetype)initWithId:(NSString *)id title:(NSString *)title subtitle:(NSString *)subtitle description:(NSString *)description imageUrl:(NSString *)imageUrl videoUrl:(NSString *)videoUrl clickUrl:(NSString *)clickUrl ctaText:(NSString *)ctaText impressionUrl:(NSString * _Nullable)impressionUrl advertiser:(NSString *)advertiser logoUrl:(NSString *)logoUrl displayType:(NSString *)displayType campaignType:(NSString *)campaignType providerType:(NSString *)providerType rawResponse:(NSString *)rawResponse trackingBeacons:(NSArray<ComposeAppTrackingBeacon *> *)trackingBeacons customFields:(NSDictionary<NSString *, NSString *> *)customFields html:(NSString * _Nullable)html viewTimeUrl:(NSString * _Nullable)viewTimeUrl nonce:(NSString * _Nullable)nonce refreshInterval:(NSString * _Nullable)refreshInterval __attribute__((swift_name("init(id:title:subtitle:description:imageUrl:videoUrl:clickUrl:ctaText:impressionUrl:advertiser:logoUrl:displayType:campaignType:providerType:rawResponse:trackingBeacons:customFields:html:viewTimeUrl:nonce:refreshInterval:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppAdResponse *)doCopyId:(NSString *)id title:(NSString *)title subtitle:(NSString *)subtitle description:(NSString *)description imageUrl:(NSString *)imageUrl videoUrl:(NSString *)videoUrl clickUrl:(NSString *)clickUrl ctaText:(NSString *)ctaText impressionUrl:(NSString * _Nullable)impressionUrl advertiser:(NSString *)advertiser logoUrl:(NSString *)logoUrl displayType:(NSString *)displayType campaignType:(NSString *)campaignType providerType:(NSString *)providerType rawResponse:(NSString *)rawResponse trackingBeacons:(NSArray<ComposeAppTrackingBeacon *> *)trackingBeacons customFields:(NSDictionary<NSString *, NSString *> *)customFields html:(NSString * _Nullable)html viewTimeUrl:(NSString * _Nullable)viewTimeUrl nonce:(NSString * _Nullable)nonce refreshInterval:(NSString * _Nullable)refreshInterval __attribute__((swift_name("doCopy(id:title:subtitle:description:imageUrl:videoUrl:clickUrl:ctaText:impressionUrl:advertiser:logoUrl:displayType:campaignType:providerType:rawResponse:trackingBeacons:customFields:html:viewTimeUrl:nonce:refreshInterval:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *advertiser __attribute__((swift_name("advertiser")));
@property (readonly) NSString *campaignType __attribute__((swift_name("campaignType")));
@property (readonly) NSString *clickUrl __attribute__((swift_name("clickUrl")));
@property (readonly) NSString *ctaText __attribute__((swift_name("ctaText")));
@property (readonly) NSDictionary<NSString *, NSString *> *customFields __attribute__((swift_name("customFields")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *displayType __attribute__((swift_name("displayType")));
@property (readonly) NSString * _Nullable html __attribute__((swift_name("html")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString * _Nullable impressionUrl __attribute__((swift_name("impressionUrl")));
@property (readonly) NSString *logoUrl __attribute__((swift_name("logoUrl")));
@property (readonly) NSString * _Nullable nonce __attribute__((swift_name("nonce")));
@property (readonly) NSString *providerType __attribute__((swift_name("providerType")));
@property (readonly) NSString *rawResponse __attribute__((swift_name("rawResponse")));
@property (readonly) NSString * _Nullable refreshInterval __attribute__((swift_name("refreshInterval")));
@property (readonly) NSString *subtitle __attribute__((swift_name("subtitle")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSArray<ComposeAppTrackingBeacon *> *trackingBeacons __attribute__((swift_name("trackingBeacons")));
@property (readonly) NSString *videoUrl __attribute__((swift_name("videoUrl")));
@property (readonly) NSString * _Nullable viewTimeUrl __attribute__((swift_name("viewTimeUrl")));
@end

__attribute__((swift_name("AdResult")))
@interface ComposeAppAdResult : ComposeAppBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdResult.Error")))
@interface ComposeAppAdResultError : ComposeAppAdResult
- (instancetype)initWithType:(ComposeAppErrorType *)type code:(ComposeAppInt * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("init(type:code:message:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppAdResultError *)doCopyType:(ComposeAppErrorType *)type code:(ComposeAppInt * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(type:code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppInt * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) ComposeAppErrorType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdResult.Success")))
@interface ComposeAppAdResultSuccess : ComposeAppAdResult
- (instancetype)initWithResponse:(ComposeAppAdResponse *)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppAdResultSuccess *)doCopyResponse:(ComposeAppAdResponse *)response __attribute__((swift_name("doCopy(response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppAdResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdSize")))
@interface ComposeAppAdSize : ComposeAppBase
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppAdSizeCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppAdSize *)doCopyWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("doCopy(width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdSize.Companion")))
@interface ComposeAppAdSizeCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppAdSizeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppAdSize *BANNER_MEDIUM __attribute__((swift_name("BANNER_MEDIUM")));
@property (readonly) ComposeAppAdSize *BANNER_SMALL __attribute__((swift_name("BANNER_SMALL")));
@property (readonly) ComposeAppAdSize *RECTANGLE_LARGE __attribute__((swift_name("RECTANGLE_LARGE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdType")))
@interface ComposeAppAdType : ComposeAppKotlinEnum<ComposeAppAdType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppAdType *banner640x200 __attribute__((swift_name("banner640x200")));
@property (class, readonly) ComposeAppAdType *banner600x94 __attribute__((swift_name("banner600x94")));
@property (class, readonly) ComposeAppAdType *banner300x250 __attribute__((swift_name("banner300x250")));
@property (class, readonly) ComposeAppAdType *videoShortsAd __attribute__((swift_name("videoShortsAd")));
+ (ComposeAppKotlinArray<ComposeAppAdType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppAdType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *adTypeName __attribute__((swift_name("adTypeName")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) NSString *ratio __attribute__((swift_name("ratio")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdViewConfig")))
@interface ComposeAppAdViewConfig : ComposeAppBase
- (instancetype)initWithAdType:(ComposeAppAdType *)adType placementId:(ComposeAppAdPlacementId *)placementId screenName:(NSString *)screenName refreshRateInMillis:(int64_t)refreshRateInMillis __attribute__((swift_name("init(adType:placementId:screenName:refreshRateInMillis:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppAdViewConfig *)doCopyAdType:(ComposeAppAdType *)adType placementId:(ComposeAppAdPlacementId *)placementId screenName:(NSString *)screenName refreshRateInMillis:(int64_t)refreshRateInMillis __attribute__((swift_name("doCopy(adType:placementId:screenName:refreshRateInMillis:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppAdType *adType __attribute__((swift_name("adType")));
@property (readonly) ComposeAppAdPlacementId *placementId __attribute__((swift_name("placementId")));
@property (readonly) int64_t refreshRateInMillis __attribute__((swift_name("refreshRateInMillis")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorType")))
@interface ComposeAppErrorType : ComposeAppKotlinEnum<ComposeAppErrorType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppErrorType *networkError __attribute__((swift_name("networkError")));
@property (class, readonly) ComposeAppErrorType *timeoutError __attribute__((swift_name("timeoutError")));
@property (class, readonly) ComposeAppErrorType *noFill __attribute__((swift_name("noFill")));
@property (class, readonly) ComposeAppErrorType *invalidRequest __attribute__((swift_name("invalidRequest")));
@property (class, readonly) ComposeAppErrorType *unknownError __attribute__((swift_name("unknownError")));
+ (ComposeAppKotlinArray<ComposeAppErrorType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppErrorType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackingBeacon")))
@interface ComposeAppTrackingBeacon : ComposeAppBase
- (instancetype)initWithType:(NSString *)type url:(NSString *)url __attribute__((swift_name("init(type:url:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppTrackingBeacon *)doCopyType:(NSString *)type url:(NSString *)url __attribute__((swift_name("doCopy(type:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ui_graphicsPainter")))
@interface ComposeAppUi_graphicsPainter : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)applyAlphaAlpha:(float)alpha __attribute__((swift_name("applyAlpha(alpha:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)applyColorFilterColorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter __attribute__((swift_name("applyColorFilter(colorFilter:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)applyLayoutDirectionLayoutDirection:(ComposeAppUi_unitLayoutDirection *)layoutDirection __attribute__((swift_name("applyLayoutDirection(layoutDirection:)")));
- (void)draw:(id<ComposeAppUi_graphicsDrawScope>)receiver size:(int64_t)size alpha:(float)alpha colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter __attribute__((swift_name("draw(_:size:alpha:colorFilter:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDraw:(id<ComposeAppUi_graphicsDrawScope>)receiver __attribute__((swift_name("onDraw(_:)")));
@property (readonly) int64_t intrinsicSize __attribute__((swift_name("intrinsicSize")));
@end

@interface ComposeAppUi_graphicsPainter (Extensions)
- (id<ComposeAppUi_graphicsImageBitmap>)toImageBitmapSize:(int64_t)size density:(id<ComposeAppUi_unitDensity>)density layoutDirection:(ComposeAppUi_unitLayoutDirection *)layoutDirection __attribute__((swift_name("toImageBitmap(size:density:layoutDirection:)")));
@end

@interface ComposeAppKahfAdSdkKahfAdSdkCompanion (Extensions)
- (void)initializeConfig:(ComposeAppAdConfig *)config __attribute__((swift_name("initialize(config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdViewControllerKt")))
@interface ComposeAppAdViewControllerKt : ComposeAppBase
+ (UIViewController *)AdViewControllerAdViewConfig:(ComposeAppAdViewConfig *)adViewConfig impressionListener:(ComposeAppAdImpressionListener * _Nullable)impressionListener __attribute__((swift_name("AdViewController(adViewConfig:impressionListener:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainViewControllerKt")))
@interface ComposeAppMainViewControllerKt : ComposeAppBase
+ (UIViewController *)MainViewController __attribute__((swift_name("MainViewController()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface ComposeAppPlatform_iosKt : ComposeAppBase
+ (id<ComposeAppPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface ComposeAppKotlinEnumCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface ComposeAppKotlinArray<T> : ComposeAppBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(ComposeAppInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<ComposeAppKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface ComposeAppKotlinRuntimeException : ComposeAppKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface ComposeAppKotlinIllegalStateException : ComposeAppKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface ComposeAppKotlinCancellationException : ComposeAppKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol ComposeAppKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<ComposeAppKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol ComposeAppKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol ComposeAppKtor_ioCloseable <ComposeAppKotlinAutoCloseable>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface ComposeAppKtor_client_coreHttpClient : ComposeAppBase <ComposeAppKotlinx_coroutines_coreCoroutineScope, ComposeAppKtor_ioCloseable>
- (instancetype)initWithEngine:(id<ComposeAppKtor_client_coreHttpClientEngine>)engine userConfig:(ComposeAppKtor_client_coreHttpClientConfig<ComposeAppKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (ComposeAppKtor_client_coreHttpClient *)configBlock:(void (^)(ComposeAppKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<ComposeAppKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ComposeAppKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<ComposeAppKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<ComposeAppKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) ComposeAppKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) ComposeAppKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) ComposeAppKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) ComposeAppKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) ComposeAppKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) ComposeAppKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol ComposeAppKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<ComposeAppKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<ComposeAppKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol ComposeAppKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<ComposeAppKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<ComposeAppKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol ComposeAppKotlinx_serialization_coreKSerializer <ComposeAppKotlinx_serialization_coreSerializationStrategy, ComposeAppKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((swift_name("RuntimeState")))
@protocol ComposeAppRuntimeState
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("Ui_graphicsColorFilter")))
@interface ComposeAppUi_graphicsColorFilter : ComposeAppBase
@property (class, readonly, getter=companion) ComposeAppUi_graphicsColorFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_unitLayoutDirection")))
@interface ComposeAppUi_unitLayoutDirection : ComposeAppKotlinEnum<ComposeAppUi_unitLayoutDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppUi_unitLayoutDirection *ltr __attribute__((swift_name("ltr")));
@property (class, readonly) ComposeAppUi_unitLayoutDirection *rtl __attribute__((swift_name("rtl")));
+ (ComposeAppKotlinArray<ComposeAppUi_unitLayoutDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppUi_unitLayoutDirection *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
__attribute__((swift_name("Ui_unitFontScalingLinear")))
@protocol ComposeAppUi_unitFontScalingLinear
@required

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (float)toDp__:(int64_t)receiver __attribute__((swift_name("toDp(___:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (int64_t)toSp__:(float)receiver __attribute__((swift_name("toSp(___:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float fontScale __attribute__((swift_name("fontScale")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("Ui_unitDensity")))
@protocol ComposeAppUi_unitDensity <ComposeAppUi_unitFontScalingLinear>
@required

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (int32_t)roundToPx:(float)receiver __attribute__((swift_name("roundToPx(_:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (int32_t)roundToPx_:(int64_t)receiver __attribute__((swift_name("roundToPx(__:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (float)toDp:(float)receiver __attribute__((swift_name("toDp(_:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (float)toDp_:(int32_t)receiver __attribute__((swift_name("toDp(__:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (int64_t)toDpSize:(int64_t)receiver __attribute__((swift_name("toDpSize(_:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (float)toPx:(float)receiver __attribute__((swift_name("toPx(_:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (float)toPx_:(int64_t)receiver __attribute__((swift_name("toPx(__:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_geometryRect *)toRect:(ComposeAppUi_unitDpRect *)receiver __attribute__((swift_name("toRect(_:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (int64_t)toSize:(int64_t)receiver __attribute__((swift_name("toSize(_:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (int64_t)toSp:(float)receiver __attribute__((swift_name("toSp(_:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (int64_t)toSp_:(int32_t)receiver __attribute__((swift_name("toSp(__:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float density __attribute__((swift_name("density")));
@end

__attribute__((swift_name("Ui_graphicsDrawScope")))
@protocol ComposeAppUi_graphicsDrawScope <ComposeAppUi_unitDensity>
@required

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawArcBrush:(ComposeAppUi_graphicsBrush *)brush startAngle:(float)startAngle sweepAngle:(float)sweepAngle useCenter:(BOOL)useCenter topLeft:(int64_t)topLeft size:(int64_t)size alpha:(float)alpha style:(ComposeAppUi_graphicsDrawStyle *)style colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawArc(brush:startAngle:sweepAngle:useCenter:topLeft:size:alpha:style:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawArcColor:(uint64_t)color startAngle:(float)startAngle sweepAngle:(float)sweepAngle useCenter:(BOOL)useCenter topLeft:(int64_t)topLeft size:(int64_t)size alpha:(float)alpha style:(ComposeAppUi_graphicsDrawStyle *)style colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawArc(color:startAngle:sweepAngle:useCenter:topLeft:size:alpha:style:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawCircleBrush:(ComposeAppUi_graphicsBrush *)brush radius:(float)radius center:(int64_t)center alpha:(float)alpha style:(ComposeAppUi_graphicsDrawStyle *)style colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawCircle(brush:radius:center:alpha:style:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawCircleColor:(uint64_t)color radius:(float)radius center:(int64_t)center alpha:(float)alpha style:(ComposeAppUi_graphicsDrawStyle *)style colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawCircle(color:radius:center:alpha:style:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawImageImage:(id<ComposeAppUi_graphicsImageBitmap>)image topLeft:(int64_t)topLeft alpha:(float)alpha style:(ComposeAppUi_graphicsDrawStyle *)style colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawImage(image:topLeft:alpha:style:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawImageImage:(id<ComposeAppUi_graphicsImageBitmap>)image srcOffset:(int64_t)srcOffset srcSize:(int64_t)srcSize dstOffset:(int64_t)dstOffset dstSize:(int64_t)dstSize alpha:(float)alpha style:(ComposeAppUi_graphicsDrawStyle *)style colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode filterQuality:(int32_t)filterQuality __attribute__((swift_name("drawImage(image:srcOffset:srcSize:dstOffset:dstSize:alpha:style:colorFilter:blendMode:filterQuality:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawLineBrush:(ComposeAppUi_graphicsBrush *)brush start:(int64_t)start end:(int64_t)end strokeWidth:(float)strokeWidth cap:(int32_t)cap pathEffect:(id<ComposeAppUi_graphicsPathEffect> _Nullable)pathEffect alpha:(float)alpha colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawLine(brush:start:end:strokeWidth:cap:pathEffect:alpha:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawLineColor:(uint64_t)color start:(int64_t)start end:(int64_t)end strokeWidth:(float)strokeWidth cap:(int32_t)cap pathEffect:(id<ComposeAppUi_graphicsPathEffect> _Nullable)pathEffect alpha:(float)alpha colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawLine(color:start:end:strokeWidth:cap:pathEffect:alpha:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawOvalBrush:(ComposeAppUi_graphicsBrush *)brush topLeft:(int64_t)topLeft size:(int64_t)size alpha:(float)alpha style:(ComposeAppUi_graphicsDrawStyle *)style colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawOval(brush:topLeft:size:alpha:style:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawOvalColor:(uint64_t)color topLeft:(int64_t)topLeft size:(int64_t)size alpha:(float)alpha style:(ComposeAppUi_graphicsDrawStyle *)style colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawOval(color:topLeft:size:alpha:style:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawPathPath:(id<ComposeAppUi_graphicsPath>)path brush:(ComposeAppUi_graphicsBrush *)brush alpha:(float)alpha style:(ComposeAppUi_graphicsDrawStyle *)style colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawPath(path:brush:alpha:style:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawPathPath:(id<ComposeAppUi_graphicsPath>)path color:(uint64_t)color alpha:(float)alpha style:(ComposeAppUi_graphicsDrawStyle *)style colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawPath(path:color:alpha:style:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawPointsPoints:(NSArray<id> *)points pointMode:(int32_t)pointMode brush:(ComposeAppUi_graphicsBrush *)brush strokeWidth:(float)strokeWidth cap:(int32_t)cap pathEffect:(id<ComposeAppUi_graphicsPathEffect> _Nullable)pathEffect alpha:(float)alpha colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawPoints(points:pointMode:brush:strokeWidth:cap:pathEffect:alpha:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawPointsPoints:(NSArray<id> *)points pointMode:(int32_t)pointMode color:(uint64_t)color strokeWidth:(float)strokeWidth cap:(int32_t)cap pathEffect:(id<ComposeAppUi_graphicsPathEffect> _Nullable)pathEffect alpha:(float)alpha colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawPoints(points:pointMode:color:strokeWidth:cap:pathEffect:alpha:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawRectBrush:(ComposeAppUi_graphicsBrush *)brush topLeft:(int64_t)topLeft size:(int64_t)size alpha:(float)alpha style:(ComposeAppUi_graphicsDrawStyle *)style colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawRect(brush:topLeft:size:alpha:style:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawRectColor:(uint64_t)color topLeft:(int64_t)topLeft size:(int64_t)size alpha:(float)alpha style:(ComposeAppUi_graphicsDrawStyle *)style colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawRect(color:topLeft:size:alpha:style:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawRoundRectBrush:(ComposeAppUi_graphicsBrush *)brush topLeft:(int64_t)topLeft size:(int64_t)size cornerRadius:(int64_t)cornerRadius alpha:(float)alpha style:(ComposeAppUi_graphicsDrawStyle *)style colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawRoundRect(brush:topLeft:size:cornerRadius:alpha:style:colorFilter:blendMode:)")));

/**
 * @param alpha annotations androidx.annotation.FloatRange(from=0.0.toDouble(), to=1.0.toDouble())
*/
- (void)drawRoundRectColor:(uint64_t)color topLeft:(int64_t)topLeft size:(int64_t)size cornerRadius:(int64_t)cornerRadius style:(ComposeAppUi_graphicsDrawStyle *)style alpha:(float)alpha colorFilter:(ComposeAppUi_graphicsColorFilter * _Nullable)colorFilter blendMode:(int32_t)blendMode __attribute__((swift_name("drawRoundRect(color:topLeft:size:cornerRadius:style:alpha:colorFilter:blendMode:)")));
- (void)record:(ComposeAppUi_graphicsGraphicsLayer *)receiver size:(int64_t)size block:(void (^)(id<ComposeAppUi_graphicsDrawScope>))block __attribute__((swift_name("record(_:size:block:)")));
@property (readonly) int64_t center __attribute__((swift_name("center")));
@property (readonly) id<ComposeAppUi_graphicsDrawContext> drawContext __attribute__((swift_name("drawContext")));
@property (readonly) ComposeAppUi_unitLayoutDirection *layoutDirection __attribute__((swift_name("layoutDirection")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ui_graphicsImageBitmap")))
@protocol ComposeAppUi_graphicsImageBitmap
@required
- (void)prepareToDraw __attribute__((swift_name("prepareToDraw()")));
- (void)readPixelsBuffer:(ComposeAppKotlinIntArray *)buffer startX:(int32_t)startX startY:(int32_t)startY width:(int32_t)width height:(int32_t)height bufferOffset:(int32_t)bufferOffset stride:(int32_t)stride __attribute__((swift_name("readPixels(buffer:startX:startY:width:height:bufferOffset:stride:)")));
@property (readonly) ComposeAppUi_graphicsColorSpace *colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) int32_t config __attribute__((swift_name("config")));
@property (readonly) BOOL hasAlpha __attribute__((swift_name("hasAlpha")));
@property (readonly) int32_t height_ __attribute__((swift_name("height_")));
@property (readonly) int32_t width_ __attribute__((swift_name("width_")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol ComposeAppKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol ComposeAppKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<ComposeAppKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<ComposeAppKotlinCoroutineContextElement> _Nullable)getKey:(id<ComposeAppKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<ComposeAppKotlinCoroutineContext>)minusKeyKey:(id<ComposeAppKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<ComposeAppKotlinCoroutineContext>)plusContext:(id<ComposeAppKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol ComposeAppKtor_client_coreHttpClientEngine <ComposeAppKotlinx_coroutines_coreCoroutineScope, ComposeAppKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(ComposeAppKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(ComposeAppKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(ComposeAppKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) ComposeAppKtor_client_coreHttpClientEngineConfig *config_ __attribute__((swift_name("config_")));
@property (readonly) ComposeAppKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<ComposeAppKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface ComposeAppKtor_client_coreHttpClientEngineConfig : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property ComposeAppKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property ComposeAppKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface ComposeAppKtor_client_coreHttpClientConfig<T> : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ComposeAppKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(ComposeAppKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<ComposeAppKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(ComposeAppKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(ComposeAppKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol ComposeAppKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol ComposeAppKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(ComposeAppKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(ComposeAppKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(ComposeAppKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(ComposeAppKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(ComposeAppKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(ComposeAppKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(ComposeAppKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(ComposeAppKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<ComposeAppKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface ComposeAppKtor_eventsEvents : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(ComposeAppKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<ComposeAppKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(ComposeAppKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(ComposeAppKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface ComposeAppKtor_utilsPipeline<TSubject, TContext> : ComposeAppBase
- (instancetype)initWithPhases:(ComposeAppKotlinArray<ComposeAppKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(ComposeAppKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<ComposeAppKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(ComposeAppKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(ComposeAppKtor_utilsPipelinePhase *)reference phase:(ComposeAppKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(ComposeAppKtor_utilsPipelinePhase *)reference phase:(ComposeAppKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(ComposeAppKtor_utilsPipelinePhase *)phase block:(id<ComposeAppKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<ComposeAppKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(ComposeAppKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(ComposeAppKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(ComposeAppKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(ComposeAppKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ComposeAppKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<ComposeAppKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface ComposeAppKtor_client_coreHttpReceivePipeline : ComposeAppKtor_utilsPipeline<ComposeAppKtor_client_coreHttpResponse *, ComposeAppKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(ComposeAppKotlinArray<ComposeAppKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(ComposeAppKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<ComposeAppKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface ComposeAppKtor_client_coreHttpRequestPipeline : ComposeAppKtor_utilsPipeline<id, ComposeAppKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(ComposeAppKotlinArray<ComposeAppKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(ComposeAppKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<ComposeAppKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface ComposeAppKtor_client_coreHttpResponsePipeline : ComposeAppKtor_utilsPipeline<ComposeAppKtor_client_coreHttpResponseContainer *, ComposeAppKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(ComposeAppKotlinArray<ComposeAppKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(ComposeAppKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<ComposeAppKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface ComposeAppKtor_client_coreHttpSendPipeline : ComposeAppKtor_utilsPipeline<id, ComposeAppKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(ComposeAppKotlinArray<ComposeAppKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(ComposeAppKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<ComposeAppKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol ComposeAppKotlinx_serialization_coreEncoder
@required
- (id<ComposeAppKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<ComposeAppKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<ComposeAppKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) ComposeAppKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol ComposeAppKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<ComposeAppKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<ComposeAppKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) ComposeAppKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol ComposeAppKotlinx_serialization_coreDecoder
@required
- (id<ComposeAppKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<ComposeAppKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (ComposeAppKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) ComposeAppKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsColorFilter.Companion")))
@interface ComposeAppUi_graphicsColorFilterCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppUi_graphicsColorFilterCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_graphicsColorFilter *)colorMatrixColorMatrix:(id)colorMatrix __attribute__((swift_name("colorMatrix(colorMatrix:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_graphicsColorFilter *)lightingMultiply:(uint64_t)multiply add:(uint64_t)add __attribute__((swift_name("lighting(multiply:add:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_graphicsColorFilter *)tintColor:(uint64_t)color blendMode:(int32_t)blendMode __attribute__((swift_name("tint(color:blendMode:)")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("Ui_graphicsBrush")))
@interface ComposeAppUi_graphicsBrush : ComposeAppBase
@property (class, readonly, getter=companion) ComposeAppUi_graphicsBrushCompanion *companion __attribute__((swift_name("companion")));
- (void)applyToSize:(int64_t)size p:(id<ComposeAppUi_graphicsPaint>)p alpha:(float)alpha __attribute__((swift_name("applyTo(size:p:alpha:)")));
@property (readonly) int64_t intrinsicSize __attribute__((swift_name("intrinsicSize")));
@end

__attribute__((swift_name("Ui_graphicsDrawStyle")))
@interface ComposeAppUi_graphicsDrawStyle : ComposeAppBase
@end

__attribute__((swift_name("Ui_graphicsPathEffect")))
@protocol ComposeAppUi_graphicsPathEffect
@required
@end

__attribute__((swift_name("Ui_graphicsPath")))
@protocol ComposeAppUi_graphicsPath
@required
- (void)addArcOval:(ComposeAppUi_geometryRect *)oval startAngleDegrees:(float)startAngleDegrees sweepAngleDegrees:(float)sweepAngleDegrees __attribute__((swift_name("addArc(oval:startAngleDegrees:sweepAngleDegrees:)")));
- (void)addArcRadOval:(ComposeAppUi_geometryRect *)oval startAngleRadians:(float)startAngleRadians sweepAngleRadians:(float)sweepAngleRadians __attribute__((swift_name("addArcRad(oval:startAngleRadians:sweepAngleRadians:)")));
- (void)addOvalOval:(ComposeAppUi_geometryRect *)oval direction:(ComposeAppUi_graphicsPathDirection *)direction __attribute__((swift_name("addOval(oval:direction:)")));
- (void)addPathPath:(id<ComposeAppUi_graphicsPath>)path offset:(int64_t)offset __attribute__((swift_name("addPath(path:offset:)")));
- (void)addRectRect:(ComposeAppUi_geometryRect *)rect direction:(ComposeAppUi_graphicsPathDirection *)direction __attribute__((swift_name("addRect(rect:direction:)")));
- (void)addRoundRectRoundRect:(ComposeAppUi_geometryRoundRect *)roundRect direction:(ComposeAppUi_graphicsPathDirection *)direction __attribute__((swift_name("addRoundRect(roundRect:direction:)")));
- (id<ComposeAppUi_graphicsPath>)andPath:(id<ComposeAppUi_graphicsPath>)path __attribute__((swift_name("and(path:)")));
- (void)arcToRect:(ComposeAppUi_geometryRect *)rect startAngleDegrees:(float)startAngleDegrees sweepAngleDegrees:(float)sweepAngleDegrees forceMoveTo:(BOOL)forceMoveTo __attribute__((swift_name("arcTo(rect:startAngleDegrees:sweepAngleDegrees:forceMoveTo:)")));
- (void)arcToRadRect:(ComposeAppUi_geometryRect *)rect startAngleRadians:(float)startAngleRadians sweepAngleRadians:(float)sweepAngleRadians forceMoveTo:(BOOL)forceMoveTo __attribute__((swift_name("arcToRad(rect:startAngleRadians:sweepAngleRadians:forceMoveTo:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)cubicToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 x3:(float)x3 y3:(float)y3 __attribute__((swift_name("cubicTo(x1:y1:x2:y2:x3:y3:)")));
- (ComposeAppUi_geometryRect *)getBounds __attribute__((swift_name("getBounds()")));
- (id<ComposeAppUi_graphicsPathIterator>)iterator __attribute__((swift_name("iterator()")));
- (id<ComposeAppUi_graphicsPathIterator>)iteratorConicEvaluation:(ComposeAppUi_graphicsPathIteratorConicEvaluation *)conicEvaluation tolerance:(float)tolerance __attribute__((swift_name("iterator(conicEvaluation:tolerance:)")));
- (void)lineToX:(float)x y:(float)y __attribute__((swift_name("lineTo(x:y:)")));
- (id<ComposeAppUi_graphicsPath>)minusPath:(id<ComposeAppUi_graphicsPath>)path __attribute__((swift_name("minus(path:)")));
- (void)moveToX:(float)x y:(float)y __attribute__((swift_name("moveTo(x:y:)")));
- (BOOL)opPath1:(id<ComposeAppUi_graphicsPath>)path1 path2:(id<ComposeAppUi_graphicsPath>)path2 operation:(int32_t)operation __attribute__((swift_name("op(path1:path2:operation:)")));
- (id<ComposeAppUi_graphicsPath>)orPath:(id<ComposeAppUi_graphicsPath>)path __attribute__((swift_name("or(path:)")));
- (id<ComposeAppUi_graphicsPath>)plusPath:(id<ComposeAppUi_graphicsPath>)path __attribute__((swift_name("plus(path:)")));
- (void)quadraticBezierToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 __attribute__((swift_name("quadraticBezierTo(x1:y1:x2:y2:)"))) __attribute__((deprecated("Use quadraticTo() for consistency with cubicTo()")));
- (void)quadraticToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 __attribute__((swift_name("quadraticTo(x1:y1:x2:y2:)")));
- (void)relativeCubicToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 dx3:(float)dx3 dy3:(float)dy3 __attribute__((swift_name("relativeCubicTo(dx1:dy1:dx2:dy2:dx3:dy3:)")));
- (void)relativeLineToDx:(float)dx dy:(float)dy __attribute__((swift_name("relativeLineTo(dx:dy:)")));
- (void)relativeMoveToDx:(float)dx dy:(float)dy __attribute__((swift_name("relativeMoveTo(dx:dy:)")));
- (void)relativeQuadraticBezierToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 __attribute__((swift_name("relativeQuadraticBezierTo(dx1:dy1:dx2:dy2:)"))) __attribute__((deprecated("Use relativeQuadraticTo() for consistency with relativeCubicTo()")));
- (void)relativeQuadraticToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 __attribute__((swift_name("relativeQuadraticTo(dx1:dy1:dx2:dy2:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)rewind __attribute__((swift_name("rewind()")));
- (void)transformMatrix:(id)matrix __attribute__((swift_name("transform(matrix:)")));
- (void)translateOffset:(int64_t)offset __attribute__((swift_name("translate(offset:)")));
- (id<ComposeAppUi_graphicsPath>)xorPath:(id<ComposeAppUi_graphicsPath>)path __attribute__((swift_name("xor(path:)")));
@property int32_t fillType __attribute__((swift_name("fillType")));
@property (readonly) BOOL isConvex __attribute__((swift_name("isConvex")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsGraphicsLayer")))
@interface ComposeAppUi_graphicsGraphicsLayer : ComposeAppBase
- (void)recordDensity:(id<ComposeAppUi_unitDensity>)density layoutDirection:(ComposeAppUi_unitLayoutDirection *)layoutDirection size:(int64_t)size block:(void (^)(id<ComposeAppUi_graphicsDrawScope>))block __attribute__((swift_name("record(density:layoutDirection:size:block:)")));
- (void)setPathOutlinePath:(id<ComposeAppUi_graphicsPath>)path __attribute__((swift_name("setPathOutline(path:)")));
- (void)setRectOutlineTopLeft:(int64_t)topLeft size:(int64_t)size __attribute__((swift_name("setRectOutline(topLeft:size:)")));
- (void)setRoundRectOutlineTopLeft:(int64_t)topLeft size:(int64_t)size cornerRadius:(float)cornerRadius __attribute__((swift_name("setRoundRectOutline(topLeft:size:cornerRadius:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)toImageBitmapWithCompletionHandler:(void (^)(id<ComposeAppUi_graphicsImageBitmap> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toImageBitmap(completionHandler:)")));
@property float alpha __attribute__((swift_name("alpha")));
@property uint64_t ambientShadowColor __attribute__((swift_name("ambientShadowColor")));
@property int32_t blendMode __attribute__((swift_name("blendMode")));
@property float cameraDistance __attribute__((swift_name("cameraDistance")));
@property BOOL clip __attribute__((swift_name("clip")));
@property ComposeAppUi_graphicsColorFilter * _Nullable colorFilter __attribute__((swift_name("colorFilter")));
@property int32_t compositingStrategy __attribute__((swift_name("compositingStrategy")));
@property (readonly) BOOL isReleased __attribute__((swift_name("isReleased")));
@property (readonly) ComposeAppUi_graphicsOutline *outline __attribute__((swift_name("outline")));
@property int64_t pivotOffset __attribute__((swift_name("pivotOffset")));
@property ComposeAppUi_graphicsRenderEffect * _Nullable renderEffect __attribute__((swift_name("renderEffect")));
@property float rotationX __attribute__((swift_name("rotationX")));
@property float rotationY __attribute__((swift_name("rotationY")));
@property float rotationZ __attribute__((swift_name("rotationZ")));
@property float scaleX __attribute__((swift_name("scaleX")));
@property float scaleY __attribute__((swift_name("scaleY")));
@property float shadowElevation __attribute__((swift_name("shadowElevation")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property uint64_t spotShadowColor __attribute__((swift_name("spotShadowColor")));
@property int64_t topLeft __attribute__((swift_name("topLeft")));
@property float translationX __attribute__((swift_name("translationX")));
@property float translationY __attribute__((swift_name("translationY")));
@end

__attribute__((swift_name("Ui_graphicsDrawContext")))
@protocol ComposeAppUi_graphicsDrawContext
@required
@property id<ComposeAppUi_graphicsCanvas> canvas __attribute__((swift_name("canvas")));
@property (setter=setDensity:) id<ComposeAppUi_unitDensity> density_ __attribute__((swift_name("density_")));
@property ComposeAppUi_graphicsGraphicsLayer * _Nullable graphicsLayer __attribute__((swift_name("graphicsLayer")));
@property ComposeAppUi_unitLayoutDirection *layoutDirection __attribute__((swift_name("layoutDirection")));
@property int64_t size __attribute__((swift_name("size")));
@property (readonly) id<ComposeAppUi_graphicsDrawTransform> transform __attribute__((swift_name("transform")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_geometryRect")))
@interface ComposeAppUi_geometryRect : ComposeAppBase
- (instancetype)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("init(left:top:right:bottom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppUi_geometryRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsOffset:(int64_t)offset __attribute__((swift_name("contains(offset:)")));
- (ComposeAppUi_geometryRect *)doCopyLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("doCopy(left:top:right:bottom:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_geometryRect *)deflateDelta:(float)delta __attribute__((swift_name("deflate(delta:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_geometryRect *)inflateDelta:(float)delta __attribute__((swift_name("inflate(delta:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_geometryRect *)intersectOther:(ComposeAppUi_geometryRect *)other __attribute__((swift_name("intersect(other:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_geometryRect *)intersectOtherLeft:(float)otherLeft otherTop:(float)otherTop otherRight:(float)otherRight otherBottom:(float)otherBottom __attribute__((swift_name("intersect(otherLeft:otherTop:otherRight:otherBottom:)")));
- (BOOL)overlapsOther:(ComposeAppUi_geometryRect *)other __attribute__((swift_name("overlaps(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_geometryRect *)translateOffset:(int64_t)offset __attribute__((swift_name("translate(offset:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_geometryRect *)translateTranslateX:(float)translateX translateY:(float)translateY __attribute__((swift_name("translate(translateX:translateY:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float bottom __attribute__((swift_name("bottom")));
@property (readonly) int64_t bottomCenter __attribute__((swift_name("bottomCenter")));
@property (readonly) int64_t bottomLeft __attribute__((swift_name("bottomLeft")));
@property (readonly) int64_t bottomRight __attribute__((swift_name("bottomRight")));
@property (readonly) int64_t center __attribute__((swift_name("center")));
@property (readonly) int64_t centerLeft __attribute__((swift_name("centerLeft")));
@property (readonly) int64_t centerRight __attribute__((swift_name("centerRight")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) BOOL isFinite __attribute__((swift_name("isFinite")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) BOOL isInfinite __attribute__((swift_name("isInfinite")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float left __attribute__((swift_name("left")));
@property (readonly) float maxDimension __attribute__((swift_name("maxDimension")));
@property (readonly) float minDimension __attribute__((swift_name("minDimension")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float right __attribute__((swift_name("right")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) int64_t size __attribute__((swift_name("size")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) int64_t topCenter __attribute__((swift_name("topCenter")));
@property (readonly) int64_t topLeft __attribute__((swift_name("topLeft")));
@property (readonly) int64_t topRight __attribute__((swift_name("topRight")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float width __attribute__((swift_name("width")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_unitDpRect")))
@interface ComposeAppUi_unitDpRect : ComposeAppBase
- (instancetype)initWithOrigin:(int64_t)origin size:(int64_t)size __attribute__((swift_name("init(origin:size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("init(left:top:right:bottom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppUi_unitDpRectCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppUi_unitDpRect *)doCopyLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("doCopy(left:top:right:bottom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float bottom __attribute__((swift_name("bottom")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float left __attribute__((swift_name("left")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float right __attribute__((swift_name("right")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float top __attribute__((swift_name("top")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface ComposeAppKotlinIntArray : ComposeAppBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(ComposeAppInt *(^)(ComposeAppInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (ComposeAppKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ui_graphicsColorSpace")))
@interface ComposeAppUi_graphicsColorSpace : ComposeAppBase
- (instancetype)initWithName:(NSString *)name model:(int64_t)model __attribute__((swift_name("init(name:model:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   androidx.annotation.Size(min=3.toLong())
 * @param v annotations androidx.annotation.Size(min=3.toLong())
*/
- (ComposeAppKotlinFloatArray *)fromXyzV:(ComposeAppKotlinFloatArray *)v __attribute__((swift_name("fromXyz(v:)")));

/**
 * @note annotations
 *   androidx.annotation.Size(min=3.toLong())
*/
- (ComposeAppKotlinFloatArray *)fromXyzX:(float)x y:(float)y z:(float)z __attribute__((swift_name("fromXyz(x:y:z:)")));

/**
 * @param component annotations androidx.annotation.IntRange(from=0.toLong(), to=3.toLong())
*/
- (float)getMaxValueComponent:(int32_t)component __attribute__((swift_name("getMaxValue(component:)")));

/**
 * @param component annotations androidx.annotation.IntRange(from=0.toLong(), to=3.toLong())
*/
- (float)getMinValueComponent:(int32_t)component __attribute__((swift_name("getMinValue(component:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   androidx.annotation.Size(min=3.toLong())
 * @param v annotations androidx.annotation.Size(min=3.toLong())
*/
- (ComposeAppKotlinFloatArray *)toXyzV:(ComposeAppKotlinFloatArray *)v __attribute__((swift_name("toXyz(v:)")));

/**
 * @note annotations
 *   androidx.annotation.Size(value=3.toLong())
*/
- (ComposeAppKotlinFloatArray *)toXyzR:(float)r g:(float)g b:(float)b __attribute__((swift_name("toXyz(r:g:b:)")));
@property (readonly) int32_t componentCount __attribute__((swift_name("componentCount")));
@property (readonly) BOOL isSrgb __attribute__((swift_name("isSrgb")));
@property (readonly) BOOL isWideGamut __attribute__((swift_name("isWideGamut")));
@property (readonly) int64_t model __attribute__((swift_name("model")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol ComposeAppKotlinCoroutineContextElement <ComposeAppKotlinCoroutineContext>
@required
@property (readonly) id<ComposeAppKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol ComposeAppKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface ComposeAppKtor_client_coreHttpRequestData : ComposeAppBase
- (instancetype)initWithUrl:(ComposeAppKtor_httpUrl *)url method:(ComposeAppKtor_httpHttpMethod *)method headers:(id<ComposeAppKtor_httpHeaders>)headers body:(ComposeAppKtor_httpOutgoingContent *)body executionContext:(id<ComposeAppKotlinx_coroutines_coreJob>)executionContext attributes:(id<ComposeAppKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<ComposeAppKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ComposeAppKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) ComposeAppKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<ComposeAppKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<ComposeAppKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) ComposeAppKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) ComposeAppKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface ComposeAppKtor_client_coreHttpResponseData : ComposeAppBase
- (instancetype)initWithStatusCode:(ComposeAppKtor_httpHttpStatusCode *)statusCode requestTime:(ComposeAppKtor_utilsGMTDate *)requestTime headers:(id<ComposeAppKtor_httpHeaders>)headers version:(ComposeAppKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<ComposeAppKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<ComposeAppKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<ComposeAppKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) ComposeAppKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) ComposeAppKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) ComposeAppKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface ComposeAppKotlinAbstractCoroutineContextElement : ComposeAppBase <ComposeAppKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<ComposeAppKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<ComposeAppKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol ComposeAppKotlinContinuationInterceptor <ComposeAppKotlinCoroutineContextElement>
@required
- (id<ComposeAppKotlinContinuation>)interceptContinuationContinuation:(id<ComposeAppKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<ComposeAppKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface ComposeAppKotlinx_coroutines_coreCoroutineDispatcher : ComposeAppKotlinAbstractCoroutineContextElement <ComposeAppKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<ComposeAppKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<ComposeAppKotlinCoroutineContext>)context block:(id<ComposeAppKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<ComposeAppKotlinCoroutineContext>)context block:(id<ComposeAppKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<ComposeAppKotlinContinuation>)interceptContinuationContinuation:(id<ComposeAppKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<ComposeAppKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (ComposeAppKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (ComposeAppKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(ComposeAppKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<ComposeAppKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface ComposeAppKtor_client_coreProxyConfig : ComposeAppBase
- (instancetype)initWithUrl:(ComposeAppKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol ComposeAppKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(ComposeAppKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) ComposeAppKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface ComposeAppKtor_utilsAttributeKey<T> : ComposeAppBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(ComposeAppKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(ComposeAppKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface ComposeAppKtor_eventsEventDefinition<T> : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol ComposeAppKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface ComposeAppKtor_utilsPipelinePhase : ComposeAppBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol ComposeAppKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol ComposeAppKotlinSuspendFunction2 <ComposeAppKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface ComposeAppKtor_client_coreHttpReceivePipelinePhases : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol ComposeAppKtor_httpHttpMessage
@required
@property (readonly) id<ComposeAppKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface ComposeAppKtor_client_coreHttpResponse : ComposeAppBase <ComposeAppKtor_httpHttpMessage, ComposeAppKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<ComposeAppKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) ComposeAppKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) ComposeAppKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) ComposeAppKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface ComposeAppKotlinUnit : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface ComposeAppKtor_client_coreHttpRequestPipelinePhases : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol ComposeAppKtor_httpHttpMessageBuilder
@required
@property (readonly) ComposeAppKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface ComposeAppKtor_client_coreHttpRequestBuilder : ComposeAppBase <ComposeAppKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) ComposeAppKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<ComposeAppKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<ComposeAppKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<ComposeAppKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (ComposeAppKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(ComposeAppKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (ComposeAppKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(ComposeAppKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(ComposeAppKtor_httpURLBuilder *, ComposeAppKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<ComposeAppKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property ComposeAppKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<ComposeAppKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) ComposeAppKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property ComposeAppKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) ComposeAppKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface ComposeAppKtor_client_coreHttpResponsePipelinePhases : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface ComposeAppKtor_client_coreHttpResponseContainer : ComposeAppBase
- (instancetype)initWithExpectedType:(ComposeAppKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(ComposeAppKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface ComposeAppKtor_client_coreHttpClientCall : ComposeAppBase <ComposeAppKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(ComposeAppKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(ComposeAppKtor_client_coreHttpClient *)client requestData:(ComposeAppKtor_client_coreHttpRequestData *)requestData responseData:(ComposeAppKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(ComposeAppKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(ComposeAppKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<ComposeAppKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<ComposeAppKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) ComposeAppKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<ComposeAppKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<ComposeAppKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property ComposeAppKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface ComposeAppKtor_client_coreHttpSendPipelinePhases : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) ComposeAppKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol ComposeAppKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<ComposeAppKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) ComposeAppKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface ComposeAppKotlinx_serialization_coreSerializersModule : ComposeAppBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<ComposeAppKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ComposeAppKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<ComposeAppKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<ComposeAppKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ComposeAppKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ComposeAppKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ComposeAppKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ComposeAppKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol ComposeAppKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface ComposeAppKotlinx_serialization_coreSerialKind : ComposeAppBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol ComposeAppKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<ComposeAppKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) ComposeAppKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface ComposeAppKotlinNothing : ComposeAppBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsBrush.Companion")))
@interface ComposeAppUi_graphicsBrushCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppUi_graphicsBrushCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_graphicsBrush *)horizontalGradientColorStops:(ComposeAppKotlinArray<ComposeAppKotlinPair<ComposeAppFloat *, id> *> *)colorStops startX:(float)startX endX:(float)endX tileMode:(int32_t)tileMode __attribute__((swift_name("horizontalGradient(colorStops:startX:endX:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_graphicsBrush *)horizontalGradientColors:(NSArray<id> *)colors startX:(float)startX endX:(float)endX tileMode:(int32_t)tileMode __attribute__((swift_name("horizontalGradient(colors:startX:endX:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_graphicsBrush *)linearGradientColorStops:(ComposeAppKotlinArray<ComposeAppKotlinPair<ComposeAppFloat *, id> *> *)colorStops start:(int64_t)start end:(int64_t)end tileMode:(int32_t)tileMode __attribute__((swift_name("linearGradient(colorStops:start:end:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_graphicsBrush *)linearGradientColors:(NSArray<id> *)colors start:(int64_t)start end:(int64_t)end tileMode:(int32_t)tileMode __attribute__((swift_name("linearGradient(colors:start:end:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_graphicsBrush *)radialGradientColorStops:(ComposeAppKotlinArray<ComposeAppKotlinPair<ComposeAppFloat *, id> *> *)colorStops center:(int64_t)center radius:(float)radius tileMode:(int32_t)tileMode __attribute__((swift_name("radialGradient(colorStops:center:radius:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_graphicsBrush *)radialGradientColors:(NSArray<id> *)colors center:(int64_t)center radius:(float)radius tileMode:(int32_t)tileMode __attribute__((swift_name("radialGradient(colors:center:radius:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_graphicsBrush *)sweepGradientColorStops:(ComposeAppKotlinArray<ComposeAppKotlinPair<ComposeAppFloat *, id> *> *)colorStops center:(int64_t)center __attribute__((swift_name("sweepGradient(colorStops:center:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_graphicsBrush *)sweepGradientColors:(NSArray<id> *)colors center:(int64_t)center __attribute__((swift_name("sweepGradient(colors:center:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_graphicsBrush *)verticalGradientColorStops:(ComposeAppKotlinArray<ComposeAppKotlinPair<ComposeAppFloat *, id> *> *)colorStops startY:(float)startY endY:(float)endY tileMode:(int32_t)tileMode __attribute__((swift_name("verticalGradient(colorStops:startY:endY:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (ComposeAppUi_graphicsBrush *)verticalGradientColors:(NSArray<id> *)colors startY:(float)startY endY:(float)endY tileMode:(int32_t)tileMode __attribute__((swift_name("verticalGradient(colors:startY:endY:tileMode:)")));
@end

__attribute__((swift_name("Ui_graphicsPaint")))
@protocol ComposeAppUi_graphicsPaint
@required
- (ComposeAppSkikoPaint *)asFrameworkPaint __attribute__((swift_name("asFrameworkPaint()")));
@property float alpha __attribute__((swift_name("alpha")));
@property int32_t blendMode __attribute__((swift_name("blendMode")));
@property uint64_t color __attribute__((swift_name("color")));
@property ComposeAppUi_graphicsColorFilter * _Nullable colorFilter __attribute__((swift_name("colorFilter")));
@property int32_t filterQuality __attribute__((swift_name("filterQuality")));
@property BOOL isAntiAlias __attribute__((swift_name("isAntiAlias")));
@property id<ComposeAppUi_graphicsPathEffect> _Nullable pathEffect __attribute__((swift_name("pathEffect")));
@property ComposeAppSkikoShader * _Nullable shader __attribute__((swift_name("shader")));
@property int32_t strokeCap __attribute__((swift_name("strokeCap")));
@property int32_t strokeJoin __attribute__((swift_name("strokeJoin")));
@property float strokeMiterLimit __attribute__((swift_name("strokeMiterLimit")));
@property float strokeWidth __attribute__((swift_name("strokeWidth")));
@property int32_t style __attribute__((swift_name("style")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsPathDirection")))
@interface ComposeAppUi_graphicsPathDirection : ComposeAppKotlinEnum<ComposeAppUi_graphicsPathDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppUi_graphicsPathDirection *counterclockwise __attribute__((swift_name("counterclockwise")));
@property (class, readonly) ComposeAppUi_graphicsPathDirection *clockwise __attribute__((swift_name("clockwise")));
+ (ComposeAppKotlinArray<ComposeAppUi_graphicsPathDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppUi_graphicsPathDirection *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_geometryRoundRect")))
@interface ComposeAppUi_geometryRoundRect : ComposeAppBase
- (instancetype)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom topLeftCornerRadius:(int64_t)topLeftCornerRadius topRightCornerRadius:(int64_t)topRightCornerRadius bottomRightCornerRadius:(int64_t)bottomRightCornerRadius bottomLeftCornerRadius:(int64_t)bottomLeftCornerRadius __attribute__((swift_name("init(left:top:right:bottom:topLeftCornerRadius:topRightCornerRadius:bottomRightCornerRadius:bottomLeftCornerRadius:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppUi_geometryRoundRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsPoint:(int64_t)point __attribute__((swift_name("contains(point:)")));
- (ComposeAppUi_geometryRoundRect *)doCopyLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom topLeftCornerRadius:(int64_t)topLeftCornerRadius topRightCornerRadius:(int64_t)topRightCornerRadius bottomRightCornerRadius:(int64_t)bottomRightCornerRadius bottomLeftCornerRadius:(int64_t)bottomLeftCornerRadius __attribute__((swift_name("doCopy(left:top:right:bottom:topLeftCornerRadius:topRightCornerRadius:bottomRightCornerRadius:bottomLeftCornerRadius:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float bottom __attribute__((swift_name("bottom")));
@property (readonly) int64_t bottomLeftCornerRadius __attribute__((swift_name("bottomLeftCornerRadius")));
@property (readonly) int64_t bottomRightCornerRadius __attribute__((swift_name("bottomRightCornerRadius")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float left __attribute__((swift_name("left")));
@property (readonly) float right __attribute__((swift_name("right")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) int64_t topLeftCornerRadius __attribute__((swift_name("topLeftCornerRadius")));
@property (readonly) int64_t topRightCornerRadius __attribute__((swift_name("topRightCornerRadius")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("Ui_graphicsPathIterator")))
@protocol ComposeAppUi_graphicsPathIterator <ComposeAppKotlinIterator>
@required
- (int32_t)calculateSizeIncludeConvertedConics:(BOOL)includeConvertedConics __attribute__((swift_name("calculateSize(includeConvertedConics:)")));
- (ComposeAppUi_graphicsPathSegmentType *)nextOutPoints:(ComposeAppKotlinFloatArray *)outPoints offset:(int32_t)offset __attribute__((swift_name("next(outPoints:offset:)")));
@property (readonly) ComposeAppUi_graphicsPathIteratorConicEvaluation *conicEvaluation __attribute__((swift_name("conicEvaluation")));
@property (readonly) id<ComposeAppUi_graphicsPath> path __attribute__((swift_name("path")));
@property (readonly) float tolerance __attribute__((swift_name("tolerance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsPathIteratorConicEvaluation")))
@interface ComposeAppUi_graphicsPathIteratorConicEvaluation : ComposeAppKotlinEnum<ComposeAppUi_graphicsPathIteratorConicEvaluation *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppUi_graphicsPathIteratorConicEvaluation *asconic __attribute__((swift_name("asconic")));
@property (class, readonly) ComposeAppUi_graphicsPathIteratorConicEvaluation *asquadratics __attribute__((swift_name("asquadratics")));
+ (ComposeAppKotlinArray<ComposeAppUi_graphicsPathIteratorConicEvaluation *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppUi_graphicsPathIteratorConicEvaluation *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Ui_graphicsOutline")))
@interface ComposeAppUi_graphicsOutline : ComposeAppBase
@property (readonly) ComposeAppUi_geometryRect *bounds __attribute__((swift_name("bounds")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("Ui_graphicsRenderEffect")))
@interface ComposeAppUi_graphicsRenderEffect : ComposeAppBase
- (ComposeAppSkikoImageFilter *)asSkiaImageFilter __attribute__((swift_name("asSkiaImageFilter()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (ComposeAppSkikoImageFilter *)createImageFilter __attribute__((swift_name("createImageFilter()")));
- (BOOL)isSupported __attribute__((swift_name("isSupported()")));
@end

__attribute__((swift_name("Ui_graphicsCanvas")))
@protocol ComposeAppUi_graphicsCanvas
@required
- (void)clipPathPath:(id<ComposeAppUi_graphicsPath>)path clipOp:(int32_t)clipOp __attribute__((swift_name("clipPath(path:clipOp:)")));
- (void)clipRectRect:(ComposeAppUi_geometryRect *)rect clipOp:(int32_t)clipOp __attribute__((swift_name("clipRect(rect:clipOp:)")));
- (void)clipRectLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom clipOp:(int32_t)clipOp __attribute__((swift_name("clipRect(left:top:right:bottom:clipOp:)")));
- (void)concatMatrix:(id)matrix __attribute__((swift_name("concat(matrix:)")));
- (void)disableZ __attribute__((swift_name("disableZ()")));
- (void)drawArcRect:(ComposeAppUi_geometryRect *)rect startAngle:(float)startAngle sweepAngle:(float)sweepAngle useCenter:(BOOL)useCenter paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawArc(rect:startAngle:sweepAngle:useCenter:paint:)")));
- (void)drawArcLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom startAngle:(float)startAngle sweepAngle:(float)sweepAngle useCenter:(BOOL)useCenter paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawArc(left:top:right:bottom:startAngle:sweepAngle:useCenter:paint:)")));
- (void)drawArcRadRect:(ComposeAppUi_geometryRect *)rect startAngleRad:(float)startAngleRad sweepAngleRad:(float)sweepAngleRad useCenter:(BOOL)useCenter paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawArcRad(rect:startAngleRad:sweepAngleRad:useCenter:paint:)")));
- (void)drawCircleCenter:(int64_t)center radius:(float)radius paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawCircle(center:radius:paint:)")));
- (void)drawImageImage:(id<ComposeAppUi_graphicsImageBitmap>)image topLeftOffset:(int64_t)topLeftOffset paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawImage(image:topLeftOffset:paint:)")));
- (void)drawImageRectImage:(id<ComposeAppUi_graphicsImageBitmap>)image srcOffset:(int64_t)srcOffset srcSize:(int64_t)srcSize dstOffset:(int64_t)dstOffset dstSize:(int64_t)dstSize paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawImageRect(image:srcOffset:srcSize:dstOffset:dstSize:paint:)")));
- (void)drawLineP1:(int64_t)p1 p2:(int64_t)p2 paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawLine(p1:p2:paint:)")));
- (void)drawOvalRect:(ComposeAppUi_geometryRect *)rect paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawOval(rect:paint:)")));
- (void)drawOvalLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawOval(left:top:right:bottom:paint:)")));
- (void)drawPathPath:(id<ComposeAppUi_graphicsPath>)path paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawPath(path:paint:)")));
- (void)drawPointsPointMode:(int32_t)pointMode points:(NSArray<id> *)points paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawPoints(pointMode:points:paint:)")));
- (void)drawRawPointsPointMode:(int32_t)pointMode points:(ComposeAppKotlinFloatArray *)points paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawRawPoints(pointMode:points:paint:)")));
- (void)drawRectRect:(ComposeAppUi_geometryRect *)rect paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawRect(rect:paint:)")));
- (void)drawRectLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawRect(left:top:right:bottom:paint:)")));
- (void)drawRoundRectLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom radiusX:(float)radiusX radiusY:(float)radiusY paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawRoundRect(left:top:right:bottom:radiusX:radiusY:paint:)")));
- (void)drawVerticesVertices:(ComposeAppUi_graphicsVertices *)vertices blendMode:(int32_t)blendMode paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("drawVertices(vertices:blendMode:paint:)")));
- (void)enableZ __attribute__((swift_name("enableZ()")));
- (void)restore __attribute__((swift_name("restore()")));
- (void)rotateDegrees:(float)degrees __attribute__((swift_name("rotate(degrees:)")));
- (void)save __attribute__((swift_name("save()")));
- (void)saveLayerBounds:(ComposeAppUi_geometryRect *)bounds paint:(id<ComposeAppUi_graphicsPaint>)paint __attribute__((swift_name("saveLayer(bounds:paint:)")));
- (void)scaleSx:(float)sx sy:(float)sy __attribute__((swift_name("scale(sx:sy:)")));
- (void)skewSx:(float)sx sy:(float)sy __attribute__((swift_name("skew(sx:sy:)")));
- (void)skewRadSxRad:(float)sxRad syRad:(float)syRad __attribute__((swift_name("skewRad(sxRad:syRad:)")));
- (void)translateDx:(float)dx dy:(float)dy __attribute__((swift_name("translate(dx:dy:)")));
@end

__attribute__((swift_name("Ui_graphicsDrawTransform")))
@protocol ComposeAppUi_graphicsDrawTransform
@required
- (void)clipPathPath:(id<ComposeAppUi_graphicsPath>)path clipOp:(int32_t)clipOp __attribute__((swift_name("clipPath(path:clipOp:)")));
- (void)clipRectLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom clipOp:(int32_t)clipOp __attribute__((swift_name("clipRect(left:top:right:bottom:clipOp:)")));
- (void)insetLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("inset(left:top:right:bottom:)")));
- (void)rotateDegrees:(float)degrees pivot:(int64_t)pivot __attribute__((swift_name("rotate(degrees:pivot:)")));
- (void)scaleScaleX:(float)scaleX scaleY:(float)scaleY pivot:(int64_t)pivot __attribute__((swift_name("scale(scaleX:scaleY:pivot:)")));
- (void)transformMatrix:(id)matrix __attribute__((swift_name("transform(matrix:)")));
- (void)translateLeft:(float)left top:(float)top __attribute__((swift_name("translate(left:top:)")));
@property (readonly) int64_t center __attribute__((swift_name("center")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_geometryRect.Companion")))
@interface ComposeAppUi_geometryRectCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppUi_geometryRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) ComposeAppUi_geometryRect *Zero __attribute__((swift_name("Zero")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_unitDpRect.Companion")))
@interface ComposeAppUi_unitDpRectCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppUi_unitDpRectCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface ComposeAppKotlinIntIterator : ComposeAppBase <ComposeAppKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ComposeAppInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface ComposeAppKotlinFloatArray : ComposeAppBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(ComposeAppFloat *(^)(ComposeAppInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (ComposeAppKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol ComposeAppKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface ComposeAppKtor_httpUrl : ComposeAppBase <ComposeAppKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) ComposeAppKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<ComposeAppKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) ComposeAppKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) ComposeAppKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface ComposeAppKtor_httpHttpMethod : ComposeAppBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol ComposeAppKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<ComposeAppKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol ComposeAppKtor_httpHeaders <ComposeAppKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface ComposeAppKtor_httpOutgoingContent : ComposeAppBase
- (id _Nullable)getPropertyKey:(ComposeAppKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(ComposeAppKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<ComposeAppKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) ComposeAppLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) ComposeAppKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<ComposeAppKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol ComposeAppKotlinx_coroutines_coreJob <ComposeAppKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<ComposeAppKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<ComposeAppKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(ComposeAppKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (ComposeAppKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<ComposeAppKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(ComposeAppKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<ComposeAppKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(ComposeAppKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<ComposeAppKotlinx_coroutines_coreJob>)plusOther_:(id<ComposeAppKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<ComposeAppKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<ComposeAppKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<ComposeAppKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface ComposeAppKtor_httpHttpStatusCode : ComposeAppBase <ComposeAppKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(ComposeAppKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (ComposeAppKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (ComposeAppKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface ComposeAppKtor_utilsGMTDate : ComposeAppBase <ComposeAppKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(ComposeAppKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(ComposeAppKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(ComposeAppKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (ComposeAppKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (ComposeAppKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(ComposeAppKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(ComposeAppKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) ComposeAppKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) ComposeAppKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface ComposeAppKtor_httpHttpProtocolVersion : ComposeAppBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol ComposeAppKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<ComposeAppKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface ComposeAppKotlinAbstractCoroutineContextKey<B, E> : ComposeAppBase <ComposeAppKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<ComposeAppKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<ComposeAppKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface ComposeAppKotlinx_coroutines_coreCoroutineDispatcherKey : ComposeAppKotlinAbstractCoroutineContextKey<id<ComposeAppKotlinContinuationInterceptor>, ComposeAppKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<ComposeAppKotlinCoroutineContextKey>)baseKey safeCast:(id<ComposeAppKotlinCoroutineContextElement> _Nullable (^)(id<ComposeAppKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol ComposeAppKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface ComposeAppKtor_utilsTypeInfo : ComposeAppBase
- (instancetype)initWithType:(id<ComposeAppKotlinKClass>)type kotlinType:(id<ComposeAppKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<ComposeAppKotlinKClass>)type reifiedType:(id<ComposeAppKotlinKType>)reifiedType kotlinType:(id<ComposeAppKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ComposeAppKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<ComposeAppKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol ComposeAppKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(ComposeAppBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause_:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
@property (readonly) ComposeAppKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<ComposeAppKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol ComposeAppKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<ComposeAppKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<ComposeAppKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<ComposeAppKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<ComposeAppKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface ComposeAppKtor_utilsStringValuesBuilderImpl : ComposeAppBase <ComposeAppKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<ComposeAppKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<ComposeAppKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<ComposeAppKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<ComposeAppKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) ComposeAppMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface ComposeAppKtor_httpHeadersBuilder : ComposeAppKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<ComposeAppKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface ComposeAppKtor_client_coreHttpRequestBuilderCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface ComposeAppKtor_httpURLBuilder : ComposeAppBase
- (instancetype)initWithProtocol:(ComposeAppKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<ComposeAppKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<ComposeAppKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<ComposeAppKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property ComposeAppKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property ComposeAppKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface ComposeAppKtor_client_coreHttpClientCallCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol ComposeAppKtor_client_coreHttpRequest <ComposeAppKtor_httpHttpMessage, ComposeAppKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<ComposeAppKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) ComposeAppKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) ComposeAppKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) ComposeAppKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) ComposeAppKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol ComposeAppKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<ComposeAppKotlinKClass>)kClass provider:(id<ComposeAppKotlinx_serialization_coreKSerializer> (^)(NSArray<id<ComposeAppKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<ComposeAppKotlinKClass>)kClass serializer:(id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<ComposeAppKotlinKClass>)baseClass actualClass:(id<ComposeAppKotlinKClass>)actualClass actualSerializer:(id<ComposeAppKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<ComposeAppKotlinKClass>)baseClass defaultDeserializerProvider:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<ComposeAppKotlinKClass>)baseClass defaultDeserializerProvider:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<ComposeAppKotlinKClass>)baseClass defaultSerializerProvider:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol ComposeAppKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol ComposeAppKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol ComposeAppKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol ComposeAppKotlinKClass <ComposeAppKotlinKDeclarationContainer, ComposeAppKotlinKAnnotatedElement, ComposeAppKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface ComposeAppKotlinPair<__covariant A, __covariant B> : ComposeAppBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((swift_name("SkikoNative")))
@interface ComposeAppSkikoNative : ComposeAppBase
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoNativeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("SkikoManaged")))
@interface ComposeAppSkikoManaged : ComposeAppSkikoNative
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
@property (readonly) BOOL isClosed __attribute__((swift_name("isClosed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaint")))
@interface ComposeAppSkikoPaint : ComposeAppSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoPaintCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)hasNothingToDraw __attribute__((swift_name("hasNothingToDraw()")));
- (ComposeAppSkikoPaint *)makeClone __attribute__((swift_name("makeClone()")));
- (ComposeAppSkikoPaint *)reset __attribute__((swift_name("reset()")));
- (ComposeAppSkikoPaint *)setARGBA:(int32_t)a r:(int32_t)r g:(int32_t)g b:(int32_t)b __attribute__((swift_name("setARGB(a:r:g:b:)")));
- (ComposeAppSkikoPaint *)setAlphafA:(float)a __attribute__((swift_name("setAlphaf(a:)")));
- (ComposeAppSkikoPaint *)setColor4fColor:(ComposeAppSkikoColor4f *)color colorSpace:(ComposeAppSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("setColor4f(color:colorSpace:)")));
- (ComposeAppSkikoPaint *)setStrokeValue:(BOOL)value __attribute__((swift_name("setStroke(value:)")));
@property int32_t alpha __attribute__((swift_name("alpha")));
@property (readonly) float alphaf __attribute__((swift_name("alphaf")));
@property ComposeAppSkikoBlendMode *blendMode __attribute__((swift_name("blendMode")));
@property int32_t color __attribute__((swift_name("color")));
@property ComposeAppSkikoColor4f *color4f __attribute__((swift_name("color4f")));
@property ComposeAppSkikoColorFilter * _Nullable colorFilter __attribute__((swift_name("colorFilter")));
@property ComposeAppSkikoImageFilter * _Nullable imageFilter __attribute__((swift_name("imageFilter")));
@property BOOL isAntiAlias __attribute__((swift_name("isAntiAlias")));
@property BOOL isDither __attribute__((swift_name("isDither")));
@property (readonly) BOOL isSrcOver __attribute__((swift_name("isSrcOver")));
@property ComposeAppSkikoMaskFilter * _Nullable maskFilter __attribute__((swift_name("maskFilter")));
@property ComposeAppSkikoPaintMode *mode __attribute__((swift_name("mode")));
@property ComposeAppSkikoPathEffect * _Nullable pathEffect __attribute__((swift_name("pathEffect")));
@property ComposeAppSkikoShader * _Nullable shader __attribute__((swift_name("shader")));
@property ComposeAppSkikoPaintStrokeCap *strokeCap __attribute__((swift_name("strokeCap")));
@property ComposeAppSkikoPaintStrokeJoin *strokeJoin __attribute__((swift_name("strokeJoin")));
@property float strokeMiter __attribute__((swift_name("strokeMiter")));
@property float strokeWidth __attribute__((swift_name("strokeWidth")));
@end

__attribute__((swift_name("SkikoRefCnt")))
@interface ComposeAppSkikoRefCnt : ComposeAppSkikoManaged

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t refCount __attribute__((swift_name("refCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShader")))
@interface ComposeAppSkikoShader : ComposeAppSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoShaderCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppSkikoShader *)makeWithColorFilterF:(ComposeAppSkikoColorFilter * _Nullable)f __attribute__((swift_name("makeWithColorFilter(f:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_geometryRoundRect.Companion")))
@interface ComposeAppUi_geometryRoundRectCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppUi_geometryRoundRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) ComposeAppUi_geometryRoundRect *Zero __attribute__((swift_name("Zero")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsPathSegment.Type_")))
@interface ComposeAppUi_graphicsPathSegmentType : ComposeAppKotlinEnum<ComposeAppUi_graphicsPathSegmentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppUi_graphicsPathSegmentType *move __attribute__((swift_name("move")));
@property (class, readonly) ComposeAppUi_graphicsPathSegmentType *line __attribute__((swift_name("line")));
@property (class, readonly) ComposeAppUi_graphicsPathSegmentType *quadratic __attribute__((swift_name("quadratic")));
@property (class, readonly) ComposeAppUi_graphicsPathSegmentType *conic __attribute__((swift_name("conic")));
@property (class, readonly) ComposeAppUi_graphicsPathSegmentType *cubic __attribute__((swift_name("cubic")));
@property (class, readonly) ComposeAppUi_graphicsPathSegmentType *close __attribute__((swift_name("close")));
@property (class, readonly) ComposeAppUi_graphicsPathSegmentType *done __attribute__((swift_name("done")));
+ (ComposeAppKotlinArray<ComposeAppUi_graphicsPathSegmentType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppUi_graphicsPathSegmentType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageFilter")))
@interface ComposeAppSkikoImageFilter : ComposeAppSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoImageFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsVertices")))
@interface ComposeAppUi_graphicsVertices : ComposeAppBase
- (instancetype)initWithVertexMode:(int32_t)vertexMode positions:(NSArray<id> *)positions textureCoordinates:(NSArray<id> *)textureCoordinates colors:(NSArray<id> *)colors indices:(NSArray<ComposeAppInt *> *)indices __attribute__((swift_name("init(vertexMode:positions:textureCoordinates:colors:indices:)"))) __attribute__((objc_designated_initializer));
@property (readonly) ComposeAppKotlinIntArray *colors __attribute__((swift_name("colors")));
@property (readonly) ComposeAppKotlinShortArray *indices __attribute__((swift_name("indices")));
@property (readonly) ComposeAppKotlinFloatArray *positions __attribute__((swift_name("positions")));
@property (readonly) ComposeAppKotlinFloatArray *textureCoordinates __attribute__((swift_name("textureCoordinates")));
@property (readonly) int32_t vertexMode __attribute__((swift_name("vertexMode")));
@end

__attribute__((swift_name("KotlinFloatIterator")))
@interface ComposeAppKotlinFloatIterator : ComposeAppBase <ComposeAppKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ComposeAppFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface ComposeAppKtor_httpUrlCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol ComposeAppKtor_httpParameters <ComposeAppKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface ComposeAppKtor_httpURLProtocol : ComposeAppBase <ComposeAppKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface ComposeAppKtor_httpHttpMethodCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<ComposeAppKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) ComposeAppKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) ComposeAppKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) ComposeAppKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) ComposeAppKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) ComposeAppKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) ComposeAppKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) ComposeAppKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol ComposeAppKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface ComposeAppKtor_httpHeaderValueWithParameters : ComposeAppBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<ComposeAppKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<ComposeAppKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface ComposeAppKtor_httpContentType : ComposeAppKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<ComposeAppKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<ComposeAppKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(ComposeAppKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (ComposeAppKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (ComposeAppKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol ComposeAppKotlinx_coroutines_coreChildHandle <ComposeAppKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(ComposeAppKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<ComposeAppKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol ComposeAppKotlinx_coroutines_coreChildJob <ComposeAppKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<ComposeAppKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol ComposeAppKotlinSequence
@required
- (id<ComposeAppKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol ComposeAppKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) ComposeAppKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<ComposeAppKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(ComposeAppKotlinThrowable *, id _Nullable, id<ComposeAppKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<ComposeAppKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol ComposeAppKotlinx_coroutines_coreSelectClause0 <ComposeAppKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface ComposeAppKtor_httpHttpStatusCodeCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) ComposeAppKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<ComposeAppKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface ComposeAppKtor_utilsWeekDay : ComposeAppKotlinEnum<ComposeAppKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) ComposeAppKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) ComposeAppKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) ComposeAppKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) ComposeAppKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) ComposeAppKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) ComposeAppKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) ComposeAppKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (ComposeAppKotlinArray<ComposeAppKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface ComposeAppKtor_utilsMonth : ComposeAppKotlinEnum<ComposeAppKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) ComposeAppKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) ComposeAppKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) ComposeAppKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) ComposeAppKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) ComposeAppKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) ComposeAppKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) ComposeAppKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) ComposeAppKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) ComposeAppKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) ComposeAppKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) ComposeAppKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) ComposeAppKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (ComposeAppKotlinArray<ComposeAppKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface ComposeAppKtor_utilsGMTDateCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) ComposeAppKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface ComposeAppKtor_httpHttpProtocolVersionCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (ComposeAppKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) ComposeAppKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) ComposeAppKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) ComposeAppKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) ComposeAppKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) ComposeAppKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol ComposeAppKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<ComposeAppKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<ComposeAppKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol ComposeAppKotlinx_io_coreRawSource <ComposeAppKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(ComposeAppKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol ComposeAppKotlinx_io_coreSource <ComposeAppKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<ComposeAppKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(ComposeAppKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<ComposeAppKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<ComposeAppKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) ComposeAppKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface ComposeAppKtor_httpURLBuilderCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol ComposeAppKtor_httpParametersBuilder <ComposeAppKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoNative.Companion")))
@interface ComposeAppSkikoNativeCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoNativeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) void * _Nullable NullPointer __attribute__((swift_name("NullPointer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaint.Companion")))
@interface ComposeAppSkikoPaintCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoPaintCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColor4f")))
@interface ComposeAppSkikoColor4f : ComposeAppBase
- (instancetype)initWithRgba:(ComposeAppKotlinFloatArray *)rgba __attribute__((swift_name("init(rgba:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithC:(int32_t)c __attribute__((swift_name("init(c:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithR:(float)r g:(float)g b:(float)b a:(float)a __attribute__((swift_name("init(r:g:b:a:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoColor4fCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (ComposeAppKotlinFloatArray *)flatten __attribute__((swift_name("flatten()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (ComposeAppSkikoColor4f *)makeLerpOther:(ComposeAppSkikoColor4f *)other weight:(float)weight __attribute__((swift_name("makeLerp(other:weight:)")));
- (int32_t)toColor __attribute__((swift_name("toColor()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (ComposeAppSkikoColor4f *)withA_a:(float)_a __attribute__((swift_name("withA(_a:)")));
- (ComposeAppSkikoColor4f *)withB_b:(float)_b __attribute__((swift_name("withB(_b:)")));
- (ComposeAppSkikoColor4f *)withG_g:(float)_g __attribute__((swift_name("withG(_g:)")));
- (ComposeAppSkikoColor4f *)withR_r:(float)_r __attribute__((swift_name("withR(_r:)")));
@property (readonly) float a __attribute__((swift_name("a")));
@property (readonly) float b __attribute__((swift_name("b")));
@property (readonly) float g __attribute__((swift_name("g")));
@property (readonly) float r __attribute__((swift_name("r")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorSpace")))
@interface ComposeAppSkikoColorSpace : ComposeAppSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoColorSpaceCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppSkikoColor4f *)convertToColor:(ComposeAppSkikoColorSpace * _Nullable)toColor color:(ComposeAppSkikoColor4f *)color __attribute__((swift_name("convert(toColor:color:)")));
@property (readonly) BOOL isGammaCloseToSRGB __attribute__((swift_name("isGammaCloseToSRGB")));
@property (readonly) BOOL isGammaLinear __attribute__((swift_name("isGammaLinear")));
@property (readonly) BOOL isSRGB __attribute__((swift_name("isSRGB")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBlendMode")))
@interface ComposeAppSkikoBlendMode : ComposeAppKotlinEnum<ComposeAppSkikoBlendMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoBlendMode *clear __attribute__((swift_name("clear")));
@property (class, readonly) ComposeAppSkikoBlendMode *src __attribute__((swift_name("src")));
@property (class, readonly) ComposeAppSkikoBlendMode *dst __attribute__((swift_name("dst")));
@property (class, readonly) ComposeAppSkikoBlendMode *srcOver __attribute__((swift_name("srcOver")));
@property (class, readonly) ComposeAppSkikoBlendMode *dstOver __attribute__((swift_name("dstOver")));
@property (class, readonly) ComposeAppSkikoBlendMode *srcIn __attribute__((swift_name("srcIn")));
@property (class, readonly) ComposeAppSkikoBlendMode *dstIn __attribute__((swift_name("dstIn")));
@property (class, readonly) ComposeAppSkikoBlendMode *srcOut __attribute__((swift_name("srcOut")));
@property (class, readonly) ComposeAppSkikoBlendMode *dstOut __attribute__((swift_name("dstOut")));
@property (class, readonly) ComposeAppSkikoBlendMode *srcAtop __attribute__((swift_name("srcAtop")));
@property (class, readonly) ComposeAppSkikoBlendMode *dstAtop __attribute__((swift_name("dstAtop")));
@property (class, readonly) ComposeAppSkikoBlendMode *xor_ __attribute__((swift_name("xor_")));
@property (class, readonly) ComposeAppSkikoBlendMode *plus __attribute__((swift_name("plus")));
@property (class, readonly) ComposeAppSkikoBlendMode *modulate __attribute__((swift_name("modulate")));
@property (class, readonly) ComposeAppSkikoBlendMode *screen __attribute__((swift_name("screen")));
@property (class, readonly) ComposeAppSkikoBlendMode *overlay __attribute__((swift_name("overlay")));
@property (class, readonly) ComposeAppSkikoBlendMode *darken __attribute__((swift_name("darken")));
@property (class, readonly) ComposeAppSkikoBlendMode *lighten __attribute__((swift_name("lighten")));
@property (class, readonly) ComposeAppSkikoBlendMode *colorDodge __attribute__((swift_name("colorDodge")));
@property (class, readonly) ComposeAppSkikoBlendMode *colorBurn __attribute__((swift_name("colorBurn")));
@property (class, readonly) ComposeAppSkikoBlendMode *hardLight __attribute__((swift_name("hardLight")));
@property (class, readonly) ComposeAppSkikoBlendMode *softLight __attribute__((swift_name("softLight")));
@property (class, readonly) ComposeAppSkikoBlendMode *difference __attribute__((swift_name("difference")));
@property (class, readonly) ComposeAppSkikoBlendMode *exclusion __attribute__((swift_name("exclusion")));
@property (class, readonly) ComposeAppSkikoBlendMode *multiply __attribute__((swift_name("multiply")));
@property (class, readonly) ComposeAppSkikoBlendMode *hue __attribute__((swift_name("hue")));
@property (class, readonly) ComposeAppSkikoBlendMode *saturation __attribute__((swift_name("saturation")));
@property (class, readonly) ComposeAppSkikoBlendMode *color __attribute__((swift_name("color")));
@property (class, readonly) ComposeAppSkikoBlendMode *luminosity __attribute__((swift_name("luminosity")));
+ (ComposeAppKotlinArray<ComposeAppSkikoBlendMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoBlendMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorFilter")))
@interface ComposeAppSkikoColorFilter : ComposeAppSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoColorFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMaskFilter")))
@interface ComposeAppSkikoMaskFilter : ComposeAppSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoMaskFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaintMode")))
@interface ComposeAppSkikoPaintMode : ComposeAppKotlinEnum<ComposeAppSkikoPaintMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoPaintMode *fill __attribute__((swift_name("fill")));
@property (class, readonly) ComposeAppSkikoPaintMode *stroke __attribute__((swift_name("stroke")));
@property (class, readonly) ComposeAppSkikoPaintMode *strokeAndFill __attribute__((swift_name("strokeAndFill")));
+ (ComposeAppKotlinArray<ComposeAppSkikoPaintMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoPaintMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEffect")))
@interface ComposeAppSkikoPathEffect : ComposeAppSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoPathEffectCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppSkikoPathEffect *)makeComposeInner:(ComposeAppSkikoPathEffect * _Nullable)inner __attribute__((swift_name("makeCompose(inner:)")));
- (ComposeAppSkikoPathEffect *)makeSumSecond:(ComposeAppSkikoPathEffect * _Nullable)second __attribute__((swift_name("makeSum(second:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaintStrokeCap")))
@interface ComposeAppSkikoPaintStrokeCap : ComposeAppKotlinEnum<ComposeAppSkikoPaintStrokeCap *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoPaintStrokeCap *butt __attribute__((swift_name("butt")));
@property (class, readonly) ComposeAppSkikoPaintStrokeCap *round __attribute__((swift_name("round")));
@property (class, readonly) ComposeAppSkikoPaintStrokeCap *square __attribute__((swift_name("square")));
+ (ComposeAppKotlinArray<ComposeAppSkikoPaintStrokeCap *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoPaintStrokeCap *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaintStrokeJoin")))
@interface ComposeAppSkikoPaintStrokeJoin : ComposeAppKotlinEnum<ComposeAppSkikoPaintStrokeJoin *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoPaintStrokeJoin *miter __attribute__((swift_name("miter")));
@property (class, readonly) ComposeAppSkikoPaintStrokeJoin *round __attribute__((swift_name("round")));
@property (class, readonly) ComposeAppSkikoPaintStrokeJoin *bevel __attribute__((swift_name("bevel")));
+ (ComposeAppKotlinArray<ComposeAppSkikoPaintStrokeJoin *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoPaintStrokeJoin *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShader.Companion")))
@interface ComposeAppSkikoShaderCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoShaderCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoShader *)makeBlendMode:(ComposeAppSkikoBlendMode *)mode dst:(ComposeAppSkikoShader * _Nullable)dst src:(ComposeAppSkikoShader * _Nullable)src __attribute__((swift_name("makeBlend(mode:dst:src:)")));
- (ComposeAppSkikoShader *)makeColorColor:(int32_t)color __attribute__((swift_name("makeColor(color:)")));
- (ComposeAppSkikoShader *)makeColorColor:(ComposeAppSkikoColor4f *)color space:(ComposeAppSkikoColorSpace * _Nullable)space __attribute__((swift_name("makeColor(color:space:)")));
- (ComposeAppSkikoShader *)makeEmpty __attribute__((swift_name("makeEmpty()")));
- (ComposeAppSkikoShader *)makeFractalNoiseBaseFrequencyX:(float)baseFrequencyX baseFrequencyY:(float)baseFrequencyY numOctaves:(int32_t)numOctaves seed:(float)seed tileSize:(ComposeAppSkikoISize *)tileSize __attribute__((swift_name("makeFractalNoise(baseFrequencyX:baseFrequencyY:numOctaves:seed:tileSize:)")));
- (ComposeAppSkikoShader *)makeLinearGradientP0:(ComposeAppSkikoPoint *)p0 p1:(ComposeAppSkikoPoint *)p1 colors:(ComposeAppKotlinIntArray *)colors __attribute__((swift_name("makeLinearGradient(p0:p1:colors:)")));
- (ComposeAppSkikoShader *)makeLinearGradientP0:(ComposeAppSkikoPoint *)p0 p1:(ComposeAppSkikoPoint *)p1 colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeLinearGradient(p0:p1:colors:positions:)")));
- (ComposeAppSkikoShader *)makeLinearGradientP0:(ComposeAppSkikoPoint *)p0 p1:(ComposeAppSkikoPoint *)p1 colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(p0:p1:colors:positions:style:)")));
- (ComposeAppSkikoShader *)makeLinearGradientP0:(ComposeAppSkikoPoint *)p0 p1:(ComposeAppSkikoPoint *)p1 colors:(ComposeAppKotlinArray<ComposeAppSkikoColor4f *> *)colors cs:(ComposeAppSkikoColorSpace * _Nullable)cs positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(p0:p1:colors:cs:positions:style:)")));
- (ComposeAppSkikoShader *)makeLinearGradientX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(x0:y0:x1:y1:colors:positions:style:)")));
- (ComposeAppSkikoShader *)makeLinearGradientX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 colors:(ComposeAppKotlinArray<ComposeAppSkikoColor4f *> *)colors cs:(ComposeAppSkikoColorSpace * _Nullable)cs positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(x0:y0:x1:y1:colors:cs:positions:style:)")));
- (ComposeAppSkikoShader *)makeRadialGradientCenter:(ComposeAppSkikoPoint *)center r:(float)r colors:(ComposeAppKotlinIntArray *)colors __attribute__((swift_name("makeRadialGradient(center:r:colors:)")));
- (ComposeAppSkikoShader *)makeRadialGradientCenter:(ComposeAppSkikoPoint *)center r:(float)r colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeRadialGradient(center:r:colors:positions:)")));
- (ComposeAppSkikoShader *)makeRadialGradientCenter:(ComposeAppSkikoPoint *)center r:(float)r colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(center:r:colors:positions:style:)")));
- (ComposeAppSkikoShader *)makeRadialGradientX:(float)x y:(float)y r:(float)r colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(x:y:r:colors:positions:style:)")));
- (ComposeAppSkikoShader *)makeRadialGradientCenter:(ComposeAppSkikoPoint *)center r:(float)r colors:(ComposeAppKotlinArray<ComposeAppSkikoColor4f *> *)colors cs:(ComposeAppSkikoColorSpace * _Nullable)cs positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(center:r:colors:cs:positions:style:)")));
- (ComposeAppSkikoShader *)makeRadialGradientX:(float)x y:(float)y r:(float)r colors:(ComposeAppKotlinArray<ComposeAppSkikoColor4f *> *)colors cs:(ComposeAppSkikoColorSpace * _Nullable)cs positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(x:y:r:colors:cs:positions:style:)")));
- (ComposeAppSkikoShader *)makeSweepGradientCenter:(ComposeAppSkikoPoint *)center colors:(ComposeAppKotlinIntArray *)colors __attribute__((swift_name("makeSweepGradient(center:colors:)")));
- (ComposeAppSkikoShader *)makeSweepGradientX:(float)x y:(float)y colors:(ComposeAppKotlinIntArray *)colors __attribute__((swift_name("makeSweepGradient(x:y:colors:)")));
- (ComposeAppSkikoShader *)makeSweepGradientCenter:(ComposeAppSkikoPoint *)center colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeSweepGradient(center:colors:positions:)")));
- (ComposeAppSkikoShader *)makeSweepGradientX:(float)x y:(float)y colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeSweepGradient(x:y:colors:positions:)")));
- (ComposeAppSkikoShader *)makeSweepGradientCenter:(ComposeAppSkikoPoint *)center colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(center:colors:positions:style:)")));
- (ComposeAppSkikoShader *)makeSweepGradientX:(float)x y:(float)y colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(x:y:colors:positions:style:)")));
- (ComposeAppSkikoShader *)makeSweepGradientCenter:(ComposeAppSkikoPoint *)center startAngle:(float)startAngle endAngle:(float)endAngle colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(center:startAngle:endAngle:colors:positions:style:)")));
- (ComposeAppSkikoShader *)makeSweepGradientX:(float)x y:(float)y startAngle:(float)startAngle endAngle:(float)endAngle colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(x:y:startAngle:endAngle:colors:positions:style:)")));
- (ComposeAppSkikoShader *)makeSweepGradientCenter:(ComposeAppSkikoPoint *)center startAngle:(float)startAngle endAngle:(float)endAngle colors:(ComposeAppKotlinArray<ComposeAppSkikoColor4f *> *)colors cs:(ComposeAppSkikoColorSpace * _Nullable)cs positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(center:startAngle:endAngle:colors:cs:positions:style:)")));
- (ComposeAppSkikoShader *)makeSweepGradientX:(float)x y:(float)y startAngle:(float)startAngle endAngle:(float)endAngle colors:(ComposeAppKotlinArray<ComposeAppSkikoColor4f *> *)colors cs:(ComposeAppSkikoColorSpace * _Nullable)cs positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(x:y:startAngle:endAngle:colors:cs:positions:style:)")));
- (ComposeAppSkikoShader *)makeTurbulenceBaseFrequencyX:(float)baseFrequencyX baseFrequencyY:(float)baseFrequencyY numOctaves:(int32_t)numOctaves seed:(float)seed tileSize:(ComposeAppSkikoISize *)tileSize __attribute__((swift_name("makeTurbulence(baseFrequencyX:baseFrequencyY:numOctaves:seed:tileSize:)")));
- (ComposeAppSkikoShader *)makeTwoPointConicalGradientP0:(ComposeAppSkikoPoint *)p0 r0:(float)r0 p1:(ComposeAppSkikoPoint *)p1 r1:(float)r1 colors:(ComposeAppKotlinIntArray *)colors __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:)")));
- (ComposeAppSkikoShader *)makeTwoPointConicalGradientP0:(ComposeAppSkikoPoint *)p0 r0:(float)r0 p1:(ComposeAppSkikoPoint *)p1 r1:(float)r1 colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:positions:)")));
- (ComposeAppSkikoShader *)makeTwoPointConicalGradientP0:(ComposeAppSkikoPoint *)p0 r0:(float)r0 p1:(ComposeAppSkikoPoint *)p1 r1:(float)r1 colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:positions:style:)")));
- (ComposeAppSkikoShader *)makeTwoPointConicalGradientP0:(ComposeAppSkikoPoint *)p0 r0:(float)r0 p1:(ComposeAppSkikoPoint *)p1 r1:(float)r1 colors:(ComposeAppKotlinArray<ComposeAppSkikoColor4f *> *)colors cs:(ComposeAppSkikoColorSpace * _Nullable)cs positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:cs:positions:style:)")));
- (ComposeAppSkikoShader *)makeTwoPointConicalGradientX0:(float)x0 y0:(float)y0 r0:(float)r0 x1:(float)x1 y1:(float)y1 r1:(float)r1 colors:(ComposeAppKotlinIntArray *)colors positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(x0:y0:r0:x1:y1:r1:colors:positions:style:)")));
- (ComposeAppSkikoShader *)makeTwoPointConicalGradientX0:(float)x0 y0:(float)y0 r0:(float)r0 x1:(float)x1 y1:(float)y1 r1:(float)r1 colors:(ComposeAppKotlinArray<ComposeAppSkikoColor4f *> *)colors cs:(ComposeAppSkikoColorSpace * _Nullable)cs positions:(ComposeAppKotlinFloatArray * _Nullable)positions style:(ComposeAppSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(x0:y0:r0:x1:y1:r1:colors:cs:positions:style:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageFilter.Companion")))
@interface ComposeAppSkikoImageFilterCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoImageFilterCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoImageFilter *)makeArithmeticK1:(float)k1 k2:(float)k2 k3:(float)k3 k4:(float)k4 enforcePMColor:(BOOL)enforcePMColor bg:(ComposeAppSkikoImageFilter * _Nullable)bg fg:(ComposeAppSkikoImageFilter * _Nullable)fg crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeArithmetic(k1:k2:k3:k4:enforcePMColor:bg:fg:crop:)")));
- (ComposeAppSkikoImageFilter *)makeBlendBlendMode:(ComposeAppSkikoBlendMode *)blendMode bg:(ComposeAppSkikoImageFilter * _Nullable)bg fg:(ComposeAppSkikoImageFilter * _Nullable)fg crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeBlend(blendMode:bg:fg:crop:)")));
- (ComposeAppSkikoImageFilter *)makeBlurSigmaX:(float)sigmaX sigmaY:(float)sigmaY mode:(ComposeAppSkikoFilterTileMode *)mode input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeBlur(sigmaX:sigmaY:mode:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makeColorFilterF:(ComposeAppSkikoColorFilter * _Nullable)f input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeColorFilter(f:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makeComposeOuter:(ComposeAppSkikoImageFilter * _Nullable)outer inner:(ComposeAppSkikoImageFilter * _Nullable)inner __attribute__((swift_name("makeCompose(outer:inner:)")));
- (ComposeAppSkikoImageFilter *)makeDilateRx:(float)rx ry:(float)ry input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDilate(rx:ry:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makeDisplacementMapX:(ComposeAppSkikoColorChannel *)x y:(ComposeAppSkikoColorChannel *)y scale:(float)scale displacement:(ComposeAppSkikoImageFilter * _Nullable)displacement color:(ComposeAppSkikoImageFilter * _Nullable)color crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDisplacementMap(x:y:scale:displacement:color:crop:)")));
- (ComposeAppSkikoImageFilter *)makeDistantLitDiffuseX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale kd:(float)kd input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDistantLitDiffuse(x:y:z:lightColor:surfaceScale:kd:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makeDistantLitSpecularX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale ks:(float)ks shininess:(float)shininess input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDistantLitSpecular(x:y:z:lightColor:surfaceScale:ks:shininess:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makeDropShadowDx:(float)dx dy:(float)dy sigmaX:(float)sigmaX sigmaY:(float)sigmaY color:(int32_t)color input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDropShadow(dx:dy:sigmaX:sigmaY:color:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makeDropShadowOnlyDx:(float)dx dy:(float)dy sigmaX:(float)sigmaX sigmaY:(float)sigmaY color:(int32_t)color input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDropShadowOnly(dx:dy:sigmaX:sigmaY:color:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makeErodeRx:(float)rx ry:(float)ry input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeErode(rx:ry:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makeImageImage:(ComposeAppSkikoImage *)image __attribute__((swift_name("makeImage(image:)")));
- (ComposeAppSkikoImageFilter *)makeImageImage:(ComposeAppSkikoImage * _Nullable)image src:(ComposeAppSkikoRect *)src dst:(ComposeAppSkikoRect *)dst mode:(id<ComposeAppSkikoSamplingMode>)mode __attribute__((swift_name("makeImage(image:src:dst:mode:)")));
- (ComposeAppSkikoImageFilter *)makeMagnifierR:(ComposeAppSkikoRect *)r zoomAmount:(float)zoomAmount inset:(float)inset samplingMode:(id<ComposeAppSkikoSamplingMode>)samplingMode input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeMagnifier(r:zoomAmount:inset:samplingMode:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makeMatrixConvolutionKernelW:(int32_t)kernelW kernelH:(int32_t)kernelH kernel:(ComposeAppKotlinFloatArray * _Nullable)kernel gain:(float)gain bias:(float)bias offsetX:(int32_t)offsetX offsetY:(int32_t)offsetY tileMode:(ComposeAppSkikoFilterTileMode *)tileMode convolveAlpha:(BOOL)convolveAlpha input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeMatrixConvolution(kernelW:kernelH:kernel:gain:bias:offsetX:offsetY:tileMode:convolveAlpha:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makeMatrixTransformMatrix:(ComposeAppSkikoMatrix33 *)matrix mode:(id<ComposeAppSkikoSamplingMode>)mode input:(ComposeAppSkikoImageFilter * _Nullable)input __attribute__((swift_name("makeMatrixTransform(matrix:mode:input:)")));
- (ComposeAppSkikoImageFilter *)makeMergeFilters:(ComposeAppKotlinArray<ComposeAppSkikoImageFilter *> *)filters crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeMerge(filters:crop:)")));
- (ComposeAppSkikoImageFilter *)makeOffsetDx:(float)dx dy:(float)dy input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeOffset(dx:dy:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makePointLitDiffuseX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale kd:(float)kd input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makePointLitDiffuse(x:y:z:lightColor:surfaceScale:kd:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makePointLitSpecularX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale ks:(float)ks shininess:(float)shininess input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makePointLitSpecular(x:y:z:lightColor:surfaceScale:ks:shininess:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makeRuntimeShaderRuntimeShaderBuilder:(ComposeAppSkikoRuntimeShaderBuilder *)runtimeShaderBuilder shaderNames:(ComposeAppKotlinArray<NSString *> *)shaderNames inputs:(ComposeAppKotlinArray<ComposeAppSkikoImageFilter *> *)inputs __attribute__((swift_name("makeRuntimeShader(runtimeShaderBuilder:shaderNames:inputs:)")));
- (ComposeAppSkikoImageFilter *)makeRuntimeShaderRuntimeShaderBuilder:(ComposeAppSkikoRuntimeShaderBuilder *)runtimeShaderBuilder shaderName:(NSString *)shaderName input:(ComposeAppSkikoImageFilter * _Nullable)input __attribute__((swift_name("makeRuntimeShader(runtimeShaderBuilder:shaderName:input:)")));
- (ComposeAppSkikoImageFilter *)makeShaderShader:(ComposeAppSkikoShader *)shader dither:(BOOL)dither crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeShader(shader:dither:crop:)")));
- (ComposeAppSkikoImageFilter *)makeSpotLitDiffuseX0:(float)x0 y0:(float)y0 z0:(float)z0 x1:(float)x1 y1:(float)y1 z1:(float)z1 falloffExponent:(float)falloffExponent cutoffAngle:(float)cutoffAngle lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale kd:(float)kd input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeSpotLitDiffuse(x0:y0:z0:x1:y1:z1:falloffExponent:cutoffAngle:lightColor:surfaceScale:kd:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makeSpotLitSpecularX0:(float)x0 y0:(float)y0 z0:(float)z0 x1:(float)x1 y1:(float)y1 z1:(float)z1 falloffExponent:(float)falloffExponent cutoffAngle:(float)cutoffAngle lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale ks:(float)ks shininess:(float)shininess input:(ComposeAppSkikoImageFilter * _Nullable)input crop:(ComposeAppSkikoIRect * _Nullable)crop __attribute__((swift_name("makeSpotLitSpecular(x0:y0:z0:x1:y1:z1:falloffExponent:cutoffAngle:lightColor:surfaceScale:ks:shininess:input:crop:)")));
- (ComposeAppSkikoImageFilter *)makeTileSrc:(ComposeAppSkikoRect *)src dst:(ComposeAppSkikoRect *)dst input:(ComposeAppSkikoImageFilter * _Nullable)input __attribute__((swift_name("makeTile(src:dst:input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinShortArray")))
@interface ComposeAppKotlinShortArray : ComposeAppBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(ComposeAppShort *(^)(ComposeAppInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int16_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (ComposeAppKotlinShortIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int16_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface ComposeAppKtor_httpURLProtocolCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) ComposeAppKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) ComposeAppKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) ComposeAppKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) ComposeAppKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) ComposeAppKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, ComposeAppKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface ComposeAppKtor_httpHeaderValueParam : ComposeAppBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface ComposeAppKtor_httpHeaderValueWithParametersCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<ComposeAppKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface ComposeAppKtor_httpContentTypeCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) ComposeAppKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol ComposeAppKotlinx_coroutines_coreParentJob <ComposeAppKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (ComposeAppKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol ComposeAppKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<ComposeAppKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<ComposeAppKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface ComposeAppKtor_utilsWeekDayCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (ComposeAppKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface ComposeAppKtor_utilsMonthCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (ComposeAppKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface ComposeAppKotlinKTypeProjection : ComposeAppBase
- (instancetype)initWithVariance:(ComposeAppKotlinKVariance * _Nullable)variance type:(id<ComposeAppKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppKotlinKTypeProjection *)doCopyVariance:(ComposeAppKotlinKVariance * _Nullable)variance type:(id<ComposeAppKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ComposeAppKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) ComposeAppKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface ComposeAppKotlinByteArray : ComposeAppBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(ComposeAppByte *(^)(ComposeAppInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (ComposeAppKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol ComposeAppKotlinx_io_coreRawSink <ComposeAppKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(ComposeAppKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol ComposeAppKotlinx_io_coreSink <ComposeAppKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<ComposeAppKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<ComposeAppKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(ComposeAppKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) ComposeAppKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface ComposeAppKotlinx_io_coreBuffer : ComposeAppBase <ComposeAppKotlinx_io_coreSource, ComposeAppKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (ComposeAppKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(ComposeAppKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<ComposeAppKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(ComposeAppKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(ComposeAppKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<ComposeAppKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<ComposeAppKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<ComposeAppKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(ComposeAppKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<ComposeAppKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(ComposeAppKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) ComposeAppKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColor4f.Companion")))
@interface ComposeAppSkikoColor4fCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoColor4fCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKotlinFloatArray *)flattenArrayColors:(ComposeAppKotlinArray<ComposeAppSkikoColor4f *> *)colors __attribute__((swift_name("flattenArray(colors:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorSpace.Companion")))
@interface ComposeAppSkikoColorSpaceCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoColorSpaceCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppSkikoColorSpace *displayP3 __attribute__((swift_name("displayP3")));
@property (readonly) ComposeAppSkikoColorSpace *sRGB __attribute__((swift_name("sRGB")));
@property (readonly) ComposeAppSkikoColorSpace *sRGBLinear __attribute__((swift_name("sRGBLinear")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorFilter.Companion")))
@interface ComposeAppSkikoColorFilterCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoColorFilterCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoColorFilter *)makeBlendColor:(int32_t)color mode:(ComposeAppSkikoBlendMode *)mode __attribute__((swift_name("makeBlend(color:mode:)")));
- (ComposeAppSkikoColorFilter *)makeComposedOuter:(ComposeAppSkikoColorFilter * _Nullable)outer inner:(ComposeAppSkikoColorFilter * _Nullable)inner __attribute__((swift_name("makeComposed(outer:inner:)")));
- (ComposeAppSkikoColorFilter *)makeHSLAMatrixMatrix:(ComposeAppSkikoColorMatrix *)matrix __attribute__((swift_name("makeHSLAMatrix(matrix:)")));
- (ComposeAppSkikoColorFilter *)makeHighContrastGrayscale:(BOOL)grayscale mode:(ComposeAppSkikoInversionMode *)mode contrast:(float)contrast __attribute__((swift_name("makeHighContrast(grayscale:mode:contrast:)")));
- (ComposeAppSkikoColorFilter *)makeLerpDst:(ComposeAppSkikoColorFilter * _Nullable)dst src:(ComposeAppSkikoColorFilter * _Nullable)src t:(float)t __attribute__((swift_name("makeLerp(dst:src:t:)")));
- (ComposeAppSkikoColorFilter *)makeLightingColorMul:(int32_t)colorMul colorAdd:(int32_t)colorAdd __attribute__((swift_name("makeLighting(colorMul:colorAdd:)")));
- (ComposeAppSkikoColorFilter *)makeMatrixMatrix:(ComposeAppSkikoColorMatrix *)matrix __attribute__((swift_name("makeMatrix(matrix:)")));
- (ComposeAppSkikoColorFilter *)makeOverdrawColors:(ComposeAppKotlinIntArray *)colors __attribute__((swift_name("makeOverdraw(colors:)")));
- (ComposeAppSkikoColorFilter *)makeTableTable:(ComposeAppKotlinByteArray *)table __attribute__((swift_name("makeTable(table:)")));
- (ComposeAppSkikoColorFilter *)makeTableARGBA:(ComposeAppKotlinByteArray * _Nullable)a r:(ComposeAppKotlinByteArray * _Nullable)r g:(ComposeAppKotlinByteArray * _Nullable)g b:(ComposeAppKotlinByteArray * _Nullable)b __attribute__((swift_name("makeTableARGB(a:r:g:b:)")));
@property (readonly) ComposeAppSkikoColorFilter *luma __attribute__((swift_name("luma")));
@property (readonly) ComposeAppSkikoColorFilter *sRGBToLinearGamma __attribute__((swift_name("sRGBToLinearGamma")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMaskFilter.Companion")))
@interface ComposeAppSkikoMaskFilterCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoMaskFilterCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoMaskFilter *)makeBlurMode:(ComposeAppSkikoFilterBlurMode *)mode sigma:(float)sigma respectCTM:(BOOL)respectCTM __attribute__((swift_name("makeBlur(mode:sigma:respectCTM:)")));
- (ComposeAppSkikoMaskFilter *)makeClipMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("makeClip(min:max:)")));
- (ComposeAppSkikoMaskFilter *)makeGammaGamma:(float)gamma __attribute__((swift_name("makeGamma(gamma:)")));
- (ComposeAppSkikoMaskFilter *)makeShaderS:(ComposeAppSkikoShader * _Nullable)s __attribute__((swift_name("makeShader(s:)")));
- (ComposeAppSkikoMaskFilter *)makeTableTable:(ComposeAppKotlinByteArray *)table __attribute__((swift_name("makeTable(table:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEffect.Companion")))
@interface ComposeAppSkikoPathEffectCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoPathEffectCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoPathEffect *)makeCornerRadius:(float)radius __attribute__((swift_name("makeCorner(radius:)")));
- (ComposeAppSkikoPathEffect *)makeDashIntervals:(ComposeAppKotlinFloatArray *)intervals phase:(float)phase __attribute__((swift_name("makeDash(intervals:phase:)")));
- (ComposeAppSkikoPathEffect *)makeDiscreteSegLength:(float)segLength dev:(float)dev seed:(int32_t)seed __attribute__((swift_name("makeDiscrete(segLength:dev:seed:)")));
- (ComposeAppSkikoPathEffect *)makeLine2DWidth:(float)width matrix:(ComposeAppSkikoMatrix33 *)matrix __attribute__((swift_name("makeLine2D(width:matrix:)")));
- (ComposeAppSkikoPathEffect *)makePath1DPath:(ComposeAppSkikoPath *)path advance:(float)advance phase:(float)phase style:(ComposeAppSkikoPathEffectStyle *)style __attribute__((swift_name("makePath1D(path:advance:phase:style:)")));
- (ComposeAppSkikoPathEffect *)makePath2DMatrix:(ComposeAppSkikoMatrix33 *)matrix path:(ComposeAppSkikoPath *)path __attribute__((swift_name("makePath2D(matrix:path:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoISize")))
@interface ComposeAppSkikoISize : ComposeAppBase
@property (class, readonly, getter=companion) ComposeAppSkikoISizeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)area __attribute__((swift_name("area()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isZero __attribute__((swift_name("isZero()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPoint")))
@interface ComposeAppSkikoPoint : ComposeAppBase
- (instancetype)initWithX:(float)x y:(float)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoPointCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (ComposeAppSkikoPoint *)offsetVec:(ComposeAppSkikoPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (ComposeAppSkikoPoint *)offsetDx:(float)dx dy:(float)dy __attribute__((swift_name("offset(dx:dy:)")));
- (ComposeAppSkikoPoint *)scaleScale:(float)scale __attribute__((swift_name("scale(scale:)")));
- (ComposeAppSkikoPoint *)scaleSx:(float)sx sy:(float)sy __attribute__((swift_name("scale(sx:sy:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoGradientStyle")))
@interface ComposeAppSkikoGradientStyle : ComposeAppBase
- (instancetype)initWithTileMode:(ComposeAppSkikoFilterTileMode *)tileMode isPremul:(BOOL)isPremul localMatrix:(ComposeAppSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("init(tileMode:isPremul:localMatrix:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoGradientStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (ComposeAppSkikoGradientStyle *)withLocalMatrix_localMatrix:(ComposeAppSkikoMatrix33 *)_localMatrix __attribute__((swift_name("withLocalMatrix(_localMatrix:)")));
- (ComposeAppSkikoGradientStyle *)withPremul_premul:(BOOL)_premul __attribute__((swift_name("withPremul(_premul:)")));
- (ComposeAppSkikoGradientStyle *)withTileMode_tileMode:(ComposeAppSkikoFilterTileMode *)_tileMode __attribute__((swift_name("withTileMode(_tileMode:)")));
@property (readonly) BOOL isPremul __attribute__((swift_name("isPremul")));
@property (readonly) ComposeAppSkikoMatrix33 * _Nullable localMatrix __attribute__((swift_name("localMatrix")));
@property (readonly) ComposeAppSkikoFilterTileMode *tileMode __attribute__((swift_name("tileMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIRect")))
@interface ComposeAppSkikoIRect : ComposeAppBase
@property (class, readonly, getter=companion) ComposeAppSkikoIRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (ComposeAppSkikoIRect * _Nullable)intersectOther:(ComposeAppSkikoIRect *)other __attribute__((swift_name("intersect(other:)")));
- (ComposeAppSkikoIRect *)offsetVec:(ComposeAppSkikoIPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (ComposeAppSkikoIRect *)offsetDx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("offset(dx:dy:)")));
- (ComposeAppSkikoRect *)toRect __attribute__((swift_name("toRect()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t bottom __attribute__((swift_name("bottom")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t left __attribute__((swift_name("left")));
@property (readonly) int32_t right __attribute__((swift_name("right")));
@property (readonly) int32_t top __attribute__((swift_name("top")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFilterTileMode")))
@interface ComposeAppSkikoFilterTileMode : ComposeAppKotlinEnum<ComposeAppSkikoFilterTileMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoFilterTileMode *clamp __attribute__((swift_name("clamp")));
@property (class, readonly) ComposeAppSkikoFilterTileMode *repeat __attribute__((swift_name("repeat")));
@property (class, readonly) ComposeAppSkikoFilterTileMode *mirror __attribute__((swift_name("mirror")));
@property (class, readonly) ComposeAppSkikoFilterTileMode *decal __attribute__((swift_name("decal")));
+ (ComposeAppKotlinArray<ComposeAppSkikoFilterTileMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoFilterTileMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorChannel")))
@interface ComposeAppSkikoColorChannel : ComposeAppKotlinEnum<ComposeAppSkikoColorChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoColorChannel *r __attribute__((swift_name("r")));
@property (class, readonly) ComposeAppSkikoColorChannel *g __attribute__((swift_name("g")));
@property (class, readonly) ComposeAppSkikoColorChannel *b __attribute__((swift_name("b")));
@property (class, readonly) ComposeAppSkikoColorChannel *a __attribute__((swift_name("a")));
+ (ComposeAppKotlinArray<ComposeAppSkikoColorChannel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoColorChannel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("SkikoIHasImageInfo")))
@protocol ComposeAppSkikoIHasImageInfo
@required
@property (readonly) ComposeAppSkikoColorAlphaType *alphaType __attribute__((swift_name("alphaType")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) ComposeAppSkikoColorInfo *colorInfo __attribute__((swift_name("colorInfo")));
@property (readonly) ComposeAppSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) ComposeAppSkikoColorType *colorType __attribute__((swift_name("colorType")));
@property (readonly) int32_t height_ __attribute__((swift_name("height_")));
@property (readonly) ComposeAppSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@property (readonly) int32_t width_ __attribute__((swift_name("width_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImage")))
@interface ComposeAppSkikoImage : ComposeAppSkikoRefCnt <ComposeAppSkikoIHasImageInfo>

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoImageCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppSkikoData * _Nullable)encodeToDataFormat:(ComposeAppSkikoEncodedImageFormat *)format quality:(int32_t)quality __attribute__((swift_name("encodeToData(format:quality:)")));
- (ComposeAppSkikoShader *)makeShaderLocalMatrix:(ComposeAppSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(localMatrix:)")));
- (ComposeAppSkikoShader *)makeShaderTmx:(ComposeAppSkikoFilterTileMode *)tmx tmy:(ComposeAppSkikoFilterTileMode *)tmy localMatrix:(ComposeAppSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:localMatrix:)")));
- (ComposeAppSkikoShader *)makeShaderTmx:(ComposeAppSkikoFilterTileMode *)tmx tmy:(ComposeAppSkikoFilterTileMode *)tmy sampling:(id<ComposeAppSkikoSamplingMode>)sampling localMatrix:(ComposeAppSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:sampling:localMatrix:)")));
- (ComposeAppSkikoPixmap * _Nullable)peekPixels __attribute__((swift_name("peekPixels()")));
- (BOOL)peekPixelsPixmap:(ComposeAppSkikoPixmap * _Nullable)pixmap __attribute__((swift_name("peekPixels(pixmap:)")));
- (BOOL)readPixelsDst:(ComposeAppSkikoBitmap *)dst __attribute__((swift_name("readPixels(dst:)")));
- (BOOL)readPixelsContext:(ComposeAppSkikoDirectContext *)context dst:(ComposeAppSkikoBitmap *)dst __attribute__((swift_name("readPixels(context:dst:)")));
- (BOOL)readPixelsDst:(ComposeAppSkikoBitmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(dst:srcX:srcY:)")));
- (BOOL)readPixelsContext:(ComposeAppSkikoDirectContext *)context dst:(ComposeAppSkikoBitmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(context:dst:srcX:srcY:)")));
- (BOOL)readPixelsDst:(ComposeAppSkikoPixmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY cache:(BOOL)cache __attribute__((swift_name("readPixels(dst:srcX:srcY:cache:)")));
- (BOOL)readPixelsContext:(ComposeAppSkikoDirectContext * _Nullable)context dst:(ComposeAppSkikoBitmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY cache:(BOOL)cache __attribute__((swift_name("readPixels(context:dst:srcX:srcY:cache:)")));
- (BOOL)scalePixelsDst:(ComposeAppSkikoPixmap *)dst samplingMode:(id<ComposeAppSkikoSamplingMode>)samplingMode cache:(BOOL)cache __attribute__((swift_name("scalePixels(dst:samplingMode:cache:)")));
@property (readonly) ComposeAppSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@end

__attribute__((swift_name("SkikoRect")))
@interface ComposeAppSkikoRect : ComposeAppBase
- (instancetype)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("init(left:top:right:bottom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (ComposeAppSkikoRect *)inflateSpread:(float)spread __attribute__((swift_name("inflate(spread:)")));
- (ComposeAppSkikoRect * _Nullable)intersectOther:(ComposeAppSkikoRect *)other __attribute__((swift_name("intersect(other:)")));
- (ComposeAppSkikoRect *)offsetVec:(ComposeAppSkikoPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (ComposeAppSkikoRect *)offsetDx:(float)dx dy:(float)dy __attribute__((swift_name("offset(dx:dy:)")));
- (ComposeAppSkikoRect *)scaleScale:(float)scale __attribute__((swift_name("scale(scale:)")));
- (ComposeAppSkikoRect *)scaleSx:(float)sx sy_:(float)sy __attribute__((swift_name("scale(sx:sy_:)")));
- (ComposeAppSkikoIRect *)toIRect __attribute__((swift_name("toIRect()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float bottom __attribute__((swift_name("bottom")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) float left __attribute__((swift_name("left")));
@property (readonly) float right __attribute__((swift_name("right")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("SkikoSamplingMode")))
@protocol ComposeAppSkikoSamplingMode
@required
- (int64_t)_pack __attribute__((swift_name("_pack()"))) __attribute__((deprecated("Long can't be used because Long is an object in kotlin/js. Consider using _packedInt1 and _packedInt2")));
- (int32_t)_packedInt1 __attribute__((swift_name("_packedInt1()")));
- (int32_t)_packedInt2 __attribute__((swift_name("_packedInt2()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix33")))
@interface ComposeAppSkikoMatrix33 : ComposeAppBase
- (instancetype)initWithMat:(ComposeAppKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoMatrix33Companion *companion __attribute__((swift_name("companion")));
- (ComposeAppSkikoMatrix44 *)asMatrix44 __attribute__((swift_name("asMatrix44()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (ComposeAppSkikoMatrix33 *)makeConcatOther:(ComposeAppSkikoMatrix33 *)other __attribute__((swift_name("makeConcat(other:)")));
- (ComposeAppSkikoMatrix33 *)makePreScaleSx:(float)sx sy:(float)sy __attribute__((swift_name("makePreScale(sx:sy:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeShaderBuilder")))
@interface ComposeAppSkikoRuntimeShaderBuilder : ComposeAppSkikoManaged
- (instancetype)initWithEffect:(ComposeAppSkikoRuntimeEffect *)effect __attribute__((swift_name("init(effect:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoRuntimeShaderBuilderCompanion *companion __attribute__((swift_name("companion")));
- (void)childName:(NSString *)name colorFilter:(ComposeAppSkikoColorFilter *)colorFilter __attribute__((swift_name("child(name:colorFilter:)")));
- (void)childName:(NSString *)name shader:(ComposeAppSkikoShader *)shader __attribute__((swift_name("child(name:shader:)")));
- (ComposeAppSkikoShader *)makeShaderLocalMatrix:(ComposeAppSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(localMatrix:)")));
- (void)uniformName:(NSString *)name value:(float)value __attribute__((swift_name("uniform(name:value:)")));
- (void)uniformName:(NSString *)name value_:(ComposeAppKotlinFloatArray *)value __attribute__((swift_name("uniform(name:value_:)")));
- (void)uniformName:(NSString *)name value__:(int32_t)value __attribute__((swift_name("uniform(name:value__:)")));
- (void)uniformName:(NSString *)name value___:(ComposeAppSkikoMatrix22 *)value __attribute__((swift_name("uniform(name:value___:)")));
- (void)uniformName:(NSString *)name value____:(ComposeAppSkikoMatrix33 *)value __attribute__((swift_name("uniform(name:value____:)")));
- (void)uniformName:(NSString *)name value_____:(ComposeAppSkikoMatrix44 *)value __attribute__((swift_name("uniform(name:value_____:)")));
- (void)uniformName:(NSString *)name value1:(float)value1 value2:(float)value2 __attribute__((swift_name("uniform(name:value1:value2:)")));
- (void)uniformName:(NSString *)name value1:(int32_t)value1 value2_:(int32_t)value2 __attribute__((swift_name("uniform(name:value1:value2_:)")));
- (void)uniformName:(NSString *)name value1:(float)value1 value2:(float)value2 value3:(float)value3 __attribute__((swift_name("uniform(name:value1:value2:value3:)")));
- (void)uniformName:(NSString *)name value1:(int32_t)value1 value2:(int32_t)value2 value3_:(int32_t)value3 __attribute__((swift_name("uniform(name:value1:value2:value3_:)")));
- (void)uniformName:(NSString *)name value1:(float)value1 value2:(float)value2 value3:(float)value3 value4:(float)value4 __attribute__((swift_name("uniform(name:value1:value2:value3:value4:)")));
- (void)uniformName:(NSString *)name value1:(int32_t)value1 value2:(int32_t)value2 value3:(int32_t)value3 value4_:(int32_t)value4 __attribute__((swift_name("uniform(name:value1:value2:value3:value4_:)")));
@end

__attribute__((swift_name("KotlinShortIterator")))
@interface ComposeAppKotlinShortIterator : ComposeAppBase <ComposeAppKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ComposeAppShort *)next __attribute__((swift_name("next()")));
- (int16_t)nextShort __attribute__((swift_name("nextShort()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface ComposeAppKotlinKVariance : ComposeAppKotlinEnum<ComposeAppKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) ComposeAppKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) ComposeAppKotlinKVariance *out __attribute__((swift_name("out")));
+ (ComposeAppKotlinArray<ComposeAppKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface ComposeAppKotlinKTypeProjectionCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppKotlinKTypeProjection *)contravariantType:(id<ComposeAppKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppKotlinKTypeProjection *)covariantType:(id<ComposeAppKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppKotlinKTypeProjection *)invariantType:(id<ComposeAppKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) ComposeAppKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface ComposeAppKotlinByteIterator : ComposeAppBase <ComposeAppKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ComposeAppByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorMatrix")))
@interface ComposeAppSkikoColorMatrix : ComposeAppBase
- (instancetype)initWithMat:(ComposeAppKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoInversionMode")))
@interface ComposeAppSkikoInversionMode : ComposeAppKotlinEnum<ComposeAppSkikoInversionMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoInversionMode *no __attribute__((swift_name("no")));
@property (class, readonly) ComposeAppSkikoInversionMode *brightness __attribute__((swift_name("brightness")));
@property (class, readonly) ComposeAppSkikoInversionMode *lightness __attribute__((swift_name("lightness")));
+ (ComposeAppKotlinArray<ComposeAppSkikoInversionMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoInversionMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFilterBlurMode")))
@interface ComposeAppSkikoFilterBlurMode : ComposeAppKotlinEnum<ComposeAppSkikoFilterBlurMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoFilterBlurMode *normal __attribute__((swift_name("normal")));
@property (class, readonly) ComposeAppSkikoFilterBlurMode *solid __attribute__((swift_name("solid")));
@property (class, readonly) ComposeAppSkikoFilterBlurMode *outer __attribute__((swift_name("outer")));
@property (class, readonly) ComposeAppSkikoFilterBlurMode *inner __attribute__((swift_name("inner")));
+ (ComposeAppKotlinArray<ComposeAppSkikoFilterBlurMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoFilterBlurMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol ComposeAppKotlinIterable
@required
- (id<ComposeAppKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPath")))
@interface ComposeAppSkikoPath : ComposeAppSkikoManaged <ComposeAppKotlinIterable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoPathCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppSkikoPath *)addArcOval:(ComposeAppSkikoRect *)oval startAngle:(float)startAngle sweepAngle:(float)sweepAngle __attribute__((swift_name("addArc(oval:startAngle:sweepAngle:)")));
- (ComposeAppSkikoPath *)addCircleX:(float)x y:(float)y radius:(float)radius dir:(ComposeAppSkikoPathDirection *)dir __attribute__((swift_name("addCircle(x:y:radius:dir:)")));
- (ComposeAppSkikoPath *)addOvalOval:(ComposeAppSkikoRect *)oval dir:(ComposeAppSkikoPathDirection *)dir start:(int32_t)start __attribute__((swift_name("addOval(oval:dir:start:)")));
- (ComposeAppSkikoPath *)addPathSrc:(ComposeAppSkikoPath * _Nullable)src extend:(BOOL)extend __attribute__((swift_name("addPath(src:extend:)")));
- (ComposeAppSkikoPath *)addPathSrc:(ComposeAppSkikoPath * _Nullable)src matrix:(ComposeAppSkikoMatrix33 *)matrix extend:(BOOL)extend __attribute__((swift_name("addPath(src:matrix:extend:)")));
- (ComposeAppSkikoPath *)addPathSrc:(ComposeAppSkikoPath * _Nullable)src dx:(float)dx dy:(float)dy extend:(BOOL)extend __attribute__((swift_name("addPath(src:dx:dy:extend:)")));
- (ComposeAppSkikoPath *)addPolyPts:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> *)pts close:(BOOL)close __attribute__((swift_name("addPoly(pts:close:)")));
- (ComposeAppSkikoPath *)addPolyPts:(ComposeAppKotlinFloatArray *)pts close_:(BOOL)close __attribute__((swift_name("addPoly(pts:close_:)")));
- (ComposeAppSkikoPath *)addRRectRrect:(ComposeAppSkikoRRect *)rrect dir:(ComposeAppSkikoPathDirection *)dir start:(int32_t)start __attribute__((swift_name("addRRect(rrect:dir:start:)")));
- (ComposeAppSkikoPath *)addRectRect:(ComposeAppSkikoRect *)rect dir:(ComposeAppSkikoPathDirection *)dir start:(int32_t)start __attribute__((swift_name("addRect(rect:dir:start:)")));
- (ComposeAppSkikoPath *)arcToOval:(ComposeAppSkikoRect *)oval startAngle:(float)startAngle sweepAngle:(float)sweepAngle forceMoveTo:(BOOL)forceMoveTo __attribute__((swift_name("arcTo(oval:startAngle:sweepAngle:forceMoveTo:)")));
- (ComposeAppSkikoPath *)closePath __attribute__((swift_name("closePath()")));
- (ComposeAppSkikoRect *)computeTightBounds __attribute__((swift_name("computeTightBounds()")));
- (ComposeAppSkikoPath *)conicToP1:(ComposeAppSkikoPoint *)p1 p2:(ComposeAppSkikoPoint *)p2 w:(float)w __attribute__((swift_name("conicTo(p1:p2:w:)")));
- (ComposeAppSkikoPath *)conicToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 w:(float)w __attribute__((swift_name("conicTo(x1:y1:x2:y2:w:)")));
- (BOOL)conservativelyContainsRectRect:(ComposeAppSkikoRect *)rect __attribute__((swift_name("conservativelyContainsRect(rect:)")));
- (BOOL)containsP:(ComposeAppSkikoPoint *)p __attribute__((swift_name("contains(p:)")));
- (BOOL)containsX:(float)x y:(float)y __attribute__((swift_name("contains(x:y:)")));
- (ComposeAppSkikoPath *)cubicToP1:(ComposeAppSkikoPoint *)p1 p2:(ComposeAppSkikoPoint *)p2 p3:(ComposeAppSkikoPoint *)p3 __attribute__((swift_name("cubicTo(p1:p2:p3:)")));
- (ComposeAppSkikoPath *)cubicToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 x3:(float)x3 y3:(float)y3 __attribute__((swift_name("cubicTo(x1:y1:x2:y2:x3:y3:)")));
- (ComposeAppSkikoPath *)dump __attribute__((swift_name("dump()")));
- (ComposeAppSkikoPath *)dumpHex __attribute__((swift_name("dumpHex()")));
- (ComposeAppSkikoPath *)ellipticalArcToR:(ComposeAppSkikoPoint *)r xAxisRotate:(float)xAxisRotate arc:(ComposeAppSkikoPathEllipseArc *)arc direction:(ComposeAppSkikoPathDirection *)direction xy:(ComposeAppSkikoPoint *)xy __attribute__((swift_name("ellipticalArcTo(r:xAxisRotate:arc:direction:xy:)")));
- (ComposeAppSkikoPath *)ellipticalArcToRx:(float)rx ry:(float)ry xAxisRotate:(float)xAxisRotate arc:(ComposeAppSkikoPathEllipseArc *)arc direction:(ComposeAppSkikoPathDirection *)direction x:(float)x y:(float)y __attribute__((swift_name("ellipticalArcTo(rx:ry:xAxisRotate:arc:direction:x:y:)")));
- (ComposeAppSkikoPoint *)getPointIndex:(int32_t)index __attribute__((swift_name("getPoint(index:)")));
- (int32_t)getPointsPoints:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> * _Nullable)points max:(int32_t)max __attribute__((swift_name("getPoints(points:max:)")));
- (int32_t)getVerbsVerbs:(ComposeAppKotlinArray<ComposeAppSkikoPathVerb *> * _Nullable)verbs max:(int32_t)max __attribute__((swift_name("getVerbs(verbs:max:)")));
- (ComposeAppSkikoPath *)incReserveExtraPtCount:(int32_t)extraPtCount __attribute__((swift_name("incReserve(extraPtCount:)")));
- (BOOL)isInterpolatableCompare:(ComposeAppSkikoPath * _Nullable)compare __attribute__((swift_name("isInterpolatable(compare:)")));
- (ComposeAppSkikoPathSegmentIterator *)iterator __attribute__((swift_name("iterator()")));
- (ComposeAppSkikoPathSegmentIterator *)iteratorForceClose:(BOOL)forceClose __attribute__((swift_name("iterator(forceClose:)")));
- (ComposeAppSkikoPath *)lineToP:(ComposeAppSkikoPoint *)p __attribute__((swift_name("lineTo(p:)")));
- (ComposeAppSkikoPath *)lineToX:(float)x y:(float)y __attribute__((swift_name("lineTo(x:y:)")));
- (ComposeAppSkikoPath *)makeLerpEnding:(ComposeAppSkikoPath * _Nullable)ending weight:(float)weight __attribute__((swift_name("makeLerp(ending:weight:)")));
- (ComposeAppSkikoPath *)moveToP:(ComposeAppSkikoPoint *)p __attribute__((swift_name("moveTo(p:)")));
- (ComposeAppSkikoPath *)moveToX:(float)x y:(float)y __attribute__((swift_name("moveTo(x:y:)")));
- (ComposeAppSkikoPath *)offsetDx:(float)dx dy:(float)dy dst:(ComposeAppSkikoPath * _Nullable)dst __attribute__((swift_name("offset(dx:dy:dst:)")));
- (ComposeAppSkikoPath *)quadToP1:(ComposeAppSkikoPoint *)p1 p2:(ComposeAppSkikoPoint *)p2 __attribute__((swift_name("quadTo(p1:p2:)")));
- (ComposeAppSkikoPath *)quadToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 __attribute__((swift_name("quadTo(x1:y1:x2:y2:)")));
- (ComposeAppSkikoPath *)rConicToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 w:(float)w __attribute__((swift_name("rConicTo(dx1:dy1:dx2:dy2:w:)")));
- (ComposeAppSkikoPath *)rCubicToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 dx3:(float)dx3 dy3:(float)dy3 __attribute__((swift_name("rCubicTo(dx1:dy1:dx2:dy2:dx3:dy3:)")));
- (ComposeAppSkikoPath *)rEllipticalArcToRx:(float)rx ry:(float)ry xAxisRotate:(float)xAxisRotate arc:(ComposeAppSkikoPathEllipseArc *)arc direction:(ComposeAppSkikoPathDirection *)direction dx:(float)dx dy:(float)dy __attribute__((swift_name("rEllipticalArcTo(rx:ry:xAxisRotate:arc:direction:dx:dy:)")));
- (ComposeAppSkikoPath *)rLineToDx:(float)dx dy:(float)dy __attribute__((swift_name("rLineTo(dx:dy:)")));
- (ComposeAppSkikoPath *)rMoveToDx:(float)dx dy:(float)dy __attribute__((swift_name("rMoveTo(dx:dy:)")));
- (ComposeAppSkikoPath *)rQuadToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 __attribute__((swift_name("rQuadTo(dx1:dy1:dx2:dy2:)")));
- (ComposeAppSkikoPath *)reset __attribute__((swift_name("reset()")));
- (ComposeAppSkikoPath *)reverseAddPathSrc:(ComposeAppSkikoPath * _Nullable)src __attribute__((swift_name("reverseAddPath(src:)")));
- (ComposeAppSkikoPath *)rewind __attribute__((swift_name("rewind()")));
- (ComposeAppKotlinByteArray *)serializeToBytes __attribute__((swift_name("serializeToBytes()")));
- (ComposeAppSkikoPath *)setLastPtX:(float)x y:(float)y __attribute__((swift_name("setLastPt(x:y:)")));
- (ComposeAppSkikoPath *)setVolatileIsVolatile:(BOOL)isVolatile __attribute__((swift_name("setVolatile(isVolatile:)")));
- (ComposeAppSkikoPath *)swapOther:(ComposeAppSkikoPath * _Nullable)other __attribute__((swift_name("swap(other:)")));
- (ComposeAppSkikoPath *)tangentArcToP1:(ComposeAppSkikoPoint *)p1 p2:(ComposeAppSkikoPoint *)p2 radius:(float)radius __attribute__((swift_name("tangentArcTo(p1:p2:radius:)")));
- (ComposeAppSkikoPath *)tangentArcToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 radius:(float)radius __attribute__((swift_name("tangentArcTo(x1:y1:x2:y2:radius:)")));
- (ComposeAppSkikoPath *)transformMatrix:(ComposeAppSkikoMatrix33 *)matrix applyPerspectiveClip:(BOOL)applyPerspectiveClip __attribute__((swift_name("transform(matrix:applyPerspectiveClip:)")));
- (ComposeAppSkikoPath *)transformMatrix:(ComposeAppSkikoMatrix33 *)matrix dst:(ComposeAppSkikoPath * _Nullable)dst applyPerspectiveClip:(BOOL)applyPerspectiveClip __attribute__((swift_name("transform(matrix:dst:applyPerspectiveClip:)")));
- (ComposeAppSkikoPath *)updateBoundsCache __attribute__((swift_name("updateBoundsCache()")));
@property (readonly) void * _Nullable approximateBytesUsed __attribute__((swift_name("approximateBytesUsed")));
@property (readonly) ComposeAppKotlinArray<ComposeAppSkikoPoint *> * _Nullable asLine __attribute__((swift_name("asLine")));
@property (readonly) ComposeAppSkikoRect *bounds __attribute__((swift_name("bounds")));
@property ComposeAppSkikoPathFillMode *fillMode __attribute__((swift_name("fillMode")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) BOOL isConvex __attribute__((swift_name("isConvex")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isFinite __attribute__((swift_name("isFinite")));
@property (readonly) BOOL isLastContourClosed __attribute__((swift_name("isLastContourClosed")));
@property (readonly) ComposeAppSkikoRect * _Nullable isOval __attribute__((swift_name("isOval")));
@property (readonly) ComposeAppSkikoRRect * _Nullable isRRect __attribute__((swift_name("isRRect")));
@property (readonly) ComposeAppSkikoRect * _Nullable isRect __attribute__((swift_name("isRect")));
@property (readonly) BOOL isValid __attribute__((swift_name("isValid")));
@property BOOL isVolatile __attribute__((swift_name("isVolatile")));
@property ComposeAppSkikoPoint *lastPt __attribute__((swift_name("lastPt")));
@property (readonly) ComposeAppKotlinArray<ComposeAppSkikoPoint *> *points __attribute__((swift_name("points")));
@property (readonly) int32_t pointsCount __attribute__((swift_name("pointsCount")));
@property (readonly) int32_t segmentMasks __attribute__((swift_name("segmentMasks")));
@property (readonly) ComposeAppKotlinArray<ComposeAppSkikoPathVerb *> *verbs __attribute__((swift_name("verbs")));
@property (readonly) int32_t verbsCount __attribute__((swift_name("verbsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEffect.Style")))
@interface ComposeAppSkikoPathEffectStyle : ComposeAppKotlinEnum<ComposeAppSkikoPathEffectStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoPathEffectStyle *translate __attribute__((swift_name("translate")));
@property (class, readonly) ComposeAppSkikoPathEffectStyle *rotate __attribute__((swift_name("rotate")));
@property (class, readonly) ComposeAppSkikoPathEffectStyle *morph __attribute__((swift_name("morph")));
+ (ComposeAppKotlinArray<ComposeAppSkikoPathEffectStyle *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoPathEffectStyle *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoISize.Companion")))
@interface ComposeAppSkikoISizeCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoISizeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoISize *)makeW:(int32_t)w h:(int32_t)h __attribute__((swift_name("make(w:h:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoISize *)makeEmpty __attribute__((swift_name("makeEmpty()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPoint.Companion")))
@interface ComposeAppSkikoPointCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoPointCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKotlinFloatArray * _Nullable)flattenArrayPts:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> * _Nullable)pts __attribute__((swift_name("flattenArray(pts:)")));
- (ComposeAppKotlinArray<ComposeAppSkikoPoint *> * _Nullable)fromArrayPts:(ComposeAppKotlinFloatArray * _Nullable)pts __attribute__((swift_name("fromArray(pts:)")));
@property (readonly) ComposeAppSkikoPoint *ZERO __attribute__((swift_name("ZERO")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoGradientStyle.Companion")))
@interface ComposeAppSkikoGradientStyleCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoGradientStyleCompanion *shared __attribute__((swift_name("shared")));
@property ComposeAppSkikoGradientStyle *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIRect.Companion")))
@interface ComposeAppSkikoIRectCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoIRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoIRect *)makeLTRBL:(int32_t)l t:(int32_t)t r:(int32_t)r b:(int32_t)b __attribute__((swift_name("makeLTRB(l:t:r:b:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoIRect *)makeWHW:(int32_t)w h:(int32_t)h __attribute__((swift_name("makeWH(w:h:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoIRect *)makeXYWHL:(int32_t)l t:(int32_t)t w:(int32_t)w h:(int32_t)h __attribute__((swift_name("makeXYWH(l:t:w:h:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIPoint")))
@interface ComposeAppSkikoIPoint : ComposeAppBase
- (instancetype)initWithX:(int32_t)x y:(int32_t)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoIPointCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (ComposeAppSkikoIPoint *)offsetVec:(ComposeAppSkikoIPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (ComposeAppSkikoIPoint *)offsetDx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("offset(dx:dy:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) int32_t x __attribute__((swift_name("x")));
@property (readonly) int32_t y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorAlphaType")))
@interface ComposeAppSkikoColorAlphaType : ComposeAppKotlinEnum<ComposeAppSkikoColorAlphaType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoColorAlphaType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) ComposeAppSkikoColorAlphaType *opaque __attribute__((swift_name("opaque")));
@property (class, readonly) ComposeAppSkikoColorAlphaType *premul __attribute__((swift_name("premul")));
@property (class, readonly) ComposeAppSkikoColorAlphaType *unpremul __attribute__((swift_name("unpremul")));
+ (ComposeAppKotlinArray<ComposeAppSkikoColorAlphaType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoColorAlphaType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorInfo")))
@interface ComposeAppSkikoColorInfo : ComposeAppBase
- (instancetype)initWithColorType:(ComposeAppSkikoColorType *)colorType alphaType:(ComposeAppSkikoColorAlphaType *)alphaType colorSpace:(ComposeAppSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("init(colorType:alphaType:colorSpace:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoColorInfoCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (ComposeAppSkikoColorInfo *)withAlphaType_alphaType:(ComposeAppSkikoColorAlphaType *)_alphaType __attribute__((swift_name("withAlphaType(_alphaType:)")));
- (ComposeAppSkikoColorInfo *)withColorSpace_colorSpace:(ComposeAppSkikoColorSpace * _Nullable)_colorSpace __attribute__((swift_name("withColorSpace(_colorSpace:)")));
- (ComposeAppSkikoColorInfo *)withColorType_colorType:(ComposeAppSkikoColorType *)_colorType __attribute__((swift_name("withColorType(_colorType:)")));
@property (readonly) ComposeAppSkikoColorAlphaType *alphaType __attribute__((swift_name("alphaType")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) ComposeAppSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) ComposeAppSkikoColorType *colorType __attribute__((swift_name("colorType")));
@property (readonly) BOOL isGammaCloseToSRGB __attribute__((swift_name("isGammaCloseToSRGB")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorType")))
@interface ComposeAppSkikoColorType : ComposeAppKotlinEnum<ComposeAppSkikoColorType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoColorTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) ComposeAppSkikoColorType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) ComposeAppSkikoColorType *alpha8 __attribute__((swift_name("alpha8")));
@property (class, readonly) ComposeAppSkikoColorType *rgb565 __attribute__((swift_name("rgb565")));
@property (class, readonly) ComposeAppSkikoColorType *argb4444 __attribute__((swift_name("argb4444")));
@property (class, readonly) ComposeAppSkikoColorType *rgba8888 __attribute__((swift_name("rgba8888")));
@property (class, readonly) ComposeAppSkikoColorType *rgb888x __attribute__((swift_name("rgb888x")));
@property (class, readonly) ComposeAppSkikoColorType *bgra8888 __attribute__((swift_name("bgra8888")));
@property (class, readonly) ComposeAppSkikoColorType *rgba1010102 __attribute__((swift_name("rgba1010102")));
@property (class, readonly) ComposeAppSkikoColorType *bgra1010102 __attribute__((swift_name("bgra1010102")));
@property (class, readonly) ComposeAppSkikoColorType *rgb101010x __attribute__((swift_name("rgb101010x")));
@property (class, readonly) ComposeAppSkikoColorType *bgr101010x __attribute__((swift_name("bgr101010x")));
@property (class, readonly) ComposeAppSkikoColorType *bgr101010xXr __attribute__((swift_name("bgr101010xXr")));
@property (class, readonly) ComposeAppSkikoColorType *bgra10101010Xr __attribute__((swift_name("bgra10101010Xr")));
@property (class, readonly) ComposeAppSkikoColorType *rgba10x6 __attribute__((swift_name("rgba10x6")));
@property (class, readonly) ComposeAppSkikoColorType *gray8 __attribute__((swift_name("gray8")));
@property (class, readonly) ComposeAppSkikoColorType *rgbaF16norm __attribute__((swift_name("rgbaF16norm")));
@property (class, readonly) ComposeAppSkikoColorType *rgbaF16 __attribute__((swift_name("rgbaF16")));
@property (class, readonly) ComposeAppSkikoColorType *rgbaF32 __attribute__((swift_name("rgbaF32")));
@property (class, readonly) ComposeAppSkikoColorType *r8g8Unorm __attribute__((swift_name("r8g8Unorm")));
@property (class, readonly) ComposeAppSkikoColorType *a16Float __attribute__((swift_name("a16Float")));
@property (class, readonly) ComposeAppSkikoColorType *r16g16Float __attribute__((swift_name("r16g16Float")));
@property (class, readonly) ComposeAppSkikoColorType *a16Unorm __attribute__((swift_name("a16Unorm")));
@property (class, readonly) ComposeAppSkikoColorType *r16g16Unorm __attribute__((swift_name("r16g16Unorm")));
@property (class, readonly) ComposeAppSkikoColorType *r16g16b16a16Unorm __attribute__((swift_name("r16g16b16a16Unorm")));
+ (ComposeAppKotlinArray<ComposeAppSkikoColorType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoColorType *> *entries __attribute__((swift_name("entries")));
- (int64_t)computeOffsetX:(int32_t)x y:(int32_t)y rowBytes:(int64_t)rowBytes __attribute__((swift_name("computeOffset(x:y:rowBytes:)")));
- (float)getAColor:(int8_t)color __attribute__((swift_name("getA(color:)")));
- (float)getAColor_:(int32_t)color __attribute__((swift_name("getA(color_:)")));
- (float)getAColor__:(int16_t)color __attribute__((swift_name("getA(color__:)")));
- (float)getBColor:(int8_t)color __attribute__((swift_name("getB(color:)")));
- (float)getBColor_:(int32_t)color __attribute__((swift_name("getB(color_:)")));
- (float)getBColor__:(int16_t)color __attribute__((swift_name("getB(color__:)")));
- (float)getGColor:(int8_t)color __attribute__((swift_name("getG(color:)")));
- (float)getGColor_:(int32_t)color __attribute__((swift_name("getG(color_:)")));
- (float)getGColor__:(int16_t)color __attribute__((swift_name("getG(color__:)")));
- (float)getRColor:(int8_t)color __attribute__((swift_name("getR(color:)")));
- (float)getRColor_:(int32_t)color __attribute__((swift_name("getR(color_:)")));
- (float)getRColor__:(int16_t)color __attribute__((swift_name("getR(color__:)")));
- (ComposeAppSkikoColorAlphaType * _Nullable)validateAlphaTypeAlphaType:(ComposeAppSkikoColorAlphaType *)alphaType __attribute__((swift_name("validateAlphaType(alphaType:)")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) BOOL isAlwaysOpaque __attribute__((swift_name("isAlwaysOpaque")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageInfo")))
@interface ComposeAppSkikoImageInfo : ComposeAppBase
- (instancetype)initWithColorInfo:(ComposeAppSkikoColorInfo *)colorInfo width:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(colorInfo:width:height:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height colorType:(ComposeAppSkikoColorType *)colorType alphaType:(ComposeAppSkikoColorAlphaType *)alphaType __attribute__((swift_name("init(width:height:colorType:alphaType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height colorType:(ComposeAppSkikoColorType *)colorType alphaType:(ComposeAppSkikoColorAlphaType *)alphaType colorSpace:(ComposeAppSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("init(width:height:colorType:alphaType:colorSpace:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoImageInfoCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)computeByteSizeRowBytes:(int32_t)rowBytes __attribute__((swift_name("computeByteSize(rowBytes:)")));
- (int32_t)computeMinByteSize __attribute__((swift_name("computeMinByteSize()")));
- (int64_t)computeOffsetX:(int32_t)x y:(int32_t)y rowBytes:(int64_t)rowBytes __attribute__((swift_name("computeOffset(x:y:rowBytes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isRowBytesValidRowBytes:(int64_t)rowBytes __attribute__((swift_name("isRowBytesValid(rowBytes:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (ComposeAppSkikoImageInfo *)withColorAlphaTypeAlphaType:(ComposeAppSkikoColorAlphaType *)alphaType __attribute__((swift_name("withColorAlphaType(alphaType:)")));
- (ComposeAppSkikoImageInfo *)withColorInfo_colorInfo:(ComposeAppSkikoColorInfo *)_colorInfo __attribute__((swift_name("withColorInfo(_colorInfo:)")));
- (ComposeAppSkikoImageInfo *)withColorSpaceColorSpace:(ComposeAppSkikoColorSpace *)colorSpace __attribute__((swift_name("withColorSpace(colorSpace:)")));
- (ComposeAppSkikoImageInfo *)withColorTypeColorType:(ComposeAppSkikoColorType *)colorType __attribute__((swift_name("withColorType(colorType:)")));
- (ComposeAppSkikoImageInfo *)withHeight_height:(int32_t)_height __attribute__((swift_name("withHeight(_height:)")));
- (ComposeAppSkikoImageInfo *)withWidth_width:(int32_t)_width __attribute__((swift_name("withWidth(_width:)")));
- (ComposeAppSkikoImageInfo *)withWidthHeightWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("withWidthHeight(width:height:)")));
@property (readonly) ComposeAppSkikoIRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) ComposeAppSkikoColorAlphaType *colorAlphaType __attribute__((swift_name("colorAlphaType")));
@property (readonly) ComposeAppSkikoColorInfo *colorInfo __attribute__((swift_name("colorInfo")));
@property (readonly) ComposeAppSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) ComposeAppSkikoColorType *colorType __attribute__((swift_name("colorType")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isGammaCloseToSRGB __attribute__((swift_name("isGammaCloseToSRGB")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) int32_t minRowBytes __attribute__((swift_name("minRowBytes")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImage.Companion")))
@interface ComposeAppSkikoImageCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoImageCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoImage *)makeFromBitmapBitmap:(ComposeAppSkikoBitmap *)bitmap __attribute__((swift_name("makeFromBitmap(bitmap:)")));
- (ComposeAppSkikoImage *)makeFromEncodedBytes:(ComposeAppKotlinByteArray *)bytes __attribute__((swift_name("makeFromEncoded(bytes:)")));
- (ComposeAppSkikoImage *)makeFromPixmapPixmap:(ComposeAppSkikoPixmap *)pixmap __attribute__((swift_name("makeFromPixmap(pixmap:)")));
- (ComposeAppSkikoImage *)makeRasterImageInfo:(ComposeAppSkikoImageInfo *)imageInfo bytes:(ComposeAppKotlinByteArray *)bytes rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRaster(imageInfo:bytes:rowBytes:)")));
- (ComposeAppSkikoImage *)makeRasterImageInfo:(ComposeAppSkikoImageInfo *)imageInfo data:(ComposeAppSkikoData *)data rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRaster(imageInfo:data:rowBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoData")))
@interface ComposeAppSkikoData : ComposeAppSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoDataCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (ComposeAppKotlinByteArray *)getBytesOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("getBytes(offset:length:)")));
- (ComposeAppSkikoData *)makeCopy __attribute__((swift_name("makeCopy()")));
- (ComposeAppSkikoData *)makeSubsetOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("makeSubset(offset:length:)")));
- (void * _Nullable)writableData __attribute__((swift_name("writableData()")));
@property (readonly) ComposeAppKotlinByteArray *bytes __attribute__((swift_name("bytes")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoEncodedImageFormat")))
@interface ComposeAppSkikoEncodedImageFormat : ComposeAppKotlinEnum<ComposeAppSkikoEncodedImageFormat *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoEncodedImageFormat *bmp __attribute__((swift_name("bmp")));
@property (class, readonly) ComposeAppSkikoEncodedImageFormat *gif __attribute__((swift_name("gif")));
@property (class, readonly) ComposeAppSkikoEncodedImageFormat *ico __attribute__((swift_name("ico")));
@property (class, readonly) ComposeAppSkikoEncodedImageFormat *jpeg __attribute__((swift_name("jpeg")));
@property (class, readonly) ComposeAppSkikoEncodedImageFormat *png __attribute__((swift_name("png")));
@property (class, readonly) ComposeAppSkikoEncodedImageFormat *wbmp __attribute__((swift_name("wbmp")));
@property (class, readonly) ComposeAppSkikoEncodedImageFormat *webp __attribute__((swift_name("webp")));
@property (class, readonly) ComposeAppSkikoEncodedImageFormat *pkm __attribute__((swift_name("pkm")));
@property (class, readonly) ComposeAppSkikoEncodedImageFormat *ktx __attribute__((swift_name("ktx")));
@property (class, readonly) ComposeAppSkikoEncodedImageFormat *astc __attribute__((swift_name("astc")));
@property (class, readonly) ComposeAppSkikoEncodedImageFormat *dng __attribute__((swift_name("dng")));
@property (class, readonly) ComposeAppSkikoEncodedImageFormat *heif __attribute__((swift_name("heif")));
+ (ComposeAppKotlinArray<ComposeAppSkikoEncodedImageFormat *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoEncodedImageFormat *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixmap")))
@interface ComposeAppSkikoPixmap : ComposeAppSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoPixmapCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)computeByteSize __attribute__((swift_name("computeByteSize()")));
- (BOOL)computeIsOpaque __attribute__((swift_name("computeIsOpaque()")));
- (BOOL)eraseColor:(int32_t)color __attribute__((swift_name("erase(color:)")));
- (BOOL)eraseColor:(int32_t)color subset:(ComposeAppSkikoIRect *)subset __attribute__((swift_name("erase(color:subset:)")));
- (BOOL)extractSubsetSubsetPtr:(void * _Nullable)subsetPtr area:(ComposeAppSkikoIRect *)area __attribute__((swift_name("extractSubset(subsetPtr:area:)")));
- (BOOL)extractSubsetSubset:(ComposeAppSkikoPixmap *)subset area:(ComposeAppSkikoIRect *)area __attribute__((swift_name("extractSubset(subset:area:)")));
- (void * _Nullable)getAddrX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getAddr(x:y:)")));
- (float)getAlphaFX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getAlphaF(x:y:)")));
- (int32_t)getColorX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getColor(x:y:)")));
- (BOOL)readPixelsPixmap:(ComposeAppSkikoPixmap * _Nullable)pixmap __attribute__((swift_name("readPixels(pixmap:)")));
- (BOOL)readPixelsInfo:(ComposeAppSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes __attribute__((swift_name("readPixels(info:addr:rowBytes:)")));
- (BOOL)readPixelsPixmap:(ComposeAppSkikoPixmap *)pixmap srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(pixmap:srcX:srcY:)")));
- (BOOL)readPixelsInfo:(ComposeAppSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(info:addr:rowBytes:srcX:srcY:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetInfo:(ComposeAppSkikoImageInfo *)info buffer:(ComposeAppSkikoData *)buffer rowBytes:(int32_t)rowBytes __attribute__((swift_name("reset(info:buffer:rowBytes:)")));
- (void)resetInfo:(ComposeAppSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes underlyingMemoryOwner:(ComposeAppSkikoManaged * _Nullable)underlyingMemoryOwner __attribute__((swift_name("reset(info:addr:rowBytes:underlyingMemoryOwner:)")));
- (BOOL)scalePixelsDstPixmap:(ComposeAppSkikoPixmap * _Nullable)dstPixmap samplingMode:(id<ComposeAppSkikoSamplingMode>)samplingMode __attribute__((swift_name("scalePixels(dstPixmap:samplingMode:)")));
- (void)setColorSpaceColorSpace:(ComposeAppSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("setColorSpace(colorSpace:)")));
@property (readonly) void * _Nullable addr __attribute__((swift_name("addr")));
@property (readonly) ComposeAppSkikoData *buffer __attribute__((swift_name("buffer")));
@property (readonly) ComposeAppSkikoImageInfo *info __attribute__((swift_name("info")));
@property (readonly) int32_t rowBytes __attribute__((swift_name("rowBytes")));
@property (readonly) int32_t rowBytesAsPixels __attribute__((swift_name("rowBytesAsPixels")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBitmap")))
@interface ComposeAppSkikoBitmap : ComposeAppSkikoManaged <ComposeAppSkikoIHasImageInfo>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoBitmapCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)doAllocN32PixelsWidth:(int32_t)width height:(int32_t)height opaque:(BOOL)opaque __attribute__((swift_name("doAllocN32Pixels(width:height:opaque:)")));
- (BOOL)doAllocPixels __attribute__((swift_name("doAllocPixels()")));
- (BOOL)doAllocPixelsImageInfo:(ComposeAppSkikoImageInfo *)imageInfo __attribute__((swift_name("doAllocPixels(imageInfo:)")));
- (BOOL)doAllocPixelsInfo:(ComposeAppSkikoImageInfo *)info rowBytes:(int32_t)rowBytes __attribute__((swift_name("doAllocPixels(info:rowBytes:)")));
- (BOOL)doAllocPixelsFlagsImageInfo:(ComposeAppSkikoImageInfo *)imageInfo zeroPixels:(BOOL)zeroPixels __attribute__((swift_name("doAllocPixelsFlags(imageInfo:zeroPixels:)")));
- (int32_t)computeByteSize __attribute__((swift_name("computeByteSize()")));
- (BOOL)computeIsOpaque __attribute__((swift_name("computeIsOpaque()")));
- (BOOL)drawsNothing __attribute__((swift_name("drawsNothing()")));
- (ComposeAppSkikoBitmap *)eraseColor:(int32_t)color __attribute__((swift_name("erase(color:)")));
- (ComposeAppSkikoBitmap *)eraseColor:(int32_t)color area:(ComposeAppSkikoIRect *)area __attribute__((swift_name("erase(color:area:)")));
- (BOOL)extractAlphaDst:(ComposeAppSkikoBitmap *)dst __attribute__((swift_name("extractAlpha(dst:)")));
- (ComposeAppSkikoIPoint * _Nullable)extractAlphaDst:(ComposeAppSkikoBitmap *)dst paint:(ComposeAppSkikoPaint * _Nullable)paint __attribute__((swift_name("extractAlpha(dst:paint:)")));
- (BOOL)extractSubsetDst:(ComposeAppSkikoBitmap *)dst subset:(ComposeAppSkikoIRect *)subset __attribute__((swift_name("extractSubset(dst:subset:)")));
- (float)getAlphafX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getAlphaf(x:y:)")));
- (int32_t)getColorX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getColor(x:y:)")));
- (BOOL)installPixelsPixels:(ComposeAppKotlinByteArray * _Nullable)pixels __attribute__((swift_name("installPixels(pixels:)")));
- (BOOL)installPixelsInfo:(ComposeAppSkikoImageInfo *)info pixels:(ComposeAppKotlinByteArray * _Nullable)pixels rowBytes:(int32_t)rowBytes __attribute__((swift_name("installPixels(info:pixels:rowBytes:)")));
- (ComposeAppSkikoBitmap *)makeClone __attribute__((swift_name("makeClone()")));
- (ComposeAppSkikoShader *)makeShaderLocalMatrix:(ComposeAppSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(localMatrix:)")));
- (ComposeAppSkikoShader *)makeShaderTmx:(ComposeAppSkikoFilterTileMode *)tmx tmy:(ComposeAppSkikoFilterTileMode *)tmy localMatrix:(ComposeAppSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:localMatrix:)")));
- (ComposeAppSkikoShader *)makeShaderTmx:(ComposeAppSkikoFilterTileMode *)tmx tmy:(ComposeAppSkikoFilterTileMode *)tmy sampling:(id<ComposeAppSkikoSamplingMode>)sampling localMatrix:(ComposeAppSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:sampling:localMatrix:)")));
- (ComposeAppSkikoBitmap *)notifyPixelsChanged __attribute__((swift_name("notifyPixelsChanged()")));
- (ComposeAppSkikoPixmap * _Nullable)peekPixels __attribute__((swift_name("peekPixels()")));
- (ComposeAppKotlinByteArray * _Nullable)readPixelsDstInfo:(ComposeAppSkikoImageInfo *)dstInfo dstRowBytes:(int32_t)dstRowBytes srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(dstInfo:dstRowBytes:srcX:srcY:)")));
- (ComposeAppSkikoBitmap *)reset __attribute__((swift_name("reset()")));
- (BOOL)setAlphaTypeAlphaType:(ComposeAppSkikoColorAlphaType *)alphaType __attribute__((swift_name("setAlphaType(alphaType:)")));
- (BOOL)setImageInfoImageInfo:(ComposeAppSkikoImageInfo *)imageInfo __attribute__((swift_name("setImageInfo(imageInfo:)")));
- (BOOL)setImageInfoImageInfo:(ComposeAppSkikoImageInfo *)imageInfo rowBytes:(int32_t)rowBytes __attribute__((swift_name("setImageInfo(imageInfo:rowBytes:)")));
- (ComposeAppSkikoBitmap *)setImmutable __attribute__((swift_name("setImmutable()")));
- (ComposeAppSkikoBitmap *)setPixelRefPixelRef:(ComposeAppSkikoPixelRef * _Nullable)pixelRef dx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("setPixelRef(pixelRef:dx:dy:)")));
- (void)swapOther:(ComposeAppSkikoBitmap *)other __attribute__((swift_name("swap(other:)")));
@property (readonly) ComposeAppSkikoIRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) ComposeAppSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@property (readonly) BOOL isImmutable __attribute__((swift_name("isImmutable")));
@property (readonly) BOOL isNull __attribute__((swift_name("isNull")));
@property (readonly) BOOL isReadyToDraw __attribute__((swift_name("isReadyToDraw")));
@property (readonly) ComposeAppSkikoPixelRef * _Nullable pixelRef __attribute__((swift_name("pixelRef")));
@property (readonly) ComposeAppSkikoIPoint *pixelRefOrigin __attribute__((swift_name("pixelRefOrigin")));
@property (readonly) int32_t rowBytes __attribute__((swift_name("rowBytes")));
@property (readonly) int32_t rowBytesAsPixels __attribute__((swift_name("rowBytesAsPixels")));
@property (readonly) ComposeAppSkikoIRect *subset __attribute__((swift_name("subset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoDirectContext")))
@interface ComposeAppSkikoDirectContext : ComposeAppSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoDirectContextCompanion *companion __attribute__((swift_name("companion")));
- (void)abandon __attribute__((swift_name("abandon()")));
- (ComposeAppSkikoDirectContext *)flush __attribute__((swift_name("flush()")));
- (ComposeAppSkikoDirectContext *)flushSurface:(ComposeAppSkikoSurface *)surface __attribute__((swift_name("flush(surface:)")));
- (void)flushAndSubmitSurface:(ComposeAppSkikoSurface *)surface syncCpu:(BOOL)syncCpu __attribute__((swift_name("flushAndSubmit(surface:syncCpu:)")));
- (ComposeAppSkikoDirectContext *)resetAll __attribute__((swift_name("resetAll()")));
- (ComposeAppSkikoDirectContext *)resetGLStates:(ComposeAppKotlinArray<ComposeAppSkikoGLBackendState *> *)states __attribute__((swift_name("resetGL(states:)")));
- (ComposeAppSkikoDirectContext *)resetGLAll __attribute__((swift_name("resetGLAll()")));
- (void)submitSyncCpu:(BOOL)syncCpu __attribute__((swift_name("submit(syncCpu:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRect.Companion")))
@interface ComposeAppSkikoRectCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b __attribute__((swift_name("makeLTRB(l:t:r:b:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoRect *)makeWHSize:(ComposeAppSkikoPoint *)size __attribute__((swift_name("makeWH(size:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoRect *)makeWHW:(float)w h:(float)h __attribute__((swift_name("makeWH(w:h:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h __attribute__((swift_name("makeXYWH(l:t:w:h:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix33.Companion")))
@interface ComposeAppSkikoMatrix33Companion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoMatrix33Companion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoMatrix33 *)makeRotateDeg:(float)deg __attribute__((swift_name("makeRotate(deg:)")));
- (ComposeAppSkikoMatrix33 *)makeRotateDeg:(float)deg pivot:(ComposeAppSkikoPoint *)pivot __attribute__((swift_name("makeRotate(deg:pivot:)")));
- (ComposeAppSkikoMatrix33 *)makeRotateDeg:(float)deg pivotx:(float)pivotx pivoty:(float)pivoty __attribute__((swift_name("makeRotate(deg:pivotx:pivoty:)")));
- (ComposeAppSkikoMatrix33 *)makeScaleS:(float)s __attribute__((swift_name("makeScale(s:)")));
- (ComposeAppSkikoMatrix33 *)makeScaleSx:(float)sx sy:(float)sy __attribute__((swift_name("makeScale(sx:sy:)")));
- (ComposeAppSkikoMatrix33 *)makeSkewSx:(float)sx sy:(float)sy __attribute__((swift_name("makeSkew(sx:sy:)")));
- (ComposeAppSkikoMatrix33 *)makeTranslateDx:(float)dx dy:(float)dy __attribute__((swift_name("makeTranslate(dx:dy:)")));
@property (readonly) ComposeAppSkikoMatrix33 *IDENTITY __attribute__((swift_name("IDENTITY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix44")))
@interface ComposeAppSkikoMatrix44 : ComposeAppBase
- (instancetype)initWithMat:(ComposeAppKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoMatrix44Companion *companion __attribute__((swift_name("companion")));
- (ComposeAppSkikoMatrix33 *)asMatrix33 __attribute__((swift_name("asMatrix33()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeEffect")))
@interface ComposeAppSkikoRuntimeEffect : ComposeAppSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoRuntimeEffectCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppSkikoShader *)makeShaderUniforms:(ComposeAppSkikoData * _Nullable)uniforms children:(ComposeAppKotlinArray<ComposeAppSkikoShader *> * _Nullable)children localMatrix:(ComposeAppSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(uniforms:children:localMatrix:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeShaderBuilder.Companion")))
@interface ComposeAppSkikoRuntimeShaderBuilderCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoRuntimeShaderBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix22")))
@interface ComposeAppSkikoMatrix22 : ComposeAppBase
- (instancetype)initWithMat:(ComposeAppKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoMatrix22Companion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPath.Companion")))
@interface ComposeAppSkikoPathCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoPathCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKotlinArray<ComposeAppSkikoPoint *> *)convertConicToQuadsP0:(ComposeAppSkikoPoint *)p0 p1:(ComposeAppSkikoPoint *)p1 p2:(ComposeAppSkikoPoint *)p2 w:(float)w pow2:(int32_t)pow2 __attribute__((swift_name("convertConicToQuads(p0:p1:p2:w:pow2:)")));
- (BOOL)isCubicDegenerateP1:(ComposeAppSkikoPoint *)p1 p2:(ComposeAppSkikoPoint *)p2 p3:(ComposeAppSkikoPoint *)p3 p4:(ComposeAppSkikoPoint *)p4 exact:(BOOL)exact __attribute__((swift_name("isCubicDegenerate(p1:p2:p3:p4:exact:)")));
- (BOOL)isLineDegenerateP1:(ComposeAppSkikoPoint *)p1 p2:(ComposeAppSkikoPoint *)p2 exact:(BOOL)exact __attribute__((swift_name("isLineDegenerate(p1:p2:exact:)")));
- (BOOL)isQuadDegenerateP1:(ComposeAppSkikoPoint *)p1 p2:(ComposeAppSkikoPoint *)p2 p3:(ComposeAppSkikoPoint *)p3 exact:(BOOL)exact __attribute__((swift_name("isQuadDegenerate(p1:p2:p3:exact:)")));
- (ComposeAppSkikoPath * _Nullable)makeCombiningOne:(ComposeAppSkikoPath *)one two:(ComposeAppSkikoPath *)two op:(ComposeAppSkikoPathOp *)op __attribute__((swift_name("makeCombining(one:two:op:)")));
- (ComposeAppSkikoPath *)makeFromBytesData:(ComposeAppKotlinByteArray *)data __attribute__((swift_name("makeFromBytes(data:)")));
- (ComposeAppSkikoPath *)makeFromSVGStringSvg:(NSString *)svg __attribute__((swift_name("makeFromSVGString(svg:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathDirection")))
@interface ComposeAppSkikoPathDirection : ComposeAppKotlinEnum<ComposeAppSkikoPathDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoPathDirection *clockwise __attribute__((swift_name("clockwise")));
@property (class, readonly) ComposeAppSkikoPathDirection *counterClockwise __attribute__((swift_name("counterClockwise")));
+ (ComposeAppKotlinArray<ComposeAppSkikoPathDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoPathDirection *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRRect")))
@interface ComposeAppSkikoRRect : ComposeAppSkikoRect
- (instancetype)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("init(left:top:right:bottom:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoRRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (ComposeAppSkikoRect *)inflateSpread:(float)spread __attribute__((swift_name("inflate(spread:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKotlinFloatArray *radii __attribute__((swift_name("radii")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEllipseArc")))
@interface ComposeAppSkikoPathEllipseArc : ComposeAppKotlinEnum<ComposeAppSkikoPathEllipseArc *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoPathEllipseArc *smaller __attribute__((swift_name("smaller")));
@property (class, readonly) ComposeAppSkikoPathEllipseArc *larger __attribute__((swift_name("larger")));
+ (ComposeAppKotlinArray<ComposeAppSkikoPathEllipseArc *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoPathEllipseArc *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathVerb")))
@interface ComposeAppSkikoPathVerb : ComposeAppKotlinEnum<ComposeAppSkikoPathVerb *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoPathVerb *move __attribute__((swift_name("move")));
@property (class, readonly) ComposeAppSkikoPathVerb *line __attribute__((swift_name("line")));
@property (class, readonly) ComposeAppSkikoPathVerb *quad __attribute__((swift_name("quad")));
@property (class, readonly) ComposeAppSkikoPathVerb *conic __attribute__((swift_name("conic")));
@property (class, readonly) ComposeAppSkikoPathVerb *cubic __attribute__((swift_name("cubic")));
@property (class, readonly) ComposeAppSkikoPathVerb *close __attribute__((swift_name("close")));
@property (class, readonly) ComposeAppSkikoPathVerb *done __attribute__((swift_name("done")));
+ (ComposeAppKotlinArray<ComposeAppSkikoPathVerb *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoPathVerb *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinMutableIterator")))
@protocol ComposeAppKotlinMutableIterator <ComposeAppKotlinIterator>
@required
- (void)remove __attribute__((swift_name("remove()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathSegmentIterator")))
@interface ComposeAppSkikoPathSegmentIterator : ComposeAppSkikoManaged <ComposeAppKotlinMutableIterator>
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoPathSegmentIteratorCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (ComposeAppSkikoPathSegment * _Nullable)next __attribute__((swift_name("next()")));
- (void)remove __attribute__((swift_name("remove()")));
@property ComposeAppSkikoPathSegment * _Nullable _nextSegment __attribute__((swift_name("_nextSegment")));
@property (readonly) ComposeAppSkikoPath * _Nullable _path __attribute__((swift_name("_path")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathFillMode")))
@interface ComposeAppSkikoPathFillMode : ComposeAppKotlinEnum<ComposeAppSkikoPathFillMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoPathFillMode *winding __attribute__((swift_name("winding")));
@property (class, readonly) ComposeAppSkikoPathFillMode *evenOdd __attribute__((swift_name("evenOdd")));
@property (class, readonly) ComposeAppSkikoPathFillMode *inverseWinding __attribute__((swift_name("inverseWinding")));
@property (class, readonly) ComposeAppSkikoPathFillMode *inverseEvenOdd __attribute__((swift_name("inverseEvenOdd")));
+ (ComposeAppKotlinArray<ComposeAppSkikoPathFillMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoPathFillMode *> *entries __attribute__((swift_name("entries")));
- (ComposeAppSkikoPathFillMode *)inverse __attribute__((swift_name("inverse()")));
@property (readonly) BOOL isInverse __attribute__((swift_name("isInverse")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIPoint.Companion")))
@interface ComposeAppSkikoIPointCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoIPointCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppSkikoIPoint *ZERO __attribute__((swift_name("ZERO")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorInfo.Companion")))
@interface ComposeAppSkikoColorInfoCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoColorInfoCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppSkikoColorInfo *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorType.Companion")))
@interface ComposeAppSkikoColorTypeCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoColorTypeCompanion *shared __attribute__((swift_name("shared")));
@property ComposeAppSkikoColorType *N32 __attribute__((swift_name("N32")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageInfo.Companion")))
@interface ComposeAppSkikoImageInfoCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoImageInfoCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoImageInfo *)createUsing_ptr:(void * _Nullable)_ptr _nGetImageInfo:(void (^)(id _Nullable, id _Nullable, id _Nullable))_nGetImageInfo __attribute__((swift_name("createUsing(_ptr:_nGetImageInfo:)")));
- (ComposeAppSkikoImageInfo *)makeA8Width:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeA8(width:height:)")));
- (ComposeAppSkikoImageInfo *)makeN32Width:(int32_t)width height:(int32_t)height alphaType:(ComposeAppSkikoColorAlphaType *)alphaType __attribute__((swift_name("makeN32(width:height:alphaType:)")));
- (ComposeAppSkikoImageInfo *)makeN32Width:(int32_t)width height:(int32_t)height alphaType:(ComposeAppSkikoColorAlphaType *)alphaType colorSpace:(ComposeAppSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("makeN32(width:height:alphaType:colorSpace:)")));
- (ComposeAppSkikoImageInfo *)makeN32PremulWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeN32Premul(width:height:)")));
- (ComposeAppSkikoImageInfo *)makeN32PremulWidth:(int32_t)width height:(int32_t)height colorSpace:(ComposeAppSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("makeN32Premul(width:height:colorSpace:)")));
- (ComposeAppSkikoImageInfo *)makeS32Width:(int32_t)width height:(int32_t)height alphaType:(ComposeAppSkikoColorAlphaType *)alphaType __attribute__((swift_name("makeS32(width:height:alphaType:)")));
- (ComposeAppSkikoImageInfo *)makeUnknownWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeUnknown(width:height:)")));
@property (readonly) ComposeAppSkikoImageInfo *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoData.Companion")))
@interface ComposeAppSkikoDataCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoDataCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoData *)makeEmpty __attribute__((swift_name("makeEmpty()")));
- (ComposeAppSkikoData *)makeFromBytesBytes:(ComposeAppKotlinByteArray *)bytes offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("makeFromBytes(bytes:offset:length:)")));
- (ComposeAppSkikoData *)makeUninitializedLength:(int32_t)length __attribute__((swift_name("makeUninitialized(length:)")));
- (ComposeAppSkikoData *)makeWithoutCopyMemoryAddr:(void * _Nullable)memoryAddr length:(int32_t)length underlyingMemoryOwner:(ComposeAppSkikoManaged *)underlyingMemoryOwner __attribute__((swift_name("makeWithoutCopy(memoryAddr:length:underlyingMemoryOwner:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixmap.Companion")))
@interface ComposeAppSkikoPixmapCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoPixmapCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoPixmap *)makeInfo:(ComposeAppSkikoImageInfo *)info buffer:(ComposeAppSkikoData *)buffer rowBytes:(int32_t)rowBytes __attribute__((swift_name("make(info:buffer:rowBytes:)")));
- (ComposeAppSkikoPixmap *)makeInfo:(ComposeAppSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes underlyingMemoryOwner:(ComposeAppSkikoManaged * _Nullable)underlyingMemoryOwner __attribute__((swift_name("make(info:addr:rowBytes:underlyingMemoryOwner:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBitmap.Companion")))
@interface ComposeAppSkikoBitmapCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoBitmapCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoBitmap *)makeFromImageImage:(ComposeAppSkikoImage *)image __attribute__((swift_name("makeFromImage(image:)")));
- (ComposeAppSkikoBitmap *)makeFromImageImage:(ComposeAppSkikoImage *)image context:(ComposeAppSkikoDirectContext *)context __attribute__((swift_name("makeFromImage(image:context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixelRef")))
@interface ComposeAppSkikoPixelRef : ComposeAppSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoPixelRefCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppSkikoPixelRef *)notifyPixelsChanged __attribute__((swift_name("notifyPixelsChanged()")));
- (ComposeAppSkikoPixelRef *)setImmutable __attribute__((swift_name("setImmutable()")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) BOOL isImmutable __attribute__((swift_name("isImmutable")));
@property (readonly) void * _Nullable rowBytes __attribute__((swift_name("rowBytes")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoDirectContext.Companion")))
@interface ComposeAppSkikoDirectContextCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoDirectContextCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoDirectContext *)makeDirect3DAdapterPtr:(void * _Nullable)adapterPtr devicePtr:(void * _Nullable)devicePtr queuePtr:(void * _Nullable)queuePtr __attribute__((swift_name("makeDirect3D(adapterPtr:devicePtr:queuePtr:)")));
- (ComposeAppSkikoDirectContext *)makeGL __attribute__((swift_name("makeGL()")));
- (ComposeAppSkikoDirectContext *)makeMetalDevicePtr:(void * _Nullable)devicePtr queuePtr:(void * _Nullable)queuePtr __attribute__((swift_name("makeMetal(devicePtr:queuePtr:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurface")))
@interface ComposeAppSkikoSurface : ComposeAppSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoSurfaceCompanion *companion __attribute__((swift_name("companion")));
- (void)drawCanvas:(ComposeAppSkikoCanvas * _Nullable)canvas x:(int32_t)x y:(int32_t)y paint:(ComposeAppSkikoPaint * _Nullable)paint __attribute__((swift_name("draw(canvas:x:y:paint:)")));
- (void)drawCanvas:(ComposeAppSkikoCanvas * _Nullable)canvas x:(int32_t)x y:(int32_t)y samplingMode:(id<ComposeAppSkikoSamplingMode>)samplingMode paint:(ComposeAppSkikoPaint * _Nullable)paint __attribute__((swift_name("draw(canvas:x:y:samplingMode:paint:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)flushAndSubmit __attribute__((swift_name("flushAndSubmit()")));
- (void)flushAndSubmitSyncCpu:(BOOL)syncCpu __attribute__((swift_name("flushAndSubmit(syncCpu:)")));
- (ComposeAppSkikoImage *)makeImageSnapshot __attribute__((swift_name("makeImageSnapshot()")));
- (ComposeAppSkikoImage * _Nullable)makeImageSnapshotArea:(ComposeAppSkikoIRect *)area __attribute__((swift_name("makeImageSnapshot(area:)")));
- (ComposeAppSkikoSurface * _Nullable)makeSurfaceImageInfo:(ComposeAppSkikoImageInfo *)imageInfo __attribute__((swift_name("makeSurface(imageInfo:)")));
- (ComposeAppSkikoSurface * _Nullable)makeSurfaceWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeSurface(width:height:)")));
- (void)notifyContentWillChangeMode:(ComposeAppSkikoContentChangeMode *)mode __attribute__((swift_name("notifyContentWillChange(mode:)")));
- (BOOL)peekPixelsPixmap:(ComposeAppSkikoPixmap *)pixmap __attribute__((swift_name("peekPixels(pixmap:)")));
- (BOOL)readPixelsBitmap:(ComposeAppSkikoBitmap * _Nullable)bitmap srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(bitmap:srcX:srcY:)")));
- (BOOL)readPixelsPixmap:(ComposeAppSkikoPixmap * _Nullable)pixmap srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(pixmap:srcX:srcY:)")));
- (void)writePixelsBitmap:(ComposeAppSkikoBitmap * _Nullable)bitmap x:(int32_t)x y:(int32_t)y __attribute__((swift_name("writePixels(bitmap:x:y:)")));
- (void)writePixelsPixmap:(ComposeAppSkikoPixmap * _Nullable)pixmap x:(int32_t)x y:(int32_t)y __attribute__((swift_name("writePixels(pixmap:x:y:)")));
@property (readonly) ComposeAppSkikoCanvas *canvas __attribute__((swift_name("canvas")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) ComposeAppSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@property (readonly) BOOL isUnique __attribute__((swift_name("isUnique")));
@property (readonly) ComposeAppSkikoDirectContext * _Nullable recordingContext __attribute__((swift_name("recordingContext")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoGLBackendState")))
@interface ComposeAppSkikoGLBackendState : ComposeAppKotlinEnum<ComposeAppSkikoGLBackendState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoGLBackendState *renderTarget __attribute__((swift_name("renderTarget")));
@property (class, readonly) ComposeAppSkikoGLBackendState *textureBinding __attribute__((swift_name("textureBinding")));
@property (class, readonly) ComposeAppSkikoGLBackendState *view __attribute__((swift_name("view")));
@property (class, readonly) ComposeAppSkikoGLBackendState *blend __attribute__((swift_name("blend")));
@property (class, readonly) ComposeAppSkikoGLBackendState *msaaEnable __attribute__((swift_name("msaaEnable")));
@property (class, readonly) ComposeAppSkikoGLBackendState *vertex __attribute__((swift_name("vertex")));
@property (class, readonly) ComposeAppSkikoGLBackendState *stencil __attribute__((swift_name("stencil")));
@property (class, readonly) ComposeAppSkikoGLBackendState *pixelStore __attribute__((swift_name("pixelStore")));
@property (class, readonly) ComposeAppSkikoGLBackendState *program __attribute__((swift_name("program")));
@property (class, readonly) ComposeAppSkikoGLBackendState *fixedFunction __attribute__((swift_name("fixedFunction")));
@property (class, readonly) ComposeAppSkikoGLBackendState *misc __attribute__((swift_name("misc")));
@property (class, readonly) ComposeAppSkikoGLBackendState *pathRendering __attribute__((swift_name("pathRendering")));
+ (ComposeAppKotlinArray<ComposeAppSkikoGLBackendState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoGLBackendState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix44.Companion")))
@interface ComposeAppSkikoMatrix44Companion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoMatrix44Companion *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppSkikoMatrix44 *IDENTITY __attribute__((swift_name("IDENTITY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeEffect.Companion")))
@interface ComposeAppSkikoRuntimeEffectCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoRuntimeEffectCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoRuntimeEffect *)makeForColorFilterSksl:(NSString *)sksl __attribute__((swift_name("makeForColorFilter(sksl:)")));
- (ComposeAppSkikoRuntimeEffect *)makeForShaderSksl:(NSString *)sksl __attribute__((swift_name("makeForShader(sksl:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix22.Companion")))
@interface ComposeAppSkikoMatrix22Companion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoMatrix22Companion *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppSkikoMatrix22 *IDENTITY __attribute__((swift_name("IDENTITY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathOp")))
@interface ComposeAppSkikoPathOp : ComposeAppKotlinEnum<ComposeAppSkikoPathOp *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoPathOp *difference __attribute__((swift_name("difference")));
@property (class, readonly) ComposeAppSkikoPathOp *intersect __attribute__((swift_name("intersect")));
@property (class, readonly) ComposeAppSkikoPathOp *union_ __attribute__((swift_name("union_")));
@property (class, readonly) ComposeAppSkikoPathOp *xor_ __attribute__((swift_name("xor_")));
@property (class, readonly) ComposeAppSkikoPathOp *reverseDifference __attribute__((swift_name("reverseDifference")));
+ (ComposeAppKotlinArray<ComposeAppSkikoPathOp *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoPathOp *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRRect.Companion")))
@interface ComposeAppSkikoRRectCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoRRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoRRect *)makeComplexLTRBL:(float)l t:(float)t r:(float)r b:(float)b radii:(ComposeAppKotlinFloatArray *)radii __attribute__((swift_name("makeComplexLTRB(l:t:r:b:radii:)")));
- (ComposeAppSkikoRRect *)makeComplexXYWHL:(float)l t:(float)t w:(float)w h:(float)h radii:(ComposeAppKotlinFloatArray *)radii __attribute__((swift_name("makeComplexXYWH(l:t:w:h:radii:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoRRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b radius:(float)radius __attribute__((swift_name("makeLTRB(l:t:r:b:radius:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoRRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b xRad:(float)xRad yRad:(float)yRad __attribute__((swift_name("makeLTRB(l:t:r:b:xRad:yRad:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoRRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b tlRad:(float)tlRad trRad:(float)trRad brRad:(float)brRad blRad:(float)blRad __attribute__((swift_name("makeLTRB(l:t:r:b:tlRad:trRad:brRad:blRad:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (ComposeAppSkikoRRect *)makeNinePatchLTRBL:(float)l t:(float)t r:(float)r b:(float)b lRad:(float)lRad tRad:(float)tRad rRad:(float)rRad bRad:(float)bRad __attribute__((swift_name("makeNinePatchLTRB(l:t:r:b:lRad:tRad:rRad:bRad:)")));
- (ComposeAppSkikoRRect *)makeNinePatchXYWHL:(float)l t:(float)t w:(float)w h:(float)h lRad:(float)lRad tRad:(float)tRad rRad:(float)rRad bRad:(float)bRad __attribute__((swift_name("makeNinePatchXYWH(l:t:w:h:lRad:tRad:rRad:bRad:)")));
- (ComposeAppSkikoRRect *)makeOvalLTRBL:(float)l t:(float)t r:(float)r b:(float)b __attribute__((swift_name("makeOvalLTRB(l:t:r:b:)")));
- (ComposeAppSkikoRRect *)makeOvalXYWHL:(float)l t:(float)t w:(float)w h:(float)h __attribute__((swift_name("makeOvalXYWH(l:t:w:h:)")));
- (ComposeAppSkikoRRect *)makePillLTRBL:(float)l t:(float)t r:(float)r b:(float)b __attribute__((swift_name("makePillLTRB(l:t:r:b:)")));
- (ComposeAppSkikoRRect *)makePillXYWHL:(float)l t:(float)t w:(float)w h:(float)h __attribute__((swift_name("makePillXYWH(l:t:w:h:)")));
- (ComposeAppSkikoRRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h radius:(float)radius __attribute__((swift_name("makeXYWH(l:t:w:h:radius:)")));
- (ComposeAppSkikoRRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h xRad:(float)xRad yRad:(float)yRad __attribute__((swift_name("makeXYWH(l:t:w:h:xRad:yRad:)")));
- (ComposeAppSkikoRRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h tlRad:(float)tlRad trRad:(float)trRad brRad:(float)brRad blRad:(float)blRad __attribute__((swift_name("makeXYWH(l:t:w:h:tlRad:trRad:brRad:blRad:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathSegmentIterator.Companion")))
@interface ComposeAppSkikoPathSegmentIteratorCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoPathSegmentIteratorCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoPathSegmentIterator *)makePath:(ComposeAppSkikoPath * _Nullable)path forceClose:(BOOL)forceClose __attribute__((swift_name("make(path:forceClose:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathSegment")))
@interface ComposeAppSkikoPathSegment : ComposeAppBase
- (instancetype)initWithVerbOrdinal:(int32_t)verbOrdinal x0:(float)x0 y0:(float)y0 isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(verbOrdinal:x0:y0:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 isCloseLine:(BOOL)isCloseLine isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:isCloseLine:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:x2:y2:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 conicWeight:(float)conicWeight isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:x2:y2:conicWeight:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithVerb:(ComposeAppSkikoPathVerb *)verb p0:(ComposeAppSkikoPoint * _Nullable)p0 p1:(ComposeAppSkikoPoint * _Nullable)p1 p2:(ComposeAppSkikoPoint * _Nullable)p2 p3:(ComposeAppSkikoPoint * _Nullable)p3 conicWeight:(float)conicWeight isCloseLine:(BOOL)isCloseLine isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(verb:p0:p1:p2:p3:conicWeight:isCloseLine:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 x3:(float)x3 y3:(float)y3 isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:x2:y2:x3:y3:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float conicWeight __attribute__((swift_name("conicWeight")));
@property (readonly) BOOL isCloseLine __attribute__((swift_name("isCloseLine")));
@property (readonly) BOOL isClosedContour __attribute__((swift_name("isClosedContour")));
@property (readonly) ComposeAppSkikoPoint * _Nullable p0 __attribute__((swift_name("p0")));
@property (readonly) ComposeAppSkikoPoint * _Nullable p1 __attribute__((swift_name("p1")));
@property (readonly) ComposeAppSkikoPoint * _Nullable p2 __attribute__((swift_name("p2")));
@property (readonly) ComposeAppSkikoPoint * _Nullable p3 __attribute__((swift_name("p3")));
@property (readonly) ComposeAppSkikoPathVerb *verb __attribute__((swift_name("verb")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixelRef.Companion")))
@interface ComposeAppSkikoPixelRefCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoPixelRefCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurface.Companion")))
@interface ComposeAppSkikoSurfaceCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoSurfaceCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoSurface * _Nullable)makeFromBackendRenderTargetContext:(ComposeAppSkikoDirectContext *)context rt:(ComposeAppSkikoBackendRenderTarget *)rt origin:(ComposeAppSkikoSurfaceOrigin *)origin colorFormat:(ComposeAppSkikoSurfaceColorFormat *)colorFormat colorSpace:(ComposeAppSkikoColorSpace * _Nullable)colorSpace surfaceProps:(ComposeAppSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeFromBackendRenderTarget(context:rt:origin:colorFormat:colorSpace:surfaceProps:)")));
- (ComposeAppSkikoSurface *)makeFromMTKViewContext:(ComposeAppSkikoDirectContext *)context mtkViewPtr:(void * _Nullable)mtkViewPtr origin:(ComposeAppSkikoSurfaceOrigin *)origin sampleCount:(int32_t)sampleCount colorFormat:(ComposeAppSkikoSurfaceColorFormat *)colorFormat colorSpace:(ComposeAppSkikoColorSpace * _Nullable)colorSpace surfaceProps:(ComposeAppSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeFromMTKView(context:mtkViewPtr:origin:sampleCount:colorFormat:colorSpace:surfaceProps:)")));
- (ComposeAppSkikoSurface *)makeNullWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeNull(width:height:)")));
- (ComposeAppSkikoSurface *)makeRasterImageInfo:(ComposeAppSkikoImageInfo *)imageInfo __attribute__((swift_name("makeRaster(imageInfo:)")));
- (ComposeAppSkikoSurface *)makeRasterImageInfo:(ComposeAppSkikoImageInfo *)imageInfo rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRaster(imageInfo:rowBytes:)")));
- (ComposeAppSkikoSurface *)makeRasterImageInfo:(ComposeAppSkikoImageInfo *)imageInfo rowBytes:(int32_t)rowBytes surfaceProps:(ComposeAppSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRaster(imageInfo:rowBytes:surfaceProps:)")));
- (ComposeAppSkikoSurface *)makeRasterDirectPixmap:(ComposeAppSkikoPixmap *)pixmap __attribute__((swift_name("makeRasterDirect(pixmap:)")));
- (ComposeAppSkikoSurface *)makeRasterDirectPixmap:(ComposeAppSkikoPixmap *)pixmap surfaceProps:(ComposeAppSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRasterDirect(pixmap:surfaceProps:)")));
- (ComposeAppSkikoSurface *)makeRasterDirectImageInfo:(ComposeAppSkikoImageInfo *)imageInfo pixelsPtr:(void * _Nullable)pixelsPtr rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRasterDirect(imageInfo:pixelsPtr:rowBytes:)")));
- (ComposeAppSkikoSurface *)makeRasterDirectImageInfo:(ComposeAppSkikoImageInfo *)imageInfo pixelsPtr:(void * _Nullable)pixelsPtr rowBytes:(int32_t)rowBytes surfaceProps:(ComposeAppSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRasterDirect(imageInfo:pixelsPtr:rowBytes:surfaceProps:)")));
- (ComposeAppSkikoSurface *)makeRasterN32PremulWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeRasterN32Premul(width:height:)")));
- (ComposeAppSkikoSurface *)makeRenderTargetContext:(ComposeAppSkikoDirectContext *)context budgeted:(BOOL)budgeted imageInfo:(ComposeAppSkikoImageInfo *)imageInfo __attribute__((swift_name("makeRenderTarget(context:budgeted:imageInfo:)")));
- (ComposeAppSkikoSurface *)makeRenderTargetContext:(ComposeAppSkikoDirectContext *)context budgeted:(BOOL)budgeted imageInfo:(ComposeAppSkikoImageInfo *)imageInfo sampleCount:(int32_t)sampleCount surfaceProps:(ComposeAppSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRenderTarget(context:budgeted:imageInfo:sampleCount:surfaceProps:)")));
- (ComposeAppSkikoSurface *)makeRenderTargetContext:(ComposeAppSkikoDirectContext *)context budgeted:(BOOL)budgeted imageInfo:(ComposeAppSkikoImageInfo *)imageInfo sampleCount:(int32_t)sampleCount origin:(ComposeAppSkikoSurfaceOrigin *)origin surfaceProps:(ComposeAppSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRenderTarget(context:budgeted:imageInfo:sampleCount:origin:surfaceProps:)")));
- (ComposeAppSkikoSurface *)makeRenderTargetContext:(ComposeAppSkikoDirectContext *)context budgeted:(BOOL)budgeted imageInfo:(ComposeAppSkikoImageInfo *)imageInfo sampleCount:(int32_t)sampleCount origin:(ComposeAppSkikoSurfaceOrigin *)origin surfaceProps:(ComposeAppSkikoSurfaceProps * _Nullable)surfaceProps shouldCreateWithMips:(BOOL)shouldCreateWithMips __attribute__((swift_name("makeRenderTarget(context:budgeted:imageInfo:sampleCount:origin:surfaceProps:shouldCreateWithMips:)")));
@end

__attribute__((swift_name("SkikoCanvas")))
@interface ComposeAppSkikoCanvas : ComposeAppSkikoManaged
- (instancetype)initWithBitmap:(ComposeAppSkikoBitmap *)bitmap surfaceProps:(ComposeAppSkikoSurfaceProps *)surfaceProps __attribute__((swift_name("init(bitmap:surfaceProps:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoCanvasCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppSkikoCanvas *)clearColor:(int32_t)color __attribute__((swift_name("clear(color:)")));
- (ComposeAppSkikoCanvas *)clipPathP:(ComposeAppSkikoPath *)p __attribute__((swift_name("clipPath(p:)")));
- (ComposeAppSkikoCanvas *)clipPathP:(ComposeAppSkikoPath *)p antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipPath(p:antiAlias:)")));
- (ComposeAppSkikoCanvas *)clipPathP:(ComposeAppSkikoPath *)p mode:(ComposeAppSkikoClipMode *)mode __attribute__((swift_name("clipPath(p:mode:)")));
- (ComposeAppSkikoCanvas *)clipPathP:(ComposeAppSkikoPath *)p mode:(ComposeAppSkikoClipMode *)mode antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipPath(p:mode:antiAlias:)")));
- (ComposeAppSkikoCanvas *)clipRRectR:(ComposeAppSkikoRRect *)r __attribute__((swift_name("clipRRect(r:)")));
- (ComposeAppSkikoCanvas *)clipRRectR:(ComposeAppSkikoRRect *)r antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipRRect(r:antiAlias:)")));
- (ComposeAppSkikoCanvas *)clipRRectR:(ComposeAppSkikoRRect *)r mode:(ComposeAppSkikoClipMode *)mode __attribute__((swift_name("clipRRect(r:mode:)")));
- (ComposeAppSkikoCanvas *)clipRRectR:(ComposeAppSkikoRRect *)r mode:(ComposeAppSkikoClipMode *)mode antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipRRect(r:mode:antiAlias:)")));
- (ComposeAppSkikoCanvas *)clipRectR:(ComposeAppSkikoRect *)r __attribute__((swift_name("clipRect(r:)")));
- (ComposeAppSkikoCanvas *)clipRectR:(ComposeAppSkikoRect *)r antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipRect(r:antiAlias:)")));
- (ComposeAppSkikoCanvas *)clipRectR:(ComposeAppSkikoRect *)r mode:(ComposeAppSkikoClipMode *)mode __attribute__((swift_name("clipRect(r:mode:)")));
- (ComposeAppSkikoCanvas *)clipRectR:(ComposeAppSkikoRect *)r mode:(ComposeAppSkikoClipMode *)mode antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipRect(r:mode:antiAlias:)")));
- (ComposeAppSkikoCanvas *)clipRegionR:(ComposeAppSkikoRegion *)r __attribute__((swift_name("clipRegion(r:)")));
- (ComposeAppSkikoCanvas *)clipRegionR:(ComposeAppSkikoRegion *)r mode:(ComposeAppSkikoClipMode *)mode __attribute__((swift_name("clipRegion(r:mode:)")));
- (ComposeAppSkikoCanvas *)concatMatrix_:(ComposeAppSkikoMatrix33 *)matrix __attribute__((swift_name("concat(matrix_:)")));
- (ComposeAppSkikoCanvas *)concatMatrix__:(ComposeAppSkikoMatrix44 *)matrix __attribute__((swift_name("concat(matrix__:)")));
- (ComposeAppSkikoCanvas *)drawArcLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom startAngle:(float)startAngle sweepAngle:(float)sweepAngle includeCenter:(BOOL)includeCenter paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawArc(left:top:right:bottom:startAngle:sweepAngle:includeCenter:paint:)")));
- (ComposeAppSkikoCanvas *)drawCircleX:(float)x y:(float)y radius:(float)radius paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawCircle(x:y:radius:paint:)")));
- (ComposeAppSkikoCanvas *)drawDRRectOuter:(ComposeAppSkikoRRect *)outer inner:(ComposeAppSkikoRRect *)inner paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawDRRect(outer:inner:paint:)")));
- (ComposeAppSkikoCanvas *)drawDrawableDrawable:(ComposeAppSkikoDrawable *)drawable __attribute__((swift_name("drawDrawable(drawable:)")));
- (ComposeAppSkikoCanvas *)drawDrawableDrawable:(ComposeAppSkikoDrawable *)drawable matrix:(ComposeAppSkikoMatrix33 * _Nullable)matrix __attribute__((swift_name("drawDrawable(drawable:matrix:)")));
- (ComposeAppSkikoCanvas *)drawDrawableDrawable:(ComposeAppSkikoDrawable *)drawable x:(float)x y:(float)y __attribute__((swift_name("drawDrawable(drawable:x:y:)")));
- (ComposeAppSkikoCanvas *)drawImageImage:(ComposeAppSkikoImage *)image left:(float)left top:(float)top __attribute__((swift_name("drawImage(image:left:top:)")));
- (ComposeAppSkikoCanvas *)drawImageImage:(ComposeAppSkikoImage *)image left:(float)left top:(float)top paint:(ComposeAppSkikoPaint * _Nullable)paint __attribute__((swift_name("drawImage(image:left:top:paint:)")));
- (ComposeAppSkikoCanvas *)drawImageNineImage:(ComposeAppSkikoImage *)image center:(ComposeAppSkikoIRect *)center dst:(ComposeAppSkikoRect *)dst filterMode:(ComposeAppSkikoFilterMode *)filterMode paint:(ComposeAppSkikoPaint * _Nullable)paint __attribute__((swift_name("drawImageNine(image:center:dst:filterMode:paint:)")));
- (ComposeAppSkikoCanvas *)drawImageRectImage:(ComposeAppSkikoImage *)image dst:(ComposeAppSkikoRect *)dst __attribute__((swift_name("drawImageRect(image:dst:)")));
- (ComposeAppSkikoCanvas *)drawImageRectImage:(ComposeAppSkikoImage *)image dst:(ComposeAppSkikoRect *)dst paint:(ComposeAppSkikoPaint * _Nullable)paint __attribute__((swift_name("drawImageRect(image:dst:paint:)")));
- (ComposeAppSkikoCanvas *)drawImageRectImage:(ComposeAppSkikoImage *)image src:(ComposeAppSkikoRect *)src dst:(ComposeAppSkikoRect *)dst __attribute__((swift_name("drawImageRect(image:src:dst:)")));
- (ComposeAppSkikoCanvas *)drawImageRectImage:(ComposeAppSkikoImage *)image src:(ComposeAppSkikoRect *)src dst:(ComposeAppSkikoRect *)dst paint:(ComposeAppSkikoPaint * _Nullable)paint __attribute__((swift_name("drawImageRect(image:src:dst:paint:)")));
- (ComposeAppSkikoCanvas *)drawImageRectImage:(ComposeAppSkikoImage *)image src:(ComposeAppSkikoRect *)src dst:(ComposeAppSkikoRect *)dst paint:(ComposeAppSkikoPaint * _Nullable)paint strict:(BOOL)strict __attribute__((swift_name("drawImageRect(image:src:dst:paint:strict:)")));
- (ComposeAppSkikoCanvas *)drawImageRectImage:(ComposeAppSkikoImage *)image src:(ComposeAppSkikoRect *)src dst:(ComposeAppSkikoRect *)dst samplingMode:(id<ComposeAppSkikoSamplingMode>)samplingMode paint:(ComposeAppSkikoPaint * _Nullable)paint strict:(BOOL)strict __attribute__((swift_name("drawImageRect(image:src:dst:samplingMode:paint:strict:)")));
- (ComposeAppSkikoCanvas *)drawLineX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawLine(x0:y0:x1:y1:paint:)")));
- (ComposeAppSkikoCanvas *)drawLinesCoords:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> *)coords paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawLines(coords:paint:)")));
- (ComposeAppSkikoCanvas *)drawLinesCoords:(ComposeAppKotlinFloatArray *)coords paint_:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawLines(coords:paint_:)")));
- (ComposeAppSkikoCanvas *)drawOvalR:(ComposeAppSkikoRect *)r paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawOval(r:paint:)")));
- (ComposeAppSkikoCanvas *)drawPaintPaint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawPaint(paint:)")));
- (ComposeAppSkikoCanvas *)drawPatchCubics:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> *)cubics colors:(ComposeAppKotlinIntArray *)colors texCoords:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> * _Nullable)texCoords blendMode:(ComposeAppSkikoBlendMode *)blendMode paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawPatch(cubics:colors:texCoords:blendMode:paint:)")));
- (ComposeAppSkikoCanvas *)drawPathPath:(ComposeAppSkikoPath *)path paint_:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawPath(path:paint_:)")));
- (ComposeAppSkikoCanvas *)drawPicturePicture:(ComposeAppSkikoPicture *)picture matrix:(ComposeAppSkikoMatrix33 * _Nullable)matrix paint:(ComposeAppSkikoPaint * _Nullable)paint __attribute__((swift_name("drawPicture(picture:matrix:paint:)")));
- (ComposeAppSkikoCanvas *)drawPointX:(float)x y:(float)y paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawPoint(x:y:paint:)")));
- (ComposeAppSkikoCanvas *)drawPointsCoords:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> *)coords paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawPoints(coords:paint:)")));
- (ComposeAppSkikoCanvas *)drawPointsCoords:(ComposeAppKotlinFloatArray *)coords paint_:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawPoints(coords:paint_:)")));
- (ComposeAppSkikoCanvas *)drawPolygonCoords:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> *)coords paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawPolygon(coords:paint:)")));
- (ComposeAppSkikoCanvas *)drawPolygonCoords:(ComposeAppKotlinFloatArray *)coords paint_:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawPolygon(coords:paint_:)")));
- (ComposeAppSkikoCanvas *)drawRRectR:(ComposeAppSkikoRRect *)r paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawRRect(r:paint:)")));
- (ComposeAppSkikoCanvas *)drawRectR:(ComposeAppSkikoRect *)r paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawRect(r:paint:)")));
- (ComposeAppSkikoCanvas *)drawRectShadowR:(ComposeAppSkikoRect *)r dx:(float)dx dy:(float)dy blur:(float)blur color:(int32_t)color __attribute__((swift_name("drawRectShadow(r:dx:dy:blur:color:)")));
- (ComposeAppSkikoCanvas *)drawRectShadowR:(ComposeAppSkikoRect *)r dx:(float)dx dy:(float)dy blur:(float)blur spread:(float)spread color:(int32_t)color __attribute__((swift_name("drawRectShadow(r:dx:dy:blur:spread:color:)")));
- (ComposeAppSkikoCanvas *)drawRectShadowNoclipR:(ComposeAppSkikoRect *)r dx:(float)dx dy:(float)dy blur:(float)blur spread:(float)spread color:(int32_t)color __attribute__((swift_name("drawRectShadowNoclip(r:dx:dy:blur:spread:color:)")));
- (ComposeAppSkikoCanvas *)drawRegionR:(ComposeAppSkikoRegion *)r paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawRegion(r:paint:)")));
- (ComposeAppSkikoCanvas *)drawStringS:(NSString *)s x:(float)x y:(float)y font:(ComposeAppSkikoFont * _Nullable)font paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawString(s:x:y:font:paint:)")));
- (ComposeAppSkikoCanvas *)drawTextBlobBlob:(ComposeAppSkikoTextBlob *)blob x:(float)x y:(float)y paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawTextBlob(blob:x:y:paint:)")));
- (ComposeAppSkikoCanvas *)drawTextLineLine:(ComposeAppSkikoTextLine *)line x:(float)x y:(float)y paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawTextLine(line:x:y:paint:)")));
- (ComposeAppSkikoCanvas *)drawTriangleFanPositions:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> *)positions colors:(ComposeAppKotlinIntArray * _Nullable)colors texCoords:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> * _Nullable)texCoords indices:(ComposeAppKotlinShortArray * _Nullable)indices blendMode:(ComposeAppSkikoBlendMode *)blendMode paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawTriangleFan(positions:colors:texCoords:indices:blendMode:paint:)")));
- (ComposeAppSkikoCanvas *)drawTriangleStripPositions:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> *)positions colors:(ComposeAppKotlinIntArray * _Nullable)colors texCoords:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> * _Nullable)texCoords indices:(ComposeAppKotlinShortArray * _Nullable)indices blendMode:(ComposeAppSkikoBlendMode *)blendMode paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawTriangleStrip(positions:colors:texCoords:indices:blendMode:paint:)")));
- (ComposeAppSkikoCanvas *)drawTrianglesPositions:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> *)positions colors:(ComposeAppKotlinIntArray * _Nullable)colors texCoords:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> * _Nullable)texCoords indices:(ComposeAppKotlinShortArray * _Nullable)indices blendMode:(ComposeAppSkikoBlendMode *)blendMode paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawTriangles(positions:colors:texCoords:indices:blendMode:paint:)")));
- (ComposeAppSkikoCanvas *)drawVerticesVertexMode:(ComposeAppSkikoVertexMode *)vertexMode positions:(ComposeAppKotlinFloatArray *)positions colors:(ComposeAppKotlinIntArray * _Nullable)colors texCoords:(ComposeAppKotlinFloatArray * _Nullable)texCoords indices:(ComposeAppKotlinShortArray * _Nullable)indices blendMode:(ComposeAppSkikoBlendMode *)blendMode paint:(ComposeAppSkikoPaint *)paint __attribute__((swift_name("drawVertices(vertexMode:positions:colors:texCoords:indices:blendMode:paint:)")));
- (BOOL)readPixelsBitmap:(ComposeAppSkikoBitmap *)bitmap srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(bitmap:srcX:srcY:)")));
- (ComposeAppSkikoCanvas *)resetMatrix __attribute__((swift_name("resetMatrix()")));
- (ComposeAppSkikoCanvas *)restore_ __attribute__((swift_name("restore_()")));
- (ComposeAppSkikoCanvas *)restoreToCountSaveCount:(int32_t)saveCount __attribute__((swift_name("restoreToCount(saveCount:)")));
- (ComposeAppSkikoCanvas *)rotateDeg:(float)deg __attribute__((swift_name("rotate(deg:)")));
- (ComposeAppSkikoCanvas *)rotateDeg:(float)deg x:(float)x y:(float)y __attribute__((swift_name("rotate(deg:x:y:)")));
- (int32_t)save_ __attribute__((swift_name("save_()")));
- (int32_t)saveLayerLayerRec:(ComposeAppSkikoCanvasSaveLayerRec *)layerRec __attribute__((swift_name("saveLayer(layerRec:)")));
- (int32_t)saveLayerBounds:(ComposeAppSkikoRect * _Nullable)bounds paint_:(ComposeAppSkikoPaint * _Nullable)paint __attribute__((swift_name("saveLayer(bounds:paint_:)")));
- (int32_t)saveLayerLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom paint:(ComposeAppSkikoPaint * _Nullable)paint __attribute__((swift_name("saveLayer(left:top:right:bottom:paint:)")));
- (ComposeAppSkikoCanvas *)scaleSx:(float)sx sy_:(float)sy __attribute__((swift_name("scale(sx:sy_:)")));
- (ComposeAppSkikoCanvas *)setMatrixMatrix:(ComposeAppSkikoMatrix33 *)matrix __attribute__((swift_name("setMatrix(matrix:)")));
- (ComposeAppSkikoCanvas *)skewSx:(float)sx sy_:(float)sy __attribute__((swift_name("skew(sx:sy_:)")));
- (ComposeAppSkikoCanvas *)translateDx:(float)dx dy_:(float)dy __attribute__((swift_name("translate(dx:dy_:)")));
- (BOOL)writePixelsBitmap:(ComposeAppSkikoBitmap *)bitmap x:(int32_t)x y:(int32_t)y __attribute__((swift_name("writePixels(bitmap:x:y:)")));
@property (readonly) ComposeAppSkikoMatrix44 *localToDevice __attribute__((swift_name("localToDevice")));
@property (readonly) ComposeAppSkikoMatrix33 *localToDeviceAsMatrix33 __attribute__((swift_name("localToDeviceAsMatrix33")));
@property (readonly) int32_t saveCount __attribute__((swift_name("saveCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoContentChangeMode")))
@interface ComposeAppSkikoContentChangeMode : ComposeAppKotlinEnum<ComposeAppSkikoContentChangeMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoContentChangeMode *discard __attribute__((swift_name("discard")));
@property (class, readonly) ComposeAppSkikoContentChangeMode *retain_ __attribute__((swift_name("retain_")));
+ (ComposeAppKotlinArray<ComposeAppSkikoContentChangeMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoContentChangeMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBackendRenderTarget")))
@interface ComposeAppSkikoBackendRenderTarget : ComposeAppSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoBackendRenderTargetCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurfaceOrigin")))
@interface ComposeAppSkikoSurfaceOrigin : ComposeAppKotlinEnum<ComposeAppSkikoSurfaceOrigin *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoSurfaceOrigin *topLeft __attribute__((swift_name("topLeft")));
@property (class, readonly) ComposeAppSkikoSurfaceOrigin *bottomLeft __attribute__((swift_name("bottomLeft")));
+ (ComposeAppKotlinArray<ComposeAppSkikoSurfaceOrigin *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoSurfaceOrigin *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurfaceColorFormat")))
@interface ComposeAppSkikoSurfaceColorFormat : ComposeAppKotlinEnum<ComposeAppSkikoSurfaceColorFormat *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *alpha8 __attribute__((swift_name("alpha8")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *rgb565 __attribute__((swift_name("rgb565")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *argb4444 __attribute__((swift_name("argb4444")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *rgba8888 __attribute__((swift_name("rgba8888")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *rgb888x __attribute__((swift_name("rgb888x")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *bgra8888 __attribute__((swift_name("bgra8888")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *rgba1010102 __attribute__((swift_name("rgba1010102")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *rgb101010x __attribute__((swift_name("rgb101010x")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *gray8 __attribute__((swift_name("gray8")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *rgbaF16Norm __attribute__((swift_name("rgbaF16Norm")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *rgbaF16 __attribute__((swift_name("rgbaF16")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *rgbaF32 __attribute__((swift_name("rgbaF32")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *r8g8Unorm __attribute__((swift_name("r8g8Unorm")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *a16Float __attribute__((swift_name("a16Float")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *r16g16Float __attribute__((swift_name("r16g16Float")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *a16Unorm __attribute__((swift_name("a16Unorm")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *r16g16Unorm __attribute__((swift_name("r16g16Unorm")));
@property (class, readonly) ComposeAppSkikoSurfaceColorFormat *r16g16b16a16Unorm __attribute__((swift_name("r16g16b16a16Unorm")));
+ (ComposeAppKotlinArray<ComposeAppSkikoSurfaceColorFormat *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoSurfaceColorFormat *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurfaceProps")))
@interface ComposeAppSkikoSurfaceProps : ComposeAppBase
- (instancetype)initWithGeo:(ComposeAppSkikoPixelGeometry *)geo __attribute__((swift_name("init(geo:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIsDeviceIndependentFonts:(BOOL)isDeviceIndependentFonts pixelGeometry:(ComposeAppSkikoPixelGeometry *)pixelGeometry __attribute__((swift_name("init(isDeviceIndependentFonts:pixelGeometry:)"))) __attribute__((objc_designated_initializer));
- (int32_t)_getFlags __attribute__((swift_name("_getFlags()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (ComposeAppSkikoSurfaceProps *)withDeviceIndependentFonts_deviceIndependentFonts:(BOOL)_deviceIndependentFonts __attribute__((swift_name("withDeviceIndependentFonts(_deviceIndependentFonts:)")));
- (ComposeAppSkikoSurfaceProps *)withPixelGeometry_pixelGeometry:(ComposeAppSkikoPixelGeometry *)_pixelGeometry __attribute__((swift_name("withPixelGeometry(_pixelGeometry:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoCanvas.Companion")))
@interface ComposeAppSkikoCanvasCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoCanvasCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoClipMode")))
@interface ComposeAppSkikoClipMode : ComposeAppKotlinEnum<ComposeAppSkikoClipMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoClipMode *difference __attribute__((swift_name("difference")));
@property (class, readonly) ComposeAppSkikoClipMode *intersect __attribute__((swift_name("intersect")));
+ (ComposeAppKotlinArray<ComposeAppSkikoClipMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoClipMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion")))
@interface ComposeAppSkikoRegion : ComposeAppSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoRegionCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)computeRegionComplexity __attribute__((swift_name("computeRegionComplexity()")));
- (BOOL)containsRect:(ComposeAppSkikoIRect *)rect __attribute__((swift_name("contains(rect:)")));
- (BOOL)containsR:(ComposeAppSkikoRegion * _Nullable)r __attribute__((swift_name("contains(r:)")));
- (BOOL)containsX:(int32_t)x y:(int32_t)y __attribute__((swift_name("contains(x:y:)")));
- (BOOL)getBoundaryPathP:(ComposeAppSkikoPath * _Nullable)p __attribute__((swift_name("getBoundaryPath(p:)")));
- (BOOL)intersectsRect:(ComposeAppSkikoIRect *)rect __attribute__((swift_name("intersects(rect:)")));
- (BOOL)intersectsR:(ComposeAppSkikoRegion * _Nullable)r __attribute__((swift_name("intersects(r:)")));
- (BOOL)opRect:(ComposeAppSkikoIRect *)rect op:(ComposeAppSkikoRegionOp *)op __attribute__((swift_name("op(rect:op:)")));
- (BOOL)opR:(ComposeAppSkikoRegion * _Nullable)r op:(ComposeAppSkikoRegionOp *)op __attribute__((swift_name("op(r:op:)")));
- (BOOL)opRect:(ComposeAppSkikoIRect *)rect r:(ComposeAppSkikoRegion * _Nullable)r op:(ComposeAppSkikoRegionOp *)op __attribute__((swift_name("op(rect:r:op:)")));
- (BOOL)opR:(ComposeAppSkikoRegion * _Nullable)r rect:(ComposeAppSkikoIRect *)rect op:(ComposeAppSkikoRegionOp *)op __attribute__((swift_name("op(r:rect:op:)")));
- (BOOL)opA:(ComposeAppSkikoRegion * _Nullable)a b:(ComposeAppSkikoRegion * _Nullable)b op:(ComposeAppSkikoRegionOp *)op __attribute__((swift_name("op(a:b:op:)")));
- (BOOL)quickContainsRect:(ComposeAppSkikoIRect *)rect __attribute__((swift_name("quickContains(rect:)")));
- (BOOL)quickRejectRect:(ComposeAppSkikoIRect *)rect __attribute__((swift_name("quickReject(rect:)")));
- (BOOL)quickRejectR:(ComposeAppSkikoRegion * _Nullable)r __attribute__((swift_name("quickReject(r:)")));
- (BOOL)setR:(ComposeAppSkikoRegion * _Nullable)r __attribute__((swift_name("set(r:)")));
- (BOOL)setEmpty __attribute__((swift_name("setEmpty()")));
- (BOOL)setPathPath:(ComposeAppSkikoPath * _Nullable)path clip:(ComposeAppSkikoRegion * _Nullable)clip __attribute__((swift_name("setPath(path:clip:)")));
- (BOOL)setRectRect:(ComposeAppSkikoIRect *)rect __attribute__((swift_name("setRect(rect:)")));
- (BOOL)setRectsRects:(ComposeAppKotlinArray<ComposeAppSkikoIRect *> *)rects __attribute__((swift_name("setRects(rects:)")));
- (BOOL)setRegionR:(ComposeAppSkikoRegion * _Nullable)r __attribute__((swift_name("setRegion(r:)")));
- (void)translateDx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("translate(dx:dy:)")));
@property (readonly) ComposeAppSkikoIRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) BOOL isComplex __attribute__((swift_name("isComplex")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isRect __attribute__((swift_name("isRect")));
@end

__attribute__((swift_name("SkikoDrawable")))
@interface ComposeAppSkikoDrawable : ComposeAppSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoDrawableCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppSkikoDrawable *)drawCanvas:(ComposeAppSkikoCanvas * _Nullable)canvas __attribute__((swift_name("draw(canvas:)")));
- (ComposeAppSkikoDrawable *)drawCanvas:(ComposeAppSkikoCanvas * _Nullable)canvas matrix:(ComposeAppSkikoMatrix33 * _Nullable)matrix __attribute__((swift_name("draw(canvas:matrix:)")));
- (ComposeAppSkikoDrawable *)drawCanvas:(ComposeAppSkikoCanvas * _Nullable)canvas x:(float)x y:(float)y __attribute__((swift_name("draw(canvas:x:y:)")));
- (ComposeAppSkikoPicture *)makePictureSnapshot __attribute__((swift_name("makePictureSnapshot()")));
- (ComposeAppSkikoDrawable *)notifyDrawingChanged __attribute__((swift_name("notifyDrawingChanged()")));
- (void)onDrawCanvas:(ComposeAppSkikoCanvas * _Nullable)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (ComposeAppSkikoRect *)onGetBounds __attribute__((swift_name("onGetBounds()")));
@property (readonly) ComposeAppSkikoRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFilterMode")))
@interface ComposeAppSkikoFilterMode : ComposeAppKotlinEnum<ComposeAppSkikoFilterMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoFilterMode *nearest __attribute__((swift_name("nearest")));
@property (class, readonly) ComposeAppSkikoFilterMode *linear __attribute__((swift_name("linear")));
+ (ComposeAppKotlinArray<ComposeAppSkikoFilterMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoFilterMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPicture")))
@interface ComposeAppSkikoPicture : ComposeAppSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoPictureCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppSkikoShader *)makeShaderTmx:(ComposeAppSkikoFilterTileMode *)tmx tmy:(ComposeAppSkikoFilterTileMode *)tmy mode:(ComposeAppSkikoFilterMode *)mode localMatrix:(ComposeAppSkikoMatrix33 * _Nullable)localMatrix tileRect:(ComposeAppSkikoRect * _Nullable)tileRect __attribute__((swift_name("makeShader(tmx:tmy:mode:localMatrix:tileRect:)")));
- (ComposeAppSkikoPicture *)playbackCanvas:(ComposeAppSkikoCanvas * _Nullable)canvas abort:(ComposeAppBoolean *(^ _Nullable)(void))abort __attribute__((swift_name("playback(canvas:abort:)")));
- (ComposeAppSkikoData *)serializeToData __attribute__((swift_name("serializeToData()")));
@property (readonly) void * _Nullable approximateBytesUsed __attribute__((swift_name("approximateBytesUsed")));
@property (readonly) int32_t approximateOpCount __attribute__((swift_name("approximateOpCount")));
@property (readonly) ComposeAppSkikoRect *cullRect __attribute__((swift_name("cullRect")));
@property (readonly) int32_t uniqueId __attribute__((swift_name("uniqueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFont")))
@interface ComposeAppSkikoFont : ComposeAppSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTypeface:(ComposeAppSkikoTypeface * _Nullable)typeface __attribute__((swift_name("init(typeface:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTypeface:(ComposeAppSkikoTypeface * _Nullable)typeface size:(float)size __attribute__((swift_name("init(typeface:size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTypeface:(ComposeAppSkikoTypeface * _Nullable)typeface size:(float)size scaleX:(float)scaleX skewX:(float)skewX __attribute__((swift_name("init(typeface:size:scaleX:skewX:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoFontCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)areBitmapsEmbedded __attribute__((swift_name("areBitmapsEmbedded()")));
- (ComposeAppKotlinArray<ComposeAppSkikoRect *> *)getBoundsGlyphs:(ComposeAppKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getBounds(glyphs:)")));
- (ComposeAppKotlinArray<ComposeAppSkikoRect *> *)getBoundsGlyphs:(ComposeAppKotlinShortArray * _Nullable)glyphs p:(ComposeAppSkikoPaint * _Nullable)p __attribute__((swift_name("getBounds(glyphs:p:)")));
- (ComposeAppSkikoPath * _Nullable)getPathGlyph:(int16_t)glyph __attribute__((swift_name("getPath(glyph:)")));
- (ComposeAppKotlinArray<ComposeAppSkikoPath *> *)getPathsGlyphs:(ComposeAppKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getPaths(glyphs:)")));
- (ComposeAppKotlinArray<ComposeAppSkikoPoint *> *)getPositionsGlyphs:(ComposeAppKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getPositions(glyphs:)")));
- (ComposeAppKotlinArray<ComposeAppSkikoPoint *> *)getPositionsGlyphs:(ComposeAppKotlinShortArray * _Nullable)glyphs offset:(ComposeAppSkikoPoint *)offset __attribute__((swift_name("getPositions(glyphs:offset:)")));
- (ComposeAppKotlinShortArray *)getStringGlyphsS:(NSString *)s __attribute__((swift_name("getStringGlyphs(s:)")));
- (int32_t)getStringGlyphsCountS:(NSString * _Nullable)s __attribute__((swift_name("getStringGlyphsCount(s:)")));
- (int16_t)getUTF32GlyphUnichar:(int32_t)unichar __attribute__((swift_name("getUTF32Glyph(unichar:)")));
- (ComposeAppKotlinShortArray *)getUTF32GlyphsUni:(ComposeAppKotlinIntArray * _Nullable)uni __attribute__((swift_name("getUTF32Glyphs(uni:)")));
- (ComposeAppKotlinFloatArray *)getWidthsGlyphs:(ComposeAppKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getWidths(glyphs:)")));
- (ComposeAppKotlinFloatArray *)getXPositionsGlyphs:(ComposeAppKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getXPositions(glyphs:)")));
- (ComposeAppKotlinFloatArray *)getXPositionsGlyphs:(ComposeAppKotlinShortArray * _Nullable)glyphs offset:(float)offset __attribute__((swift_name("getXPositions(glyphs:offset:)")));
- (ComposeAppSkikoFont *)makeWithSizeSize:(float)size __attribute__((swift_name("makeWithSize(size:)")));
- (ComposeAppSkikoRect *)measureTextS:(NSString * _Nullable)s p:(ComposeAppSkikoPaint * _Nullable)p __attribute__((swift_name("measureText(s:p:)")));
- (float)measureTextWidthS:(NSString * _Nullable)s __attribute__((swift_name("measureTextWidth(s:)")));
- (float)measureTextWidthS:(NSString * _Nullable)s p:(ComposeAppSkikoPaint * _Nullable)p __attribute__((swift_name("measureTextWidth(s:p:)")));
- (void)setBitmapsEmbeddedValue:(BOOL)value __attribute__((swift_name("setBitmapsEmbedded(value:)")));
- (ComposeAppSkikoFont *)setTypefaceTypeface:(ComposeAppSkikoTypeface * _Nullable)typeface __attribute__((swift_name("setTypeface(typeface:)")));
@property ComposeAppSkikoFontEdging *edging __attribute__((swift_name("edging")));
@property ComposeAppSkikoFontHinting *hinting __attribute__((swift_name("hinting")));
@property BOOL isAutoHintingForced __attribute__((swift_name("isAutoHintingForced")));
@property BOOL isBaselineSnapped __attribute__((swift_name("isBaselineSnapped")));
@property BOOL isEmboldened __attribute__((swift_name("isEmboldened")));
@property BOOL isLinearMetrics __attribute__((swift_name("isLinearMetrics")));
@property BOOL isSubpixel __attribute__((swift_name("isSubpixel")));
@property (readonly) ComposeAppSkikoFontMetrics *metrics __attribute__((swift_name("metrics")));
@property float scaleX __attribute__((swift_name("scaleX")));
@property float size __attribute__((swift_name("size")));
@property float skewX __attribute__((swift_name("skewX")));
@property (readonly) float spacing __attribute__((swift_name("spacing")));
@property (readonly) ComposeAppSkikoTypeface * _Nullable typeface __attribute__((swift_name("typeface")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTextBlob")))
@interface ComposeAppSkikoTextBlob : ComposeAppSkikoManaged <ComposeAppKotlinIterable>
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoTextBlobCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppKotlinFloatArray * _Nullable)getInterceptsLowerBound:(float)lowerBound upperBound:(float)upperBound __attribute__((swift_name("getIntercepts(lowerBound:upperBound:)")));
- (ComposeAppKotlinFloatArray * _Nullable)getInterceptsLowerBound:(float)lowerBound upperBound:(float)upperBound paint:(ComposeAppSkikoPaint * _Nullable)paint __attribute__((swift_name("getIntercepts(lowerBound:upperBound:paint:)")));
- (id<ComposeAppKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (ComposeAppSkikoData *)serializeToData __attribute__((swift_name("serializeToData()")));
@property (readonly) ComposeAppSkikoRect *blockBounds __attribute__((swift_name("blockBounds")));
@property (readonly) ComposeAppSkikoRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) ComposeAppKotlinIntArray *clusters __attribute__((swift_name("clusters")));
@property (readonly) float firstBaseline __attribute__((swift_name("firstBaseline")));
@property (readonly) ComposeAppKotlinShortArray *glyphs __attribute__((swift_name("glyphs")));
@property (readonly) float lastBaseline __attribute__((swift_name("lastBaseline")));
@property (readonly) ComposeAppKotlinFloatArray *positions __attribute__((swift_name("positions")));
@property (readonly) ComposeAppSkikoRect *tightBounds __attribute__((swift_name("tightBounds")));
@property (readonly) int32_t uniqueId __attribute__((swift_name("uniqueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTextLine")))
@interface ComposeAppSkikoTextLine : ComposeAppSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoTextLineCompanion *companion __attribute__((swift_name("companion")));
- (float)getCoordAtOffsetOffset:(int32_t)offset __attribute__((swift_name("getCoordAtOffset(offset:)")));
- (ComposeAppKotlinFloatArray * _Nullable)getInterceptsLowerBound:(float)lowerBound upperBound:(float)upperBound __attribute__((swift_name("getIntercepts(lowerBound:upperBound:)")));
- (ComposeAppKotlinFloatArray * _Nullable)getInterceptsLowerBound:(float)lowerBound upperBound:(float)upperBound paint:(ComposeAppSkikoPaint * _Nullable)paint __attribute__((swift_name("getIntercepts(lowerBound:upperBound:paint:)")));
- (int32_t)getLeftOffsetAtCoordX:(float)x __attribute__((swift_name("getLeftOffsetAtCoord(x:)")));
- (int32_t)getOffsetAtCoordX:(float)x __attribute__((swift_name("getOffsetAtCoord(x:)")));
@property (readonly) float ascent __attribute__((swift_name("ascent")));
@property (readonly) float capHeight __attribute__((swift_name("capHeight")));
@property (readonly) float descent __attribute__((swift_name("descent")));
@property (readonly) ComposeAppKotlinShortArray *glyphs __attribute__((swift_name("glyphs")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float leading __attribute__((swift_name("leading")));
@property (readonly) ComposeAppKotlinFloatArray *positions __attribute__((swift_name("positions")));
@property (readonly) ComposeAppSkikoTextBlob * _Nullable textBlob __attribute__((swift_name("textBlob")));
@property (readonly) float width __attribute__((swift_name("width")));
@property (readonly) float xHeight __attribute__((swift_name("xHeight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoVertexMode")))
@interface ComposeAppSkikoVertexMode : ComposeAppKotlinEnum<ComposeAppSkikoVertexMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoVertexMode *triangles __attribute__((swift_name("triangles")));
@property (class, readonly) ComposeAppSkikoVertexMode *triangleStrip __attribute__((swift_name("triangleStrip")));
@property (class, readonly) ComposeAppSkikoVertexMode *triangleFan __attribute__((swift_name("triangleFan")));
+ (ComposeAppKotlinArray<ComposeAppSkikoVertexMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoVertexMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoCanvas.SaveLayerRec")))
@interface ComposeAppSkikoCanvasSaveLayerRec : ComposeAppBase
- (instancetype)initWithBounds:(ComposeAppSkikoRect * _Nullable)bounds paint:(ComposeAppSkikoPaint * _Nullable)paint backdrop:(ComposeAppSkikoImageFilter * _Nullable)backdrop colorSpace:(ComposeAppSkikoColorSpace * _Nullable)colorSpace saveLayerFlags:(ComposeAppSkikoCanvasSaveLayerFlags *)saveLayerFlags __attribute__((swift_name("init(bounds:paint:backdrop:colorSpace:saveLayerFlags:)"))) __attribute__((objc_designated_initializer));
@property (readonly) ComposeAppSkikoImageFilter * _Nullable backdrop __attribute__((swift_name("backdrop")));
@property (readonly) ComposeAppSkikoRect * _Nullable bounds __attribute__((swift_name("bounds")));
@property (readonly) ComposeAppSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) ComposeAppSkikoPaint * _Nullable paint __attribute__((swift_name("paint")));
@property (readonly) ComposeAppSkikoCanvasSaveLayerFlags *saveLayerFlags __attribute__((swift_name("saveLayerFlags")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBackendRenderTarget.Companion")))
@interface ComposeAppSkikoBackendRenderTargetCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoBackendRenderTargetCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoBackendRenderTarget *)makeDirect3DWidth:(int32_t)width height:(int32_t)height texturePtr:(void * _Nullable)texturePtr format:(int32_t)format sampleCnt:(int32_t)sampleCnt levelCnt:(int32_t)levelCnt __attribute__((swift_name("makeDirect3D(width:height:texturePtr:format:sampleCnt:levelCnt:)")));
- (ComposeAppSkikoBackendRenderTarget *)makeGLWidth:(int32_t)width height:(int32_t)height sampleCnt:(int32_t)sampleCnt stencilBits:(int32_t)stencilBits fbId:(int32_t)fbId fbFormat:(int32_t)fbFormat __attribute__((swift_name("makeGL(width:height:sampleCnt:stencilBits:fbId:fbFormat:)")));
- (ComposeAppSkikoBackendRenderTarget *)makeMetalWidth:(int32_t)width height:(int32_t)height texturePtr:(void * _Nullable)texturePtr __attribute__((swift_name("makeMetal(width:height:texturePtr:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixelGeometry")))
@interface ComposeAppSkikoPixelGeometry : ComposeAppKotlinEnum<ComposeAppSkikoPixelGeometry *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoPixelGeometry *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) ComposeAppSkikoPixelGeometry *rgbH __attribute__((swift_name("rgbH")));
@property (class, readonly) ComposeAppSkikoPixelGeometry *bgrH __attribute__((swift_name("bgrH")));
@property (class, readonly) ComposeAppSkikoPixelGeometry *rgbV __attribute__((swift_name("rgbV")));
@property (class, readonly) ComposeAppSkikoPixelGeometry *bgrV __attribute__((swift_name("bgrV")));
+ (ComposeAppKotlinArray<ComposeAppSkikoPixelGeometry *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoPixelGeometry *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion.Companion")))
@interface ComposeAppSkikoRegionCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoRegionCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion.Op")))
@interface ComposeAppSkikoRegionOp : ComposeAppKotlinEnum<ComposeAppSkikoRegionOp *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoRegionOpCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) ComposeAppSkikoRegionOp *difference __attribute__((swift_name("difference")));
@property (class, readonly) ComposeAppSkikoRegionOp *intersect __attribute__((swift_name("intersect")));
@property (class, readonly) ComposeAppSkikoRegionOp *union_ __attribute__((swift_name("union_")));
@property (class, readonly) ComposeAppSkikoRegionOp *xor_ __attribute__((swift_name("xor_")));
@property (class, readonly) ComposeAppSkikoRegionOp *reverseDifference __attribute__((swift_name("reverseDifference")));
@property (class, readonly) ComposeAppSkikoRegionOp *replace __attribute__((swift_name("replace")));
+ (ComposeAppKotlinArray<ComposeAppSkikoRegionOp *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoRegionOp *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoDrawable.Companion")))
@interface ComposeAppSkikoDrawableCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoDrawableCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPicture.Companion")))
@interface ComposeAppSkikoPictureCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoPictureCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoPicture * _Nullable)makeFromDataData:(ComposeAppSkikoData * _Nullable)data __attribute__((swift_name("makeFromData(data:)")));
- (ComposeAppSkikoPicture *)makePlaceholderCull:(ComposeAppSkikoRect *)cull __attribute__((swift_name("makePlaceholder(cull:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTypeface")))
@interface ComposeAppSkikoTypeface : ComposeAppSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoTypefaceCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppKotlinIntArray * _Nullable)getKerningPairAdjustmentsGlyphs:(ComposeAppKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getKerningPairAdjustments(glyphs:)")));
- (ComposeAppKotlinShortArray *)getStringGlyphsS:(NSString *)s __attribute__((swift_name("getStringGlyphs(s:)")));
- (ComposeAppSkikoData * _Nullable)getTableDataTag:(NSString *)tag __attribute__((swift_name("getTableData(tag:)")));
- (void * _Nullable)getTableSizeTag:(NSString *)tag __attribute__((swift_name("getTableSize(tag:)")));
- (int16_t)getUTF32GlyphUnichar:(int32_t)unichar __attribute__((swift_name("getUTF32Glyph(unichar:)")));
- (ComposeAppKotlinShortArray *)getUTF32GlyphsUni:(ComposeAppKotlinIntArray * _Nullable)uni __attribute__((swift_name("getUTF32Glyphs(uni:)")));
- (ComposeAppSkikoTypeface *)makeCloneVariation:(ComposeAppSkikoFontVariation *)variation __attribute__((swift_name("makeClone(variation:)")));
- (ComposeAppSkikoTypeface *)makeCloneVariations:(ComposeAppKotlinArray<ComposeAppSkikoFontVariation *> *)variations collectionIndex:(int32_t)collectionIndex __attribute__((swift_name("makeClone(variations:collectionIndex:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppSkikoRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) NSString *familyName __attribute__((swift_name("familyName")));
@property (readonly) ComposeAppKotlinArray<ComposeAppSkikoFontFamilyName *> *familyNames __attribute__((swift_name("familyNames")));
@property (readonly) ComposeAppSkikoFontStyle *fontStyle __attribute__((swift_name("fontStyle")));
@property (readonly) int32_t glyphsCount __attribute__((swift_name("glyphsCount")));
@property (readonly) BOOL isBold __attribute__((swift_name("isBold")));
@property (readonly) BOOL isFixedPitch __attribute__((swift_name("isFixedPitch")));
@property (readonly) BOOL isItalic __attribute__((swift_name("isItalic")));
@property (readonly) ComposeAppKotlinArray<NSString *> *tableTags __attribute__((swift_name("tableTags")));
@property (readonly) int32_t tablesCount __attribute__((swift_name("tablesCount")));
@property (readonly) int32_t uniqueId __attribute__((swift_name("uniqueId")));
@property (readonly) int32_t unitsPerEm __attribute__((swift_name("unitsPerEm")));
@property (readonly) ComposeAppKotlinArray<ComposeAppSkikoFontVariationAxis *> * _Nullable variationAxes __attribute__((swift_name("variationAxes")));
@property (readonly) ComposeAppKotlinArray<ComposeAppSkikoFontVariation *> * _Nullable variations __attribute__((swift_name("variations")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFont.Companion")))
@interface ComposeAppSkikoFontCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoFontCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontEdging")))
@interface ComposeAppSkikoFontEdging : ComposeAppKotlinEnum<ComposeAppSkikoFontEdging *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoFontEdging *alias __attribute__((swift_name("alias")));
@property (class, readonly) ComposeAppSkikoFontEdging *antiAlias __attribute__((swift_name("antiAlias")));
@property (class, readonly) ComposeAppSkikoFontEdging *subpixelAntiAlias __attribute__((swift_name("subpixelAntiAlias")));
+ (ComposeAppKotlinArray<ComposeAppSkikoFontEdging *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoFontEdging *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontHinting")))
@interface ComposeAppSkikoFontHinting : ComposeAppKotlinEnum<ComposeAppSkikoFontHinting *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoFontHinting *none __attribute__((swift_name("none")));
@property (class, readonly) ComposeAppSkikoFontHinting *slight __attribute__((swift_name("slight")));
@property (class, readonly) ComposeAppSkikoFontHinting *normal __attribute__((swift_name("normal")));
@property (class, readonly) ComposeAppSkikoFontHinting *full __attribute__((swift_name("full")));
+ (ComposeAppKotlinArray<ComposeAppSkikoFontHinting *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoFontHinting *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontMetrics")))
@interface ComposeAppSkikoFontMetrics : ComposeAppBase
- (instancetype)initWithTop:(float)top ascent:(float)ascent descent:(float)descent bottom:(float)bottom leading:(float)leading avgCharWidth:(float)avgCharWidth maxCharWidth:(float)maxCharWidth xMin:(float)xMin xMax:(float)xMax xHeight:(float)xHeight capHeight:(float)capHeight underlineThickness:(ComposeAppFloat * _Nullable)underlineThickness underlinePosition:(ComposeAppFloat * _Nullable)underlinePosition strikeoutThickness:(ComposeAppFloat * _Nullable)strikeoutThickness strikeoutPosition:(ComposeAppFloat * _Nullable)strikeoutPosition __attribute__((swift_name("init(top:ascent:descent:bottom:leading:avgCharWidth:maxCharWidth:xMin:xMax:xHeight:capHeight:underlineThickness:underlinePosition:strikeoutThickness:strikeoutPosition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoFontMetricsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float ascent __attribute__((swift_name("ascent")));
@property (readonly) float avgCharWidth __attribute__((swift_name("avgCharWidth")));
@property (readonly) float bottom __attribute__((swift_name("bottom")));
@property (readonly) float capHeight __attribute__((swift_name("capHeight")));
@property (readonly) float descent __attribute__((swift_name("descent")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float leading __attribute__((swift_name("leading")));
@property (readonly) float maxCharWidth __attribute__((swift_name("maxCharWidth")));
@property (readonly) ComposeAppFloat * _Nullable strikeoutPosition __attribute__((swift_name("strikeoutPosition")));
@property (readonly) ComposeAppFloat * _Nullable strikeoutThickness __attribute__((swift_name("strikeoutThickness")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) ComposeAppFloat * _Nullable underlinePosition __attribute__((swift_name("underlinePosition")));
@property (readonly) ComposeAppFloat * _Nullable underlineThickness __attribute__((swift_name("underlineThickness")));
@property (readonly) float xHeight __attribute__((swift_name("xHeight")));
@property (readonly) float xMax __attribute__((swift_name("xMax")));
@property (readonly) float xMin __attribute__((swift_name("xMin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTextBlob.Companion")))
@interface ComposeAppSkikoTextBlobCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoTextBlobCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoTextBlob * _Nullable)makeFromDataData:(ComposeAppSkikoData * _Nullable)data __attribute__((swift_name("makeFromData(data:)")));
- (ComposeAppSkikoTextBlob * _Nullable)makeFromPosGlyphs:(ComposeAppKotlinShortArray *)glyphs pos:(ComposeAppKotlinArray<ComposeAppSkikoPoint *> *)pos font:(ComposeAppSkikoFont * _Nullable)font __attribute__((swift_name("makeFromPos(glyphs:pos:font:)")));
- (ComposeAppSkikoTextBlob * _Nullable)makeFromPosHGlyphs:(ComposeAppKotlinShortArray *)glyphs xpos:(ComposeAppKotlinFloatArray *)xpos ypos:(float)ypos font:(ComposeAppSkikoFont * _Nullable)font __attribute__((swift_name("makeFromPosH(glyphs:xpos:ypos:font:)")));
- (ComposeAppSkikoTextBlob * _Nullable)makeFromRSXformGlyphs:(ComposeAppKotlinShortArray *)glyphs xform:(ComposeAppKotlinArray<ComposeAppSkikoRSXform *> *)xform font:(ComposeAppSkikoFont * _Nullable)font __attribute__((swift_name("makeFromRSXform(glyphs:xform:font:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTextLine.Companion")))
@interface ComposeAppSkikoTextLineCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoTextLineCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoTextLine *)makeText:(NSString * _Nullable)text font:(ComposeAppSkikoFont * _Nullable)font __attribute__((swift_name("make(text:font:)")));
- (ComposeAppSkikoTextLine *)makeText:(NSString * _Nullable)text font:(ComposeAppSkikoFont * _Nullable)font opts:(ComposeAppSkikoShapingOptions * _Nullable)opts __attribute__((swift_name("make(text:font:opts:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoCanvas.SaveLayerFlags")))
@interface ComposeAppSkikoCanvasSaveLayerFlags : ComposeAppBase
- (instancetype)initWithFlagsSet:(ComposeAppKotlinArray<ComposeAppSkikoCanvasSaveLayerFlagsSet *> *)flagsSet __attribute__((swift_name("init(flagsSet:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsFlag:(ComposeAppSkikoCanvasSaveLayerFlagsSet *)flag __attribute__((swift_name("contains(flag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion.OpCompanion")))
@interface ComposeAppSkikoRegionOpCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoRegionOpCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTypeface.Companion")))
@interface ComposeAppSkikoTypefaceCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoTypefaceCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoTypeface *)makeEmpty __attribute__((swift_name("makeEmpty()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontVariation")))
@interface ComposeAppSkikoFontVariation : ComposeAppBase
- (instancetype)initWith_tag:(int32_t)_tag value:(float)value __attribute__((swift_name("init(_tag:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeature:(NSString *)feature value:(float)value __attribute__((swift_name("init(feature:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoFontVariationCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t _tag __attribute__((swift_name("_tag")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@property (readonly) float value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontFamilyName")))
@interface ComposeAppSkikoFontFamilyName : ComposeAppBase
- (instancetype)initWithName:(NSString *)name language:(NSString *)language __attribute__((swift_name("init(name:language:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontStyle")))
@interface ComposeAppSkikoFontStyle : ComposeAppBase
- (instancetype)initWithWeight:(int32_t)weight width:(int32_t)width slant:(ComposeAppSkikoFontSlant *)slant __attribute__((swift_name("init(weight:width:slant:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoFontStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (ComposeAppSkikoFontStyle *)withSlantSlant:(ComposeAppSkikoFontSlant *)slant __attribute__((swift_name("withSlant(slant:)")));
- (ComposeAppSkikoFontStyle *)withWeightWeight:(int32_t)weight __attribute__((swift_name("withWeight(weight:)")));
- (ComposeAppSkikoFontStyle *)withWidthWidth:(int32_t)width __attribute__((swift_name("withWidth(width:)")));
@property (readonly) int32_t _value __attribute__((swift_name("_value")));
@property (readonly) ComposeAppSkikoFontSlant *slant __attribute__((swift_name("slant")));
@property (readonly) int32_t weight __attribute__((swift_name("weight")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontVariationAxis")))
@interface ComposeAppSkikoFontVariationAxis : ComposeAppBase
- (instancetype)initWithTag:(NSString *)tag min:(float)min def:(float)def max:(float)max __attribute__((swift_name("init(tag:min:def:max:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWith_tag:(int32_t)_tag minValue:(float)minValue defaultValue:(float)defaultValue maxValue:(float)maxValue isHidden:(BOOL)isHidden __attribute__((swift_name("init(_tag:minValue:defaultValue:maxValue:isHidden:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTag:(NSString *)tag min:(float)min def:(float)def max:(float)max hidden:(BOOL)hidden __attribute__((swift_name("init(tag:min:def:max:hidden:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t _tag __attribute__((swift_name("_tag")));
@property (readonly) float defaultValue __attribute__((swift_name("defaultValue")));
@property (readonly) BOOL isHidden __attribute__((swift_name("isHidden")));
@property (readonly) float maxValue __attribute__((swift_name("maxValue")));
@property (readonly) float minValue __attribute__((swift_name("minValue")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontMetrics.Companion")))
@interface ComposeAppSkikoFontMetricsCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoFontMetricsCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRSXform")))
@interface ComposeAppSkikoRSXform : ComposeAppBase
- (instancetype)initWithScos:(float)scos ssin:(float)ssin tx:(float)tx ty:(float)ty __attribute__((swift_name("init(scos:ssin:tx:ty:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoRSXformCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShapingOptions")))
@interface ComposeAppSkikoShapingOptions : ComposeAppBase
- (instancetype)initWithFontMgr:(ComposeAppSkikoFontMgr * _Nullable)fontMgr features:(ComposeAppKotlinArray<ComposeAppSkikoFontFeature *> * _Nullable)features isLeftToRight:(BOOL)isLeftToRight isApproximateSpaces:(BOOL)isApproximateSpaces isApproximatePunctuation:(BOOL)isApproximatePunctuation __attribute__((swift_name("init(fontMgr:features:isLeftToRight:isApproximateSpaces:isApproximatePunctuation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoShapingOptionsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (ComposeAppSkikoShapingOptions *)withApproximatePunctuation_approximatePunctuation:(BOOL)_approximatePunctuation __attribute__((swift_name("withApproximatePunctuation(_approximatePunctuation:)")));
- (ComposeAppSkikoShapingOptions *)withApproximateSpaces_approximateSpaces:(BOOL)_approximateSpaces __attribute__((swift_name("withApproximateSpaces(_approximateSpaces:)")));
- (ComposeAppSkikoShapingOptions *)withFeaturesFeatures:(ComposeAppKotlinArray<ComposeAppSkikoFontFeature *> * _Nullable)features __attribute__((swift_name("withFeatures(features:)")));
- (ComposeAppSkikoShapingOptions *)withFeaturesFeaturesString:(NSString * _Nullable)featuresString __attribute__((swift_name("withFeatures(featuresString:)")));
- (ComposeAppSkikoShapingOptions *)withFontMgr_fontMgr:(ComposeAppSkikoFontMgr * _Nullable)_fontMgr __attribute__((swift_name("withFontMgr(_fontMgr:)")));
- (ComposeAppSkikoShapingOptions *)withLeftToRight_leftToRight:(BOOL)_leftToRight __attribute__((swift_name("withLeftToRight(_leftToRight:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoCanvas.SaveLayerFlagsSet")))
@interface ComposeAppSkikoCanvasSaveLayerFlagsSet : ComposeAppKotlinEnum<ComposeAppSkikoCanvasSaveLayerFlagsSet *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoCanvasSaveLayerFlagsSet *preservelcdtext __attribute__((swift_name("preservelcdtext")));
@property (class, readonly) ComposeAppSkikoCanvasSaveLayerFlagsSet *initwithprevious __attribute__((swift_name("initwithprevious")));
@property (class, readonly) ComposeAppSkikoCanvasSaveLayerFlagsSet *f16colortype __attribute__((swift_name("f16colortype")));
+ (ComposeAppKotlinArray<ComposeAppSkikoCanvasSaveLayerFlagsSet *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoCanvasSaveLayerFlagsSet *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t mask __attribute__((swift_name("mask")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontVariation.Companion")))
@interface ComposeAppSkikoFontVariationCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoFontVariationCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKotlinArray<ComposeAppSkikoFontVariation *> *)parseStr:(NSString *)str __attribute__((swift_name("parse(str:)")));
- (ComposeAppSkikoFontVariation *)parseOneS:(NSString *)s __attribute__((swift_name("parseOne(s:)")));
@property (readonly) ComposeAppKotlinArray<ComposeAppSkikoFontVariation *> *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontSlant")))
@interface ComposeAppSkikoFontSlant : ComposeAppKotlinEnum<ComposeAppSkikoFontSlant *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppSkikoFontSlant *upright __attribute__((swift_name("upright")));
@property (class, readonly) ComposeAppSkikoFontSlant *italic __attribute__((swift_name("italic")));
@property (class, readonly) ComposeAppSkikoFontSlant *oblique __attribute__((swift_name("oblique")));
+ (ComposeAppKotlinArray<ComposeAppSkikoFontSlant *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppSkikoFontSlant *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontStyle.Companion")))
@interface ComposeAppSkikoFontStyleCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoFontStyleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppSkikoFontStyle *BOLD __attribute__((swift_name("BOLD")));
@property (readonly) ComposeAppSkikoFontStyle *BOLD_ITALIC __attribute__((swift_name("BOLD_ITALIC")));
@property (readonly) ComposeAppSkikoFontStyle *ITALIC __attribute__((swift_name("ITALIC")));
@property (readonly) ComposeAppSkikoFontStyle *NORMAL __attribute__((swift_name("NORMAL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRSXform.Companion")))
@interface ComposeAppSkikoRSXformCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoRSXformCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoRSXform *)makeFromRadiansScale:(float)scale radians:(float)radians tx:(float)tx ty:(float)ty ax:(float)ax ay:(float)ay __attribute__((swift_name("makeFromRadians(scale:radians:tx:ty:ax:ay:)")));
@end

__attribute__((swift_name("SkikoFontMgr")))
@interface ComposeAppSkikoFontMgr : ComposeAppSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoFontMgrCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)getFamilyNameIndex:(int32_t)index __attribute__((swift_name("getFamilyName(index:)")));
- (ComposeAppSkikoTypeface * _Nullable)legacyMakeTypefaceName:(NSString *)name style:(ComposeAppSkikoFontStyle *)style __attribute__((swift_name("legacyMakeTypeface(name:style:)")));
- (ComposeAppSkikoTypeface * _Nullable)makeFromDataData:(ComposeAppSkikoData * _Nullable)data ttcIndex:(int32_t)ttcIndex __attribute__((swift_name("makeFromData(data:ttcIndex:)")));
- (ComposeAppSkikoTypeface * _Nullable)makeFromFilePath:(NSString *)path ttcIndex:(int32_t)ttcIndex __attribute__((swift_name("makeFromFile(path:ttcIndex:)")));
- (ComposeAppSkikoFontStyleSet * _Nullable)makeStyleSetIndex:(int32_t)index __attribute__((swift_name("makeStyleSet(index:)")));
- (ComposeAppSkikoTypeface * _Nullable)matchFamiliesStyleFamilies:(ComposeAppKotlinArray<NSString *> *)families style:(ComposeAppSkikoFontStyle *)style __attribute__((swift_name("matchFamiliesStyle(families:style:)")));
- (ComposeAppSkikoTypeface * _Nullable)matchFamiliesStyleCharacterFamilies:(ComposeAppKotlinArray<NSString *> *)families style:(ComposeAppSkikoFontStyle *)style bcp47:(ComposeAppKotlinArray<NSString *> * _Nullable)bcp47 character:(int32_t)character __attribute__((swift_name("matchFamiliesStyleCharacter(families:style:bcp47:character:)")));
- (ComposeAppSkikoFontStyleSet *)matchFamilyFamilyName:(NSString * _Nullable)familyName __attribute__((swift_name("matchFamily(familyName:)")));
- (ComposeAppSkikoTypeface * _Nullable)matchFamilyStyleFamilyName:(NSString * _Nullable)familyName style:(ComposeAppSkikoFontStyle *)style __attribute__((swift_name("matchFamilyStyle(familyName:style:)")));
- (ComposeAppSkikoTypeface * _Nullable)matchFamilyStyleCharacterFamilyName:(NSString * _Nullable)familyName style:(ComposeAppSkikoFontStyle *)style bcp47:(ComposeAppKotlinArray<NSString *> * _Nullable)bcp47 character:(int32_t)character __attribute__((swift_name("matchFamilyStyleCharacter(familyName:style:bcp47:character:)")));
@property (readonly) int32_t familiesCount __attribute__((swift_name("familiesCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontFeature")))
@interface ComposeAppSkikoFontFeature : ComposeAppBase
- (instancetype)initWithFeature:(NSString *)feature __attribute__((swift_name("init(feature:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeature:(NSString *)feature value:(BOOL)value __attribute__((swift_name("init(feature:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeature:(NSString *)feature value_:(int32_t)value __attribute__((swift_name("init(feature:value_:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWith_tag:(int32_t)_tag value:(int32_t)value start:(uint32_t)start end:(uint32_t)end __attribute__((swift_name("init(_tag:value:start:end:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeature:(NSString *)feature value:(int32_t)value start:(uint32_t)start end:(uint32_t)end __attribute__((swift_name("init(feature:value:start:end:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppSkikoFontFeatureCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t _tag __attribute__((swift_name("_tag")));
@property (readonly) uint32_t end __attribute__((swift_name("end")));
@property (readonly) uint32_t start __attribute__((swift_name("start")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShapingOptions.Companion")))
@interface ComposeAppSkikoShapingOptionsCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoShapingOptionsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppSkikoShapingOptions *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontMgr.Companion")))
@interface ComposeAppSkikoFontMgrCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoFontMgrCompanion *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) ComposeAppSkikoFontMgr *default_ __attribute__((swift_name("default_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontStyleSet")))
@interface ComposeAppSkikoFontStyleSet : ComposeAppSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppSkikoFontStyleSetCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)count __attribute__((swift_name("count()")));
- (ComposeAppSkikoFontStyle *)getStyleIndex:(int32_t)index __attribute__((swift_name("getStyle(index:)")));
- (NSString *)getStyleNameIndex:(int32_t)index __attribute__((swift_name("getStyleName(index:)")));
- (ComposeAppSkikoTypeface * _Nullable)getTypefaceIndex:(int32_t)index __attribute__((swift_name("getTypeface(index:)")));
- (ComposeAppSkikoTypeface * _Nullable)matchStyleStyle:(ComposeAppSkikoFontStyle *)style __attribute__((swift_name("matchStyle(style:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontFeature.Companion")))
@interface ComposeAppSkikoFontFeatureCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoFontFeatureCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKotlinArray<ComposeAppSkikoFontFeature *> *)parseStr:(NSString *)str __attribute__((swift_name("parse(str:)")));
- (ComposeAppSkikoFontFeature *)parseOneS:(NSString *)s __attribute__((swift_name("parseOne(s:)")));
- (ComposeAppKotlinArray<ComposeAppSkikoFontFeature *> *)parseW3Str:(NSString *)str __attribute__((swift_name("parseW3(str:)")));
@property (readonly) ComposeAppKotlinArray<ComposeAppSkikoFontFeature *> *EMPTY __attribute__((swift_name("EMPTY")));
@property (readonly) uint32_t GLOBAL_END __attribute__((swift_name("GLOBAL_END")));
@property (readonly) uint32_t GLOBAL_START __attribute__((swift_name("GLOBAL_START")));
@property (readonly) ComposeAppSkikoPattern *_featurePattern __attribute__((swift_name("_featurePattern")));
@property (readonly) ComposeAppSkikoPattern *_splitPattern __attribute__((swift_name("_splitPattern")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontStyleSet.Companion")))
@interface ComposeAppSkikoFontStyleSetCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSkikoFontStyleSetCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppSkikoFontStyleSet *)makeEmpty __attribute__((swift_name("makeEmpty()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPattern")))
@interface ComposeAppSkikoPattern : ComposeAppBase
- (instancetype)initWithRegex:(NSString *)regex __attribute__((swift_name("init(regex:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppSkikoMatcher *)matcherInput:(id)input __attribute__((swift_name("matcher(input:)")));
- (ComposeAppKotlinArray<NSString *> *)splitInput:(id)input __attribute__((swift_name("split(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatcher")))
@interface ComposeAppSkikoMatcher : ComposeAppBase
- (instancetype)initWithRegex:(ComposeAppKotlinRegex *)regex input:(id)input __attribute__((swift_name("init(regex:input:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)groupIx:(int32_t)ix __attribute__((swift_name("group(ix:)")));
- (BOOL)matches __attribute__((swift_name("matches()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex")))
@interface ComposeAppKotlinRegex : ComposeAppBase
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern options:(NSSet<ComposeAppKotlinRegexOption *> *)options __attribute__((swift_name("init(pattern:options:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern option:(ComposeAppKotlinRegexOption *)option __attribute__((swift_name("init(pattern:option:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKotlinRegexCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsMatchInInput:(id)input __attribute__((swift_name("containsMatchIn(input:)")));
- (id<ComposeAppKotlinMatchResult> _Nullable)findInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("find(input:startIndex:)")));
- (id<ComposeAppKotlinSequence>)findAllInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("findAll(input:startIndex:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (id<ComposeAppKotlinMatchResult> _Nullable)matchAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchAt(input:index:)")));
- (id<ComposeAppKotlinMatchResult> _Nullable)matchEntireInput:(id)input __attribute__((swift_name("matchEntire(input:)")));
- (BOOL)matchesInput:(id)input __attribute__((swift_name("matches(input:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (BOOL)matchesAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchesAt(input:index:)")));
- (NSString *)replaceInput:(id)input transform:(id (^)(id<ComposeAppKotlinMatchResult>))transform __attribute__((swift_name("replace(input:transform:)")));
- (NSString *)replaceInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replace(input:replacement:)")));
- (NSString *)replaceFirstInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replaceFirst(input:replacement:)")));
- (NSArray<NSString *> *)splitInput:(id)input limit:(int32_t)limit __attribute__((swift_name("split(input:limit:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.6")
*/
- (id<ComposeAppKotlinSequence>)splitToSequenceInput:(id)input limit:(int32_t)limit __attribute__((swift_name("splitToSequence(input:limit:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<ComposeAppKotlinRegexOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegexOption")))
@interface ComposeAppKotlinRegexOption : ComposeAppKotlinEnum<ComposeAppKotlinRegexOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppKotlinRegexOption *ignoreCase __attribute__((swift_name("ignoreCase")));
@property (class, readonly) ComposeAppKotlinRegexOption *multiline __attribute__((swift_name("multiline")));
@property (class, readonly) ComposeAppKotlinRegexOption *literal __attribute__((swift_name("literal")));
@property (class, readonly) ComposeAppKotlinRegexOption *unixLines __attribute__((swift_name("unixLines")));
@property (class, readonly) ComposeAppKotlinRegexOption *comments __attribute__((swift_name("comments")));
@property (class, readonly) ComposeAppKotlinRegexOption *dotMatchesAll __attribute__((swift_name("dotMatchesAll")));
@property (class, readonly) ComposeAppKotlinRegexOption *canonEq __attribute__((swift_name("canonEq")));
+ (ComposeAppKotlinArray<ComposeAppKotlinRegexOption *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppKotlinRegexOption *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex.Companion")))
@interface ComposeAppKotlinRegexCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinRegexCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)escapeLiteral:(NSString *)literal __attribute__((swift_name("escape(literal:)")));
- (NSString *)escapeReplacementLiteral:(NSString *)literal __attribute__((swift_name("escapeReplacement(literal:)")));
- (ComposeAppKotlinRegex *)fromLiteralLiteral:(NSString *)literal __attribute__((swift_name("fromLiteral(literal:)")));
@end

__attribute__((swift_name("KotlinMatchResult")))
@protocol ComposeAppKotlinMatchResult
@required
- (id<ComposeAppKotlinMatchResult> _Nullable)next __attribute__((swift_name("next()")));
@property (readonly) ComposeAppKotlinMatchResultDestructured *destructured __attribute__((swift_name("destructured")));
@property (readonly) NSArray<NSString *> *groupValues __attribute__((swift_name("groupValues")));
@property (readonly) id<ComposeAppKotlinMatchGroupCollection> groups __attribute__((swift_name("groups")));
@property (readonly) ComposeAppKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchResultDestructured")))
@interface ComposeAppKotlinMatchResultDestructured : ComposeAppBase
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NSArray<NSString *> *)toList __attribute__((swift_name("toList()")));
@property (readonly) id<ComposeAppKotlinMatchResult> match __attribute__((swift_name("match")));
@end

__attribute__((swift_name("KotlinCollection")))
@protocol ComposeAppKotlinCollection <ComposeAppKotlinIterable>
@required
- (BOOL)containsElement:(id _Nullable)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) int32_t size_ __attribute__((swift_name("size_")));
@end

__attribute__((swift_name("KotlinMatchGroupCollection")))
@protocol ComposeAppKotlinMatchGroupCollection <ComposeAppKotlinCollection>
@required
- (ComposeAppKotlinMatchGroup * _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
@end

__attribute__((swift_name("KotlinIntProgression")))
@interface ComposeAppKotlinIntProgression : ComposeAppBase <ComposeAppKotlinIterable>
@property (class, readonly, getter=companion) ComposeAppKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (ComposeAppKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol ComposeAppKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol ComposeAppKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface ComposeAppKotlinIntRange : ComposeAppKotlinIntProgression <ComposeAppKotlinClosedRange, ComposeAppKotlinOpenEndRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(ComposeAppInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(ComposeAppInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
@property (readonly) ComposeAppInt *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Int type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) ComposeAppInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) ComposeAppInt *start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchGroup")))
@interface ComposeAppKotlinMatchGroup : ComposeAppBase
- (instancetype)initWithValue:(NSString *)value range:(ComposeAppKotlinIntRange *)range __attribute__((swift_name("init(value:range:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKotlinMatchGroup *)doCopyValue:(NSString *)value range:(ComposeAppKotlinIntRange *)range __attribute__((swift_name("doCopy(value:range:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface ComposeAppKotlinIntProgressionCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface ComposeAppKotlinIntRangeCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
