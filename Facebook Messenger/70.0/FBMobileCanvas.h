/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBWebBridge, NSDictionary, FBMobileCanvasDialogWrapper;

@interface FBMobileCanvas : NSObject {

	FBWebBridge* _webBridge;
	NSDictionary* _metaTags;
	FBMobileCanvasDialogWrapper* _dialog;

}

@property (nonatomic,retain) FBMobileCanvasDialogWrapper * dialog;              //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,copy) NSDictionary * metaTags;                             //@synthesize metaTags=_metaTags - In the implementation block
-(void)_closeDialogWrapper:(id)arg1 ;
-(void)setMetaTags:(NSDictionary *)arg1 ;
-(NSDictionary *)metaTags;
-(void)fireActionButtonEvent;
-(void)fireCancelButtonEvent;
-(void)dialogClosed;
-(void)hijackedDialogClosed;
-(void)sendResultFromHijackedDialog:(id)arg1 fromURL:(id)arg2 ;
-(char)handlePossibleBridgeRequestURL:(id)arg1 ;
-(void)attachToWebView;
-(void)openURL:(id)arg1 windowID:(id)arg2 ;
-(void)setCancelAction:(id)arg1 handleCancelEvent:(id)arg2 ;
-(void)closeWindowWithID:(id)arg1 ;
-(void)dialogDidLoad;
-(void)postMessage:(id)arg1 targetOrigin:(id)arg2 windowID:(id)arg3 ;
-(void)setDialog:(FBMobileCanvasDialogWrapper *)arg1 ;
-(FBMobileCanvasDialogWrapper *)dialog;
-(id)initWithDialog:(id)arg1 ;
@end

