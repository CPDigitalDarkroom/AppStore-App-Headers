/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/PubNubChannelDelegate.h>

@protocol PubNubClientDelegate;
@class NSString, PubNubChannel, NSDictionary;

@interface PubNubClient : NSObject <PubNubChannelDelegate> {

	NSString* _clientUuid;
	PubNubChannel* _channel;
	PubNubChannel* _presenceChannel;
	id<PubNubClientDelegate> _delegate;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) PubNubChannel * channel;                             //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic,__weak) id<PubNubClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pubNubChannel:(id)arg1 state:(unsigned)arg2 ;
-(void)pubNubChannel:(id)arg1 messages:(id)arg2 receivedDate:(id)arg3 ;
-(id)initWithChannel:(id)arg1 uuid:(id)arg2 authKey:(id)arg3 subscriberKey:(id)arg4 publisherKey:(id)arg5 ;
-(void)disconnectWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<PubNubClientDelegate>)arg1 ;
-(id<PubNubClientDelegate>)delegate;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(PubNubChannel *)channel;
@end

