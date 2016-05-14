/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNPendingThread, NSSet;

@interface MNThreadViewModelLoaderForPendingThreadRequest : NSObject {

	unsigned long _userStoreRequestID;
	/*^block*/id _successBlock;
	/*^block*/id _progressBlock;
	/*^block*/id _failureBlock;
	MNPendingThread* _pendingThread;
	NSSet* _requestedUserIds;

}

@property (assign,nonatomic) unsigned long userStoreRequestID;                    //@synthesize userStoreRequestID=_userStoreRequestID - In the implementation block
@property (nonatomic,readonly) id successBlock;                                   //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,readonly) id progressBlock;                                  //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,readonly) id failureBlock;                                   //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy,readonly) MNPendingThread * pendingThread;              //@synthesize pendingThread=_pendingThread - In the implementation block
@property (nonatomic,copy,readonly) NSSet * requestedUserIds;                     //@synthesize requestedUserIds=_requestedUserIds - In the implementation block
-(id)successBlock;
-(id)initWithPendingThread:(id)arg1 requestedUserIds:(id)arg2 successBlock:(/*^block*/id)arg3 progressBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(unsigned long)userStoreRequestID;
-(void)setUserStoreRequestID:(unsigned long)arg1 ;
-(MNPendingThread *)pendingThread;
-(NSSet *)requestedUserIds;
-(id)description;
-(id)progressBlock;
-(id)failureBlock;
@end

