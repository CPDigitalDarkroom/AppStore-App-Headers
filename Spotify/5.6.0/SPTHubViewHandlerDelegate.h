/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTHubViewHandlerDelegate <NSObject>
@required
-(id)hubViewHandler:(id)arg1 provideItemAtIndexPath:(SPTHubIndexPath)arg2;
-(id)hubViewHandler:(id)arg1 provideBlockAtIndex:(unsigned)arg2;
-(id)provideContentSetMetadataForHubViewHandler:(id)arg1;
-(id)provideViewControllerForHubViewHandler:(id)arg1;
-(id)provideViewURIForHubViewHandler:(id)arg1;
-(void)reloadHubFromEndpointWithPath:(id)arg1;

@end

