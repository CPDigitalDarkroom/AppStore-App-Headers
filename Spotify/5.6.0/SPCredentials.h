/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SPCredentials : NSObject <NSCopying> {

	LoginCredentials* _credentials;

}
-(id)initAuthenticating:(id)arg1 withPassword:(id)arg2 ;
-(char)isEmptyCredentials;
-(id)initAuthenticating:(id)arg1 usingType:(int)arg2 authenticationData:(id)arg3 ;
-(LoginCredentials*)cpp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCredentials:(const LoginCredentials*)arg1 ;
-(id)username;
@end

