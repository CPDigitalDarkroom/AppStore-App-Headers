/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBMusicSong, FBMemExternalMusicAlbum;

@interface FBCompositionLinkSharePreview : NSObject <NSCopying, NSCoding> {

	unsigned _subtype;
	FBMusicSong* _musicSong_song;
	FBMusicSong* _musicAlbum_song;
	FBMemExternalMusicAlbum* _musicAlbum_albumMetadata;

}
+(id)musicAlbumWithSong:(id)arg1 albumMetadata:(id)arg2 ;
+(id)musicSongWithSong:(id)arg1 ;
+(id)none;
-(void)matchNone:(/*^block*/id)arg1 musicSong:(/*^block*/id)arg2 musicAlbum:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

