/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPSessionObserver.h>
#import <Spotify/SPObjectRepresentation.h>

@class SPSession, NSDate, NSString;

@interface SPTPlaybackStateRestorer : NSObject <SPSessionObserver, SPObjectRepresentation> {

	SPSession* _session;
	/*^block*/id _knownToBeOffline;
	NSDate* _onlineWaitStartDate;
	NSString* _clientStateToRestore;

}

@property (nonatomic,retain) NSString * clientStateToRestore;              //@synthesize clientStateToRestore=_clientStateToRestore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectRepresentation;
-(void)sessionLoginModeChanged:(id)arg1 ;
-(char)restoreWithObjectRepresentation:(id)arg1 ;
-(NSString *)clientStateToRestore;
-(void)setClientStateToRestore:(NSString *)arg1 ;
-(void)beginWaitingForOnlineMode;
-(id)initWithSession:(id)arg1 knownToBeOffline:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)cleanup;
-(char)hasTimedOut;
@end

