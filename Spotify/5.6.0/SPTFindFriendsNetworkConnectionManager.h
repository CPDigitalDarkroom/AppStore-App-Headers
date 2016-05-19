/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTFindFriendsNetworkConnectionManagerDelegate;
@class NSMutableDictionary, SPTSocialManager, SPKVObservation;

@interface SPTFindFriendsNetworkConnectionManager : NSObject {

	id<SPTFindFriendsNetworkConnectionManagerDelegate> _delegate;
	NSMutableDictionary* _networkConnectionStates;
	SPTSocialManager* _socialManager;
	SPKVObservation* _facebookStateObservation;

}

@property (assign,nonatomic,__weak) id<SPTFindFriendsNetworkConnectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * networkConnectionStates;                                   //@synthesize networkConnectionStates=_networkConnectionStates - In the implementation block
@property (assign,nonatomic,__weak) SPTSocialManager * socialManager;                                         //@synthesize socialManager=_socialManager - In the implementation block
@property (nonatomic,retain) SPKVObservation * facebookStateObservation;                                      //@synthesize facebookStateObservation=_facebookStateObservation - In the implementation block
-(id)initWithSocialManager:(id)arg1 ;
-(id)disconnectedNetworks;
-(int)disconnectedNetworkTypeAtIndex:(unsigned)arg1 ;
-(void)connectToDisconnectedNetworkAtIndex:(unsigned)arg1 ;
-(char)isConnectedToNetwork:(int)arg1 ;
-(void)setupNetworkConnectionStates;
-(void)updateFacebookConnectedState;
-(SPKVObservation *)facebookStateObservation;
-(void)setFacebookStateObservation:(SPKVObservation *)arg1 ;
-(NSMutableDictionary *)networkConnectionStates;
-(SPTSocialManager *)socialManager;
-(void)setConnectedStatusForNetworkType:(int)arg1 connected:(char)arg2 ;
-(void)setNetworkConnectionStates:(NSMutableDictionary *)arg1 ;
-(void)setSocialManager:(SPTSocialManager *)arg1 ;
-(void)setDelegate:(id<SPTFindFriendsNetworkConnectionManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<SPTFindFriendsNetworkConnectionManagerDelegate>)delegate;
@end

