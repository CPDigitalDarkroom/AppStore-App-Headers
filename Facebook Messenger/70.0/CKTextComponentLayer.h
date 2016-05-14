/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/CKAsyncLayer.h>

@class CKTextComponentLayerHighlighter, CKTextKitRenderer;

@interface CKTextComponentLayer : CKAsyncLayer {

	CKTextComponentLayerHighlighter* _highlighter;
	CKTextKitRenderer* _renderer;

}

@property (nonatomic,retain) CKTextKitRenderer * renderer;                                 //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) CKTextComponentLayerHighlighter * highlighter; 
+(void)drawInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
+(id)defaultValueForKey:(id)arg1 ;
-(id)drawParameters;
-(id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1 ;
-(void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2 ;
-(CKTextComponentLayerHighlighter *)highlighter;
-(void)setRenderer:(CKTextKitRenderer *)arg1 ;
-(void)setNeedsDisplayOnBoundsChange:(char)arg1 ;
-(void)layoutSublayers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CKTextKitRenderer *)renderer;
@end

