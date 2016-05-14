/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UIViewController;


@protocol FBStackViewControllerProtocol <NSObject,FBAnalyticsInfoSource>
@property (nonatomic,copy,readonly) NSArray * modalPresentationItems; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> topModalItem; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> bottomModalItem; 
@property (nonatomic,readonly) UIViewController * topModalViewController; 
@property (nonatomic,readonly) UIViewController * bottomModalViewController; 
@optional
-(void)modalItem:(id)arg1 didUpdateOcclusionState:(char)arg2;

@required
-(NSArray *)modalPresentationItems;
-(void)addModalItem:(id)arg1;
-(UIViewController *)topModalViewController;
-(UIViewController *)bottomModalViewController;
-(void)removeModalItem:(id)arg1;
-(id<FBModallyPresentableItem>)topModalItem;
-(id<FBModallyPresentableItem>)bottomModalItem;

@end

