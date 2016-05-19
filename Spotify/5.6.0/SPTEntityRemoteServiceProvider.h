/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/SPTEntityRemoteProviderProtocol.h>

@class NSString;

@interface SPTEntityRemoteServiceProvider : NSObject <SPTEntityRemoteProviderProtocol> {

	MetadataHandler* _metadataHandler;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RefPtr<spotify::metadata::MetadataTask>*)lookupTrackWithLink:(const SpotifyLink*)arg1 callback:(const function<void (const boost::system::error_code &, const spotify::uri::SpotifyLink &, const base::RefPtr<const spotify::metadata::TrackInfo> &)>Ref)arg2 ;
-(RefPtr<spotify::metadata::MetadataTask>*)lookupArtistWithLink:(const SpotifyLink*)arg1 callback:(const function<void (const boost::system::error_code &, const spotify::uri::SpotifyLink &, const base::RefPtr<const spotify::metadata::ArtistMetadata> &)>Ref)arg2 ;
-(RefPtr<spotify::metadata::MetadataTask>*)lookupAlbumWithLink:(const SpotifyLink*)arg1 callback:(const function<void (const boost::system::error_code &, const spotify::uri::SpotifyLink &, const base::RefPtr<const spotify::metadata::AlbumMetadata> &)>Ref)arg2 ;
-(RefPtr<spotify::metadata::MetadataTask>*)lookupTracksWithLinks:(const AsArray<const spotify::uri::SpotifyLink>*)arg1 callback:(const function<void (const boost::system::error_code &, base::AsArray<const spotify::uri::SpotifyLink>, base::AsArray<base::RefPtr<const spotify::metadata::TrackInfo> >)>Ref)arg2 ;
-(RefPtr<spotify::metadata::MetadataTask>*)lookupAlbumsWithLinks:(const AsArray<const spotify::uri::SpotifyLink>*)arg1 callback:(const function<void (const boost::system::error_code &, base::AsArray<const spotify::uri::SpotifyLink>, base::AsArray<base::RefPtr<const spotify::metadata::AlbumMetadata> >)>Ref)arg2 ;
-(RefPtr<spotify::metadata::MetadataTask>*)lookupArtistsWithLinks:(const AsArray<const spotify::uri::SpotifyLink>*)arg1 callback:(const function<void (const boost::system::error_code &, base::AsArray<const spotify::uri::SpotifyLink>, base::AsArray<base::RefPtr<const spotify::metadata::ArtistMetadata> >)>Ref)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

