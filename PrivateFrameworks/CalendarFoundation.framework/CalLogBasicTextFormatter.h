/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSDateFormatter, NSString;

@interface CalLogBasicTextFormatter : NSObject <CalLogFormatter> {
    NSDateFormatter *_dateFormatter;
    BOOL _includeEnvelopePartNames;
    BOOL _includeFunction;
    BOOL _includeLevel;
    BOOL _includeLogName;
    BOOL _includeMachPort;
    BOOL _includeMessage;
    BOOL _includeProcessID;
    BOOL _includeProcessName;
    BOOL _includeTimestamp;
    BOOL _useCompactForm;
    BOOL _usePrettyTimestamp;
    BOOL _useTinyEnvelopePartNames;
}

@property(retain) NSDateFormatter * dateFormatter;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL includeEnvelopePartNames;
@property BOOL includeFunction;
@property BOOL includeLevel;
@property BOOL includeLogName;
@property BOOL includeMachPort;
@property BOOL includeMessage;
@property BOOL includeProcessID;
@property BOOL includeProcessName;
@property BOOL includeTimestamp;
@property(readonly) Class superclass;
@property BOOL useCompactForm;
@property BOOL usePrettyTimestamp;
@property BOOL useTinyEnvelopePartNames;

- (void).cxx_destruct;
- (id)dateFormatter;
- (BOOL)includeEnvelopePartNames;
- (BOOL)includeFunction;
- (BOOL)includeLevel;
- (BOOL)includeLogName;
- (BOOL)includeMachPort;
- (BOOL)includeMessage;
- (BOOL)includeProcessID;
- (BOOL)includeProcessName;
- (BOOL)includeTimestamp;
- (id)init;
- (id)newFormattedString:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setIncludeEnvelopePartNames:(BOOL)arg1;
- (void)setIncludeFunction:(BOOL)arg1;
- (void)setIncludeLevel:(BOOL)arg1;
- (void)setIncludeLogName:(BOOL)arg1;
- (void)setIncludeMachPort:(BOOL)arg1;
- (void)setIncludeMessage:(BOOL)arg1;
- (void)setIncludeProcessID:(BOOL)arg1;
- (void)setIncludeProcessName:(BOOL)arg1;
- (void)setIncludeTimestamp:(BOOL)arg1;
- (void)setUseCompactForm:(BOOL)arg1;
- (void)setUsePrettyTimestamp:(BOOL)arg1;
- (void)setUseTinyEnvelopePartNames:(BOOL)arg1;
- (BOOL)useCompactForm;
- (BOOL)usePrettyTimestamp;
- (BOOL)useTinyEnvelopePartNames;

@end
