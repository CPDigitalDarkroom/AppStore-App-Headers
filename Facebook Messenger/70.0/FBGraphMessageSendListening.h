/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphMessageSendListening <NSObject>
@required
-(void)graphMessageSendRequestRunnerWillSendMessage:(id)arg1;
-(void)graphMessageSendRequestRunnerDidUpdateProgressForMessage:(id)arg1 didUpdateUploadProgress:(float)arg2;
-(void)graphMessageSendRequestRunnerDidSendMessage:(id)arg1 messageId:(id)arg2;
-(void)graphMessageSendRequestRunnerDidCancelSendingMessage:(id)arg1;
-(void)graphMessageSendRequestRunnerCouldNotSendMessage:(id)arg1 error:(id)arg2;
-(void)graphMessageSendRequestRunnerWillRetrySendingMessage:(id)arg1;

@end

