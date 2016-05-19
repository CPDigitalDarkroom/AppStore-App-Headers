/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/IDView.h>

@class IDLabel, IDTable;

@interface IDRhmiFeatureListMultimediaMainView : IDView {

	IDLabel* _moreAppsLabel;
	IDLabel* _notAvailableLabel;
	IDTable* _moreAppsList;

}

@property (retain) IDLabel * moreAppsLabel;                  //@synthesize moreAppsLabel=_moreAppsLabel - In the implementation block
@property (retain) IDLabel * notAvailableLabel;              //@synthesize notAvailableLabel=_notAvailableLabel - In the implementation block
@property (retain) IDTable * moreAppsList;                   //@synthesize moreAppsList=_moreAppsList - In the implementation block
-(id)initWithHmiState:(int)arg1 titleModel:(id)arg2 focusEvent:(int)arg3 ;
-(id)initWithHmiState:(int)arg1 titleModel:(id)arg2 focusEvent:(int)arg3 hmiProvider:(id)arg4 ;
-(IDLabel *)moreAppsLabel;
-(void)setMoreAppsLabel:(IDLabel *)arg1 ;
-(IDLabel *)notAvailableLabel;
-(void)setNotAvailableLabel:(IDLabel *)arg1 ;
-(IDTable *)moreAppsList;
-(void)setMoreAppsList:(IDTable *)arg1 ;
-(void)dealloc;
@end

