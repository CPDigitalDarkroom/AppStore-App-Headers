/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/IDBclBroadcastReceiver.h>

@protocol IDBclBroadcastSender;
@class NSOperationQueue, NSHashTable, NSLock;

@interface IDMessagingService : NSObject <IDBclBroadcastReceiver> {

	id<IDBclBroadcastSender> _broadcastSender;
	NSOperationQueue* _queue;
	NSHashTable* _subscribers;
	NSLock* _subscribersAccessLock;

}

@property (retain) id<IDBclBroadcastSender> broadcastSender;                //@synthesize broadcastSender=_broadcastSender - In the implementation block
@property (retain) NSOperationQueue * queue;                                //@synthesize queue=_queue - In the implementation block
@property (retain) NSHashTable * subscribers;                               //@synthesize subscribers=_subscribers - In the implementation block
@property (nonatomic,readonly) NSLock * subscribersAccessLock;              //@synthesize subscribersAccessLock=_subscribersAccessLock - In the implementation block
-(void)processBroadcast:(id)arg1 ;
-(void)handleBroadcast:(id)arg1 ;
-(void)sendBroadcast:(id)arg1 ;
-(void)unsubscribe:(id)arg1 ;
-(void)setBroadcastSender:(id<IDBclBroadcastSender>)arg1 ;
-(id<IDBclBroadcastSender>)broadcastSender;
-(NSLock *)subscribersAccessLock;
-(id)messageWithJSONRPCString:(id)arg1 ;
-(void)broadcastMessage:(id)arg1 ;
-(void)subscribe:(id)arg1 ;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(id)init;
-(NSHashTable *)subscribers;
-(void)setSubscribers:(NSHashTable *)arg1 ;
@end

