/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTHubFeature <NSObject>
@property (nonatomic,readonly) char enablesShowEntityPageLinks; 
@property (nonatomic,readonly) id<SPTHubRegistrationToken> browseHubRegistrationToken; 
@property (nonatomic,readonly) id<SPTHubRegistrationToken> musicHubRegistrationToken; 
@property (nonatomic,readonly) id<SPTHubRegistrationToken> momentsHubRegistrationToken; 
@required
-(id<SPTHubRegistrationToken>)browseHubRegistrationToken;
-(id)provideExternalDataLoaderFactoryForHubWithRegistrationToken:(id)arg1;
-(id)registerHubWithConfiguration:(id)arg1;
-(id)registerDefaultHubWithIdentifier:(unsigned)arg1 localContentProvider:(id)arg2 viewHandler:(id)arg3;
-(id)createConfigurationForHubWithTitle:(id)arg1 rootViewURI:(id)arg2 remoteContentURLResolver:(id)arg3;
-(char)enablesShowEntityPageLinks;
-(id<SPTHubRegistrationToken>)musicHubRegistrationToken;
-(id<SPTHubRegistrationToken>)momentsHubRegistrationToken;

@end

