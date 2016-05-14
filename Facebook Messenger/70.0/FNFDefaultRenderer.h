/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FNFPlayerRenderer.h>

@class FNFGLProgram, NSString;

@interface FNFDefaultRenderer : NSObject <FNFPlayerRenderer> {

	FNFGLProgram* _glProgram;
	unsigned _vertexArrayObject;
	unsigned _vertexBuffer;
	int _uniforms[4];
	int _backingWidth;
	int _backingHeight;
	float _rotation;
	const float* _colorConversion;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_loadShaders;
-(char)_updateVertexArrayWithPresentationRect:(CGSize)arg1 videoGravity:(id)arg2 layerBounds:(CGRect)arg3 transform:(CGAffineTransform)arg4 ;
-(char)shouldRenderWhilePlaybackPaused;
-(char)setupGLState;
-(char)drawFrame:(char)arg1 presentationRect:(CGSize)arg2 backingWidth:(int)arg3 backingHeight:(int)arg4 frameBuffer:(unsigned)arg5 videoGravity:(id)arg6 rotation:(float)arg7 layerBounds:(CGRect)arg8 transform:(CGAffineTransform)arg9 colorConversion:(const float*)arg10 ;
-(void)restoreGLState;
-(void)invalidate;
-(char)_setupBuffers;
@end

