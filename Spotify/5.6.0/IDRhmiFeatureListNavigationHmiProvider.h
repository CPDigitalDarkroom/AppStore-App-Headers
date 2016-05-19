/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/IDHmiProvider.h>

@class IDMultimediaInfo, IDStatusBar, IDButton, NSDictionary, NSString;

@interface IDRhmiFeatureListNavigationHmiProvider : NSObject <IDHmiProvider> {

	IDMultimediaInfo* _multimediaInfo;
	IDStatusBar* _hmiStatusBar;
	IDButton* _entryButtonIDRhmiFeatureListNavigation;
	NSDictionary* _viewDict;
	NSDictionary* _modelDict;

}

@property (retain) IDMultimediaInfo * multimediaInfo;                                //@synthesize multimediaInfo=_multimediaInfo - In the implementation block
@property (retain) IDStatusBar * hmiStatusBar;                                       //@synthesize hmiStatusBar=_hmiStatusBar - In the implementation block
@property (readonly) IDButton * entryButtonIDRhmiFeatureListNavigation;              //@synthesize entryButtonIDRhmiFeatureListNavigation=_entryButtonIDRhmiFeatureListNavigation - In the implementation block
@property (retain) NSDictionary * viewDict;                                          //@synthesize viewDict=_viewDict - In the implementation block
@property (retain) NSDictionary * modelDict;                                         //@synthesize modelDict=_modelDict - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)modelForId:(int)arg1 ;
-(id)allModels;
-(id)viewForId:(int)arg1 ;
-(IDMultimediaInfo *)multimediaInfo;
-(IDStatusBar *)hmiStatusBar;
-(void)setMultimediaInfo:(IDMultimediaInfo *)arg1 ;
-(void)setHmiStatusBar:(IDStatusBar *)arg1 ;
-(IDButton *)entryButtonIDRhmiFeatureListNavigation;
-(NSDictionary *)viewDict;
-(void)setViewDict:(NSDictionary *)arg1 ;
-(NSDictionary *)modelDict;
-(void)setModelDict:(NSDictionary *)arg1 ;
-(id)init;
-(id)allViews;
@end

