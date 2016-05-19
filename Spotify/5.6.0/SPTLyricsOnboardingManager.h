/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTLyricsOnboardingManager <NSObject>
@property (nonatomic,readonly) char shouldPresentLyricsCardFirst; 
@required
-(void)markLyricsNowPlayingViewContextMenuTappedForTrackURI:(id)arg1;
-(void)presentLyricsTinkerbellForNowPlayingViewWithAnchorView:(id)arg1 forTrackURI:(id)arg2;
-(void)dismissLyricsTinkerbell;
-(void)markActionPerformedForLyricsTinkerbell;
-(void)markLyricsNowPlayingBarButtonTappedForTrackURI:(id)arg1;
-(void)resetLyricsCardStatus;
-(char)isPresentingTinkerbell;
-(char)shouldPresentLyricsCardFirst;
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;

@end

