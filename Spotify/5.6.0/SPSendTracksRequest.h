/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPSessionRequest.h>

@class NSArray, NSString;

@interface SPSendTracksRequest : SPSessionRequest {

	NSArray* _tracks;
	NSString* _message;
	NSString* _username;
	NSString* _facebookId;

}

@property (nonatomic,readonly) NSArray * tracks;                   //@synthesize tracks=_tracks - In the implementation block
@property (nonatomic,readonly) NSString * message;                 //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSString * username;                //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * facebookId;              //@synthesize facebookId=_facebookId - In the implementation block
-(NSString *)facebookId;
-(id)initWithTracks:(id)arg1 message:(id)arg2 toUsername:(id)arg3 ;
-(id)initWithTracks:(id)arg1 message:(id)arg2 toFacebookId:(id)arg3 ;
-(void)startWithSession:(id)arg1 ;
-(void)dealloc;
-(NSString *)message;
-(NSString *)username;
-(NSArray *)tracks;
@end

