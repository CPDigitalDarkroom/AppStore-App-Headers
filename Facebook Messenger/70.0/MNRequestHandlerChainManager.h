/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNChainRequestReceiving.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@protocol MNChainRequestReceiving;
@class NSString;

@interface MNRequestHandlerChainManager : NSObject <MNChainRequestReceiving, FBSessionClassProvidable> {

	id<MNChainRequestReceiving> _runner;
	id<MNChainRequestReceiving> _mainThreadRunner;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleMessageFetchRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleMessageBatchRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleBatchThreadSummaryRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleBatchThreadRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleJointRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleSecureThreadRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleBatchSecureAndSyncedThreadRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleThreadListRequest:(id)arg1 listener:(id)arg2 ;
-(void)handleJointThreadListRequest:(id)arg1 listener:(id)arg2 ;
-(id)initWithMemorySummaryHandler:(id)arg1 memoryHandler:(id)arg2 memoryMessageHandler:(id)arg3 diskHandler:(id)arg4 diskMessageHandler:(id)arg5 remoteHandler:(id)arg6 remoteMessageHandler:(id)arg7 remoteJointHandler:(id)arg8 threadListMemoryHandler:(id)arg9 threadListDiskHandler:(id)arg10 threadListSnapshotMergingHandler:(id)arg11 secureThreadRequestHandler:(id)arg12 secureThreadMemoryHandler:(id)arg13 secureThreadListRequestHandler:(id)arg14 threadListNetworkFetchingFactory:(id)arg15 authenticationManager:(id)arg16 ;
-(id)init;
@end

