/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPContextMenuActionsFactory <NSObject>
@required
-(id)actionForURI:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3 actionIdentifier:(id)arg4;
-(id)actionForURIs:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3 containerURL:(id)arg4 playlistName:(id)arg5 actionIdentifier:(id)arg6;
-(id)actionForURI:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3 tracks:(id)arg4 actionIdentifier:(id)arg5;
-(id)actionForURI:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3 itemName:(id)arg4 creatorName:(id)arg5 sourceName:(id)arg6 imageURL:(id)arg7 clipboardLinkTitle:(id)arg8 actionIdentifier:(id)arg9;
-(id)goToArtistWithURL:(id)arg1 logContext:(id)arg2;
-(id)goToAlbumWithAlbumURL:(id)arg1 logContext:(id)arg2;
-(id)followArtist:(id)arg1 logContext:(id)arg2;
-(void)registerActionForShortPredicate:(/*^block*/id)arg1 actionIdentifier:(id)arg2;
-(id)offlineSync:(id)arg1 tracksOrder:(id)arg2 offlineController:(id)arg3 logContext:(id)arg4;
-(void)registerActionForPredicate:(/*^block*/id)arg1 actionIdentifier:(id)arg2;
-(void)registerActionForSharePredicate:(/*^block*/id)arg1 actionIdentifier:(id)arg2;
-(void)registerActionForTracksPredicate:(/*^block*/id)arg1 actionIdentifier:(id)arg2;
-(void)registerActionForURIContainerPredicate:(/*^block*/id)arg1 actionIdentifier:(id)arg2;
-(id)actionForURIs:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3 actionIdentifier:(id)arg4 title:(id)arg5 albumTitle:(id)arg6 artistTitle:(id)arg7 imageURL:(id)arg8 clipboardLinkTitle:(id)arg9 tracks:(id)arg10 containerEntityURL:(id)arg11;

@end

