/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTArtistAboutViewModelDelegate <NSObject>
@optional
-(void)artistAboutViewModel:(id)arg1 isLoading:(char)arg2;
-(void)artistAboutViewModel:(id)arg1 isOffline:(char)arg2;

@required
-(void)artistAboutViewModel:(id)arg1 failedWithError:(id)arg2;
-(void)artistAboutViewModel:(id)arg1 loadedDataWithError:(id)arg2;

@end

