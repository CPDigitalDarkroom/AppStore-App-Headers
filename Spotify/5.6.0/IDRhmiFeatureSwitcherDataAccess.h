/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSLock;

@interface IDRhmiFeatureSwitcherDataAccess : NSObject {

	NSMutableDictionary* _dataSource;
	NSString* _dataSourcePath;
	NSLock* _dataSourceAccessLock;

}

@property (nonatomic,retain) NSString * dataSourcePath;                       //@synthesize dataSourcePath=_dataSourcePath - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSLock * dataSourceAccessLock;                 //@synthesize dataSourceAccessLock=_dataSourceAccessLock - In the implementation block
+(id)defaultFeatureSwitcherDataAccessForCurrentVehicle;
+(id)defaultFeatureSwitcherDataAccessWithVehicleInfo:(id)arg1 ;
-(id)initWithVehicleInfo:(id)arg1 ;
-(void)setDataSourcePathWithVehicleInfo:(id)arg1 ;
-(id)dataSourcePathFromVehicleInfo:(id)arg1 ;
-(id)initWithDataSourcePath:(id)arg1 ;
-(void)setDataSourcePath:(NSString *)arg1 ;
-(NSLock *)dataSourceAccessLock;
-(id)loadDataSourceFromFileSystem;
-(id)featureInfosPassingTest:(/*^block*/id)arg1 ;
-(void)writeDataSourceToFileSystem:(id)arg1 ;
-(NSString *)dataSourcePath;
-(id)allFeatureInfos;
-(id)featureInfosPassingFilter:(id)arg1 ;
-(void)persistFeatureInfo:(id)arg1 ;
-(void)deleteFeatureInfo:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)dataSource;
@end

