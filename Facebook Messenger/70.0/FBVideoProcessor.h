/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMediaProcessor.h>

@class FBVideoProcessorConfig, FBFilterGroup, FBGLContext, FBFilter, NSString;

@interface FBVideoProcessor : NSObject <FBMediaProcessor> {

	FBVideoProcessorConfig* _videoProcessorConfig;
	FBFilterGroup* _filterGroup;
	FBGLContext* _openGLContext;
	FBFilterGroup* _copyFilterGroup;
	CVPixelBufferPoolRef _pixelBufferPool;
	CGSize _pixelBufferSize;
	CGSize _configureCacheInputSize;
	CGSize _configureCacheOutputSize;
	FBFilter* _configureCacheFilter;
	char _needsConfigure;

}

@property (nonatomic,readonly) FBGLContext * openGLContext;              //@synthesize openGLContext=_openGLContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)render:(CVBufferRef)arg1 toSurfaces:(id)arg2 ;
-(opaqueCMSampleBufferRef)createProcessedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithVideoProcessorConfig:(id)arg1 openGLContext:(id)arg2 ;
-(id)popReusableSurfaceWithSize:(CGSize)arg1 ;
-(void)pushReusableSurface:(id)arg1 ;
-(void)removeFilterAtIndex:(unsigned)arg1 ;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(void)_applyVideoProcessorConfig:(id)arg1 ;
-(void)_insertFilterConfig:(id)arg1 atIndex:(unsigned)arg2 ;
-(opaqueCMSampleBufferRef)createProcessedSampleBuffer:(opaqueCMSampleBufferRef)arg1 outputSize:(CGSize)arg2 ;
-(CVPixelBufferPoolRef)pixelBufferPoolForPixelBufferOfSize:(CGSize)arg1 ;
-(void)render:(CVBufferRef)arg1 toSurface:(id)arg2 ;
-(void)displaySurface:(id)arg1 toSurface:(id)arg2 ;
-(void)_renderSurface:(id)arg1 toSurface:(id)arg2 usingFilter:(id)arg3 ;
-(_GLKMatrix4)_computeTextureTransformForInputSize:(CGSize)arg1 cropRectangle:(CGRect)arg2 ;
-(void)_configureFilter:(id)arg1 forInputSize:(CGSize)arg2 outputSize:(CGSize)arg3 ;
-(void)insertFilterWithConfig:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)sendFilterCommand:(id)arg1 toFilterAtIndex:(unsigned)arg2 ;
-(void)display:(opaqueCMSampleBufferRef)arg1 toSurface:(id)arg2 ;
-(void)setScalingMode:(unsigned)arg1 ;
-(void)dealloc;
-(void)setCropRectangle:(CGRect)arg1 ;
-(unsigned)filtersCount;
-(FBGLContext *)openGLContext;
@end

