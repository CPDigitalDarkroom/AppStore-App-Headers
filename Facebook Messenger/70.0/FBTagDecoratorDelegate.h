/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTagDecoratorDelegate <NSObject>
@optional
-(void)tagDecorator:(id)arg1 searchTextDidChange:(id)arg2;
-(void)tagDecorator:(id)arg1 didTapTagsEdge:(id)arg2;
-(void)tagDecorator:(id)arg1 didTapFaceboxesEdge:(id)arg2;
-(id)tagDecorator:(id)arg1 addFaceRect:(CGRect)arg2 toAvatar:(id)arg3 text:(id)arg4 loggingSuffix:(id)arg5;
-(void)tagDecorator:(id)arg1 didRejectTagForFaceboxesEdge:(id)arg2;
-(void)tagDecoratorTaggingInterfaceWillDisappear:(id)arg1;
-(void)tagDecoratorTaggingInterfaceDidDisappear:(id)arg1;
-(void)tagDecoratorTaggingInterfaceWillAppear:(id)arg1;
-(char)tagDecorator:(id)arg1 shouldShowTagGuideForUser:(id)arg2;
-(char)tagDecoratorCanShowNUX:(id)arg1;
-(id)passthroughViewsForFaceAlertsNUX;

@required
-(void)tagDecorator:(id)arg1 didRemoveTagsEdge:(id)arg2;
-(void)tagDecoratorNeedsResetFaceboxes:(id)arg1;
-(id)tagAnalyticsModule;

@end

