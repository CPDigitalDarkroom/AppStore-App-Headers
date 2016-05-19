/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTNavigationListDataSource.h>

@protocol SPTNavigationConfiguration;
@class SPTNavigationSettingsRegistration, NSString;

@interface SPTNavigationStaticListDataSource : NSObject <SPTNavigationListDataSource> {

	id<SPTNavigationConfiguration> _configuration;
	SPTNavigationSettingsRegistration* _settingsRegistration;

}

@property (assign,nonatomic,__weak) id<SPTNavigationConfiguration> configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) SPTNavigationSettingsRegistration * settingsRegistration;              //@synthesize settingsRegistration=_settingsRegistration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createNavigationListMatchingIdentifier:(id)arg1 ;
-(id)defaultNavigationResourceURL;
-(SPTNavigationSettingsRegistration *)settingsRegistration;
-(id)loadNavigationlists;
-(id)initWithNavigationConfiguration:(id)arg1 settingsRegistration:(id)arg2 ;
-(id)loadDefaultTabPriorityList;
-(id)createListChosenViaSettingsExcludingIdentifiers:(id)arg1 ;
-(id)staticListIdentifiers;
-(void)setSettingsRegistration:(SPTNavigationSettingsRegistration *)arg1 ;
-(void)setConfiguration:(id<SPTNavigationConfiguration>)arg1 ;
-(id<SPTNavigationConfiguration>)configuration;
@end

