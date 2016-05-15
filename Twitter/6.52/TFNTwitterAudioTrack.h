/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNDownloadDelegate.h>

@class NSDictionary, TFNDownload, NSString, UIImage, TFNTwitterAudioArtist;

@interface TFNTwitterAudioTrack : NSObject <TFNDownloadDelegate> {

	NSDictionary* _beaconURLs;
	TFNDownload* _artworkDownload;
	/*^block*/id _artworkDownloadCompletionHandler;
	NSString* _uuid;
	NSString* _title;
	NSString* _source;
	UIImage* _artwork;
	NSString* _artworkURLString;
	unsigned _ctaType;
	NSString* _ctaValue;
	NSString* _bitrate;
	TFNTwitterAudioArtist* _artist;

}

@property (nonatomic,readonly) NSString * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * source;                           //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) UIImage * artwork;                           //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) NSString * artworkURLString;                 //@synthesize artworkURLString=_artworkURLString - In the implementation block
@property (nonatomic,readonly) unsigned ctaType;                            //@synthesize ctaType=_ctaType - In the implementation block
@property (nonatomic,readonly) NSString * ctaValue;                         //@synthesize ctaValue=_ctaValue - In the implementation block
@property (nonatomic,readonly) NSString * bitrate;                          //@synthesize bitrate=_bitrate - In the implementation block
@property (nonatomic,readonly) TFNTwitterAudioArtist * artist;              //@synthesize artist=_artist - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)ctaType;
-(NSString *)ctaValue;
-(void)downloadArtworkWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)beaconURLsForAction:(id)arg1 ;
-(void)cancelArtworkDownload;
-(id)initWithJSON:(id)arg1 ;
-(unsigned)_ctaTypeFromJSON:(id)arg1 ;
-(id)_beaconURLsFromJSONArray:(id)arg1 ;
-(id)_scribeActionForBeaconKey:(id)arg1 ;
-(NSString *)artworkURLString;
-(void)statusChangedForDownload:(id)arg1 ;
-(TFNTwitterAudioArtist *)artist;
-(void)dealloc;
-(NSString *)title;
-(NSString *)source;
-(NSString *)uuid;
-(UIImage *)artwork;
-(NSString *)bitrate;
@end

