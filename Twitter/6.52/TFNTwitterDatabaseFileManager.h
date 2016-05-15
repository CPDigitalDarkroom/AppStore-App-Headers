/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSBundle;

@interface TFNTwitterDatabaseFileManager : NSObject {

	NSString* _databaseDirectory;
	NSBundle* _bundle;

}
+(id)defaultManager;
-(void)deleteAllDatabaseFiles;
-(id)_databaseDirectoryForInstance:(id)arg1 ;
-(id)_databaseDirectoryForInstance:(id)arg1 fullVersion:(id)arg2 ;
-(id)pathForBundledDatabaseInstanceWithFilename:(id)arg1 ;
-(id)pathForDatabaseInstance:(id)arg1 filename:(id)arg2 fullVersion:(id)arg3 ;
-(char)deployDatabaseInstance:(id)arg1 filename:(id)arg2 fullVersion:(id)arg3 ;
-(void)deleteAllDatabaseFilesForInstance:(id)arg1 ;
-(id)bundle;
-(void)setBundle:(id)arg1 ;
-(id)_databaseDirectory;
@end

