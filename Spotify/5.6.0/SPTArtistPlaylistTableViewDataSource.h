/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTArtistArrayTableViewDataSource.h>

@protocol SPTAudioTouch;
@interface SPTArtistPlaylistTableViewDataSource : SPTArtistArrayTableViewDataSource {

	id<SPTAudioTouch> _audioTouch;

}

@property (assign,nonatomic,__weak) id<SPTAudioTouch> audioTouch;              //@synthesize audioTouch=_audioTouch - In the implementation block
-(void)setAudioTouch:(id<SPTAudioTouch>)arg1 ;
-(id<SPTAudioTouch>)audioTouch;
-(id)initWithTableView:(id)arg1 imageLoader:(id)arg2 audioTouch:(id)arg3 ;
-(void)prepareCell:(id)arg1 withItem:(id)arg2 index:(unsigned)arg3 count:(unsigned)arg4 ;
@end

