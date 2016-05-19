/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUBViewModelJSONSchema <NSObject>
@property (nonatomic,retain) id<HUBJSONStringPath> identifierPath; 
@property (nonatomic,retain) id<HUBJSONStringPath> featureIdentifierPath; 
@property (nonatomic,retain) id<HUBJSONStringPath> entityIdentifierPath; 
@property (nonatomic,retain) id<HUBJSONStringPath> navigationBarTitlePath; 
@property (nonatomic,retain) id<HUBJSONDictionaryPath> headerComponentModelDictionaryPath; 
@property (nonatomic,retain) id<HUBJSONDictionaryPath> bodyComponentModelDictionariesPath; 
@property (nonatomic,retain) id<HUBJSONURLPath> extensionURLPath; 
@property (nonatomic,retain) id<HUBJSONDictionaryPath> customDataPath; 
@required
-(id<HUBJSONDictionaryPath>)customDataPath;
-(id<HUBJSONStringPath>)identifierPath;
-(void)setFeatureIdentifierPath:(id)arg1;
-(void)setEntityIdentifierPath:(id)arg1;
-(void)setNavigationBarTitlePath:(id)arg1;
-(void)setHeaderComponentModelDictionaryPath:(id)arg1;
-(void)setBodyComponentModelDictionariesPath:(id)arg1;
-(void)setExtensionURLPath:(id)arg1;
-(void)setIdentifierPath:(id)arg1;
-(void)setCustomDataPath:(id)arg1;
-(id<HUBJSONStringPath>)featureIdentifierPath;
-(id<HUBJSONStringPath>)entityIdentifierPath;
-(id<HUBJSONStringPath>)navigationBarTitlePath;
-(id<HUBJSONURLPath>)extensionURLPath;
-(id<HUBJSONDictionaryPath>)headerComponentModelDictionaryPath;
-(id<HUBJSONDictionaryPath>)bodyComponentModelDictionariesPath;
-(id)copy;

@end

