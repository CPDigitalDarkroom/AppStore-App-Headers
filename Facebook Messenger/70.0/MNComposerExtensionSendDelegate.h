/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposerExtensionSendDelegate <NSObject>
@required
-(void)composerExtensionDidBeginSending:(id)arg1;
-(void)composerExtensionDidSendRequest:(id)arg1;
-(void)composerExtension:(id)arg1 didCommitSendingWithText:(id)arg2 attachment:(id)arg3 attribution:(id)arg4 clientTags:(id)arg5;
-(void)composerExtensionDidCancelSending:(id)arg1;
-(char)composerExtensionCanSelectContent:(id)arg1;
-(void)composerExtension:(id)arg1 didSelectContent:(id)arg2;
-(void)composerExtensionWillSelectContent:(id)arg1;

@end

