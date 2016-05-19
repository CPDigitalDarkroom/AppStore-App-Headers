/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/IDViewDelegate.h>
#import <Spotify/IDTableDelegate.h>

@protocol IDRhmiConnectedAppsViewControllerDelegate;
@class IDRhmiConnectedAppsView, NSSet, NSArray, NSString;

@interface IDRhmiConnectedAppsViewController : NSObject <IDViewDelegate, IDTableDelegate> {

	IDRhmiConnectedAppsView* _view;
	int _hmiLanguage;
	id<IDRhmiConnectedAppsViewControllerDelegate> _delegate;
	NSSet* _connectedBundleIdentifiers;
	NSArray* _connectedFeatureInfos;

}

@property (readonly) IDRhmiConnectedAppsView * view;                                    //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) int hmiLanguage;                                           //@synthesize hmiLanguage=_hmiLanguage - In the implementation block
@property (__weak) id<IDRhmiConnectedAppsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSSet * connectedBundleIdentifiers;                        //@synthesize connectedBundleIdentifiers=_connectedBundleIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * connectedFeatureInfos;                           //@synthesize connectedFeatureInfos=_connectedFeatureInfos - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)connectedFeatureInfos;
-(void)setConnectedBundleIdentifiers:(NSSet *)arg1 ;
-(NSSet *)connectedBundleIdentifiers;
-(void)updateConnectedApplicationListWithBundleIdentifiers:(id)arg1 ;
-(id)composedFeatureInfoFromFeatureInfoSet:(id)arg1 ;
-(id)connectedFeatureInfoListWithBundleIdentifiers:(id)arg1 ;
-(void)setConnectedFeatureInfos:(NSArray *)arg1 ;
-(void)showWithFeatureInfo:(id)arg1 ;
-(void)updateConnectedBundleIdentifiers:(id)arg1 ;
-(int)hmiLanguage;
-(void)setHmiLanguage:(int)arg1 ;
-(void)table:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
-(void)setDelegate:(id<IDRhmiConnectedAppsViewControllerDelegate>)arg1 ;
-(id)init;
-(id<IDRhmiConnectedAppsViewControllerDelegate>)delegate;
-(IDRhmiConnectedAppsView *)view;
-(void)viewDidAppear:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)updateUI;
@end

